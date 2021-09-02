use crate::ast::table::FunctionTable;
use crate::ast::*;
use crate::error::list::ErrorList;

pub struct AstProcessorContext<'a> {
    pub error_list: ErrorList,
    pub function_table: FunctionTable<'a>,
    pub current_module: QualifiedName<'a>,
}

impl<'a> AstProcessorContext<'a> {
    pub fn new() -> Self {
        Self {
            error_list: ErrorList::new(),
            function_table: FunctionTable::new(),
            current_module: "",
        }
    }

    pub fn process_ast(&mut self, root: RootList<'a>) -> &ErrorList {
        for node in root {
            self.process_node(node);
        }
        &self.error_list
    }

    pub fn process_node(&mut self, node: Node<'a>) {
        match node {
            Node::Module(name) => self.process_module(name),
            Node::Function(func) => self.process_function(func),
            Node::QualifiedName(name) => self.process_qualified_name(name),
            Node::Identifier(ident) => self.process_identifier(ident),
        }
    }

    pub fn process_module(&mut self, name: QualifiedName<'a>) {
        self.current_module = name;
    }

    pub fn process_function(&mut self, func: Function) {
        println!("FUN: {}", func);
    }

    pub fn process_qualified_name(&mut self, name: QualifiedName) {
        println!("NAME: {}", name);
    }

    pub fn process_identifier(&mut self, ident: Identifier) {
        println!("IDENT: {}", ident);
    }
}
