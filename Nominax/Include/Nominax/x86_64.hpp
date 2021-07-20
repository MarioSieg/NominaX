// File: x86_64.hpp
// Author: Mario
// Created: 06.07.2021 2:12 PM
// Project: NominaxRuntime
// 
//                                  Apache License
//                            Version 2.0, January 2004
//                         http://www.apache.org/licenses/
// 
//    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
// 
//    1. Definitions.
// 
//       "License" shall mean the terms and conditions for use, reproduction,
//       and distribution as defined by Sections 1 through 9 of this document.
// 
//       "Licensor" shall mean the copyright owner or entity authorized by
//       the copyright owner that is granting the License.
// 
//       "Legal Entity" shall mean the union of the acting entity and all
//       other entities that control, are controlled by, or are under common
//       control with that entity. For the purposes of this definition,
//       "control" means (i) the power, direct or indirect, to cause the
//       direction or management of such entity, whether by contract or
//       otherwise, or (ii) ownership of fifty percent (50%) or more of the
//       outstanding shares, or (iii) beneficial ownership of such entity.
// 
//       "You" (or "Your") shall mean an individual or Legal Entity
//       exercising permissions granted by this License.
// 
//       "Source" form shall mean the preferred form for making modifications,
//       including but not limited to software source code, documentation
//       source, and configuration files.
// 
//       "Object" form shall mean any form resulting from mechanical
//       transformation or translation of a Source form, including but
//       not limited to compiled object code, generated documentation,
//       and conversions to other media types.
// 
//       "Work" shall mean the work of authorship, whether in Source or
//       Object form, made available under the License, as indicated by a
//       copyright notice that is included in or attached to the work
//       (an example is provided in the Appendix below).
// 
//       "Derivative Works" shall mean any work, whether in Source or Object
//       form, that is based on (or derived from) the Work and for which the
//       editorial revisions, annotations, elaborations, or other modifications
//       represent, as a whole, an original work of authorship. For the purposes
//       of this License, Derivative Works shall not include works that remain
//       separable from, or merely link (or bind by name) to the interfaces of,
//       the Work and Derivative Works thereof.
// 
//       "Contribution" shall mean any work of authorship, including
//       the original version of the Work and any modifications or additions
//       to that Work or Derivative Works thereof, that is intentionally
//       submitted to Licensor for inclusion in the Work by the copyright owner
//       or by an individual or Legal Entity authorized to submit on behalf of
//       the copyright owner. For the purposes of this definition, "submitted"
//       means any form of electronic, verbal, or written communication sent
//       to the Licensor or its representatives, including but not limited to
//       communication on electronic mailing lists, source code control systems,
//       and issue tracking systems that are managed by, or on behalf of, the
//       Licensor for the purpose of discussing and improving the Work, but
//       excluding communication that is conspicuously marked or otherwise
//       designated in writing by the copyright owner as "Not a Contribution."
// 
//       "Contributor" shall mean Licensor and any individual or Legal Entity
//       on behalf of whom a Contribution has been received by Licensor and
//       subsequently incorporated within the Work.
// 
//    2. Grant of Copyright License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       copyright license to reproduce, prepare Derivative Works of,
//       publicly display, publicly perform, sublicense, and distribute the
//       Work and such Derivative Works in Source or Object form.
// 
//    3. Grant of Patent License. Subject to the terms and conditions of
//       this License, each Contributor hereby grants to You a perpetual,
//       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
//       (except as stated in this section) patent license to make, have made,
//       use, offer to sell, sell, import, and otherwise transfer the Work,
//       where such license applies only to those patent claims licensable
//       by such Contributor that are necessarily infringed by their
//       Contribution(s) alone or by combination of their Contribution(s)
//       with the Work to which such Contribution(s) was submitted. If You
//       institute patent litigation against any entity (including a
//       cross-claim or counterclaim in a lawsuit) alleging that the Work
//       or a Contribution incorporated within the Work constitutes direct
//       or contributory patent infringement, then any patent licenses
//       granted to You under this License for that Work shall terminate
//       as of the date such litigation is filed.
// 
//    4. Redistribution. You may reproduce and distribute copies of the
//       Work or Derivative Works thereof in any medium, with or without
//       modifications, and in Source or Object form, provided that You
//       meet the following conditions:
// 
//       (a) You must give any other recipients of the Work or
//           Derivative Works a copy of this License; and
// 
//       (b) You must cause any modified files to carry prominent notices
//           stating that You changed the files; and
// 
//       (c) You must retain, in the Source form of any Derivative Works
//           that You distribute, all copyright, patent, trademark, and
//           attribution notices from the Source form of the Work,
//           excluding those notices that do not pertain to any part of
//           the Derivative Works; and
// 
//       (d) If the Work includes a "NOTICE" text file as part of its
//           distribution, then any Derivative Works that You distribute must
//           include a readable copy of the attribution notices contained
//           within such NOTICE file, excluding those notices that do not
//           pertain to any part of the Derivative Works, in at least one
//           of the following places: within a NOTICE text file distributed
//           as part of the Derivative Works; within the Source form or
//           documentation, if provided along with the Derivative Works; or,
//           within a display generated by the Derivative Works, if and
//           wherever such third-party notices normally appear. The contents
//           of the NOTICE file are for informational purposes only and
//           do not modify the License. You may add Your own attribution
//           notices within Derivative Works that You distribute, alongside
//           or as an addendum to the NOTICE text from the Work, provided
//           that such additional attribution notices cannot be construed
//           as modifying the License.
// 
//       You may add Your own copyright statement to Your modifications and
//       may provide additional or different license terms and conditions
//       for use, reproduction, or distribution of Your modifications, or
//       for any such Derivative Works as a whole, provided Your use,
//       reproduction, and distribution of the Work otherwise complies with
//       the conditions stated in this License.
// 
//    5. Submission of Contributions. Unless You explicitly state otherwise,
//       any Contribution intentionally submitted for inclusion in the Work
//       by You to the Licensor shall be under the terms and conditions of
//       this License, without any additional terms or conditions.
//       Notwithstanding the above, nothing herein shall supersede or modify
//       the terms of any separate license agreement you may have executed
//       with Licensor regarding such Contributions.
// 
//    6. Trademarks. This License does not grant permission to use the trade
//       names, trademarks, service marks, or product names of the Licensor,
//       except as required for reasonable and customary use in describing the
//       origin of the Work and reproducing the content of the NOTICE file.
// 
//    7. Disclaimer of Warranty. Unless required by applicable law or
//       agreed to in writing, Licensor provides the Work (and each
//       Contributor provides its Contributions) on an "AS IS" BASIS,
//       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
//       implied, including, without limitation, any warranties or conditions
//       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
//       PARTICULAR PURPOSE. You are solely responsible for determining the
//       appropriateness of using or redistributing the Work and assume any
//       risks associated with Your exercise of permissions under this License.
// 
//    8. Limitation of Liability. In no event and under no legal theory,
//       whether in tort (including negligence), contract, or otherwise,
//       unless required by applicable law (such as deliberate and grossly
//       negligent acts) or agreed to in writing, shall any Contributor be
//       liable to You for damages, including any direct, indirect, special,
//       incidental, or consequential damages of any character arising as a
//       result of this License or out of the use or inability to use the
//       Work (including but not limited to damages for loss of goodwill,
//       work stoppage, computer failure or malfunction, or any and all
//       other commercial damages or losses), even if such Contributor
//       has been advised of the possibility of such damages.
// 
//    9. Accepting Warranty or Additional Liability. While redistributing
//       the Work or Derivative Works thereof, You may choose to offer,
//       and charge a fee for, acceptance of support, warranty, indemnity,
//       or other liability obligations and/or rights consistent with this
//       License. However, in accepting such obligations, You may act only
//       on Your own behalf and on Your sole responsibility, not on behalf
//       of any other Contributor, and only if You agree to indemnify,
//       defend, and hold each Contributor harmless for any liability
//       incurred by, or claims asserted against, such Contributor by reason
//       of your accepting any such warranty or additional liability.
// 
//    END OF TERMS AND CONDITIONS
// 
//    APPENDIX: How to apply the Apache License to your work.
// 
//       To apply the Apache License to your work, attach the following
//       boilerplate notice, with the fields enclosed by brackets "[]"
//       replaced with your own identifying information. (Don't include
//       the brackets!)  The text should be enclosed in the appropriate
//       comment syntax for the file format. We also recommend that a
//       file or class name and description of purpose be included on the
//       same "printed page" as the copyright notice for easier
//       identification within third-party archives.
// 
//    Copyright 2021 Mario Sieg "pinsrq" <mt3000@gmx.de>
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#pragma once

#include "Foundation.hpp"

namespace Nominax::Assembler::X86_64
{
	namespace Routines
	{
		/// <summary>
		/// Returns a special constant value depending on the OS for testing.
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto MockCall() -> U64;

		/// <summary>
		/// Tries to detect a VM using time stamp counter.
		/// Warning! Do not use this! On most systems it will crash
		/// because the in instruction cannot get executed from user space.
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto VmDetector() -> bool;

		/// <summary>
		/// Detects vm ware using a port read action.
		/// Warning! Do not use this! On most systems it will crash
		/// because the in instruction cannot get executed from user space.
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto VmWareDetector() -> bool;

		/// <summary>
		/// Assembly routine which calls cpuid
		/// multiple time to determine all cpu features.
		/// The first 6 feature tables are returned via
		/// out1, out2 and out3. Each contains two info tables.
		/// (See MergedInfoTable). The last info table is returned
		/// as return value. Do not use this function, better use
		/// CpuFeatureBits instead, which calls this function in the
		/// constructor.
		/// Implementation: Source/Arch/X86_64.CpuId.S
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto CpuId
		(
			U64* out1,
			U64* out2,
			U64* out3
		) -> U32;

		/// <summary>
		/// Queries the 16 GPR 64-bit registers and the 16 XMM 128-bit registers.
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto QueryRegSet(U64 gpr[16], U64 sse[32]) -> void;

		/// <summary>
		/// Returns 1 if the current CPU supports the CPUID instruction, else 0.
		/// Implementation: Source/Arch/X86_64.CpuId.S
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto IsCpuIdSupported() -> bool;

		/// <summary>
		/// Returns true if the OS supports AVX YMM registers, else false.
		/// Warning! Check if os supports OSXSAVE first!
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto IsAvxSupportedByOs() -> bool;

		/// <summary>
		/// Returns true if the OS supports AVX512 ZMM registers, else false.
		/// Warning! Check if os supports OSXSAVE first!
		/// </summary>
		extern "C" NOX_ASM_ROUTINE auto IsAvx512SupportedByOs() -> bool;

		/// <summary>
		/// Queries the value of the %rip instruction pointer.
		/// </summary>
		/// <returns></returns>
		[[nodiscard]]
		inline auto QueryRip() -> const void*
		{
			UIP64 rip;
			asm volatile
			(
				"call 1f \n\t"
				"1: popq %0"
				: "=r"(rip)
			);
			return reinterpret_cast<const void*>(rip);
		}
	}

	constexpr U8 LOCK {0xF0};
	constexpr U8 REPNE_REPNZ {0xF2};
	constexpr U8 REP_REPE_REPZ {0xF3};
	constexpr U8 REX_W {0x48};
	constexpr U8 OPERAND_OVERRIDE {0x66};
	constexpr U8 ADDRESS_OVERRIDE {0x67};
	constexpr U8 TWO_BYTE_PREFIX {0x0F};

	/// <summary>
	/// ModRM byte field entries.
	/// </summary>
	enum class ModRm : U8
	{
		RegisterIndirect = 0b0000'0000,
		OneByteSignedDisplace = 0b0000'0001,
		FourByteSignedDisplace = 0b0000'0010,
		RegisterAddressing = 0b0000'0011
	};

	/// <summary>
	/// Scale index byte scale factors.
	/// </summary>
	enum class SibScale : U8
	{
		Factor1 = 0b0000'0000,
		Factor2 = 0b0000'0001,
		Factor4 = 0b0000'0010,
		Factor8 = 0b0000'0011
	};

	/// <summary>
	/// Pack a REX prefix:
	/// +---+---+---+---+---+---+---+---+
	/// | 0 | 1 | 0 | 0 | W | R | X | B |
	/// +---+---+---+---+---+---+---+---+
	/// </summary>
	/// <param name="w"></param>
	/// <param name="r"></param>
	/// <param name="x"></param>
	/// <param name="b"></param>
	/// <returns>The composed rex prefix.</returns>
	constexpr auto PackRex(const bool w, const bool r, const bool x, const bool b) -> U8
	{
		U8 rex {0x40};
		rex |= b;
		rex |= x << 1;
		rex |= r << 2;
		rex |= w << 3;
		return rex;
	}

	/// <summary>
	/// Pack a REX prefix if optional, else return zero.
	/// </summary>
	/// <param name="w"></param>
	/// <param name="r"></param>
	/// <param name="x"></param>
	/// <param name="b"></param>
	/// <returns>The composed rex prefix or zero.</returns>
	constexpr auto PackRexOpt(const bool w, const bool r, const bool x, const bool b) -> U8
	{
		return w || r || x || b ? PackRex(w, r, x, b) : 0;
	}

	/// <summary>
	/// Packs the bits into the specified order:
	/// +-----------+-----------+-------+
	/// | bits01 |  bits234 |  bits567  |
	/// +---+---+---+---+---+---+---+---+
	/// | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
	/// +---+---+---+---+---+---+---+---+
	/// </summary>
	/// <param name="bits01"></param>
	/// <param name="bits234"></param>
	/// <param name="bits567"></param>
	/// <returns>The composed mod rm sib byte.</returns>
	constexpr auto PackModRm(const U8 bits01, const U8 bits234, const U8 bits567) -> U8
	{
		NOX_DBG_PAS_TRUE((bits01 & ~0b11) == 0, "Mask mismatch -> 2 bits requested");
		NOX_DBG_PAS_TRUE((bits234 & ~0b111) == 0, "Mask mismatch -> 3 bits requested");
		NOX_DBG_PAS_TRUE((bits567 & ~0b111) == 0, "Mask mismatch -> 3 bits requested");
		U8 trio {bits567};
		trio &= ~0xF8;
		trio |= (bits234 & ~0xF8) << 3;
		trio |= (bits01 & ~0xFC) << 6;
		return trio;
	}

	/// <summary>
	/// Writes a NOP chain of the specified size into the needle.
	/// </summary>
	/// <param name="needle">The machine code needle. Must have at least size elements.</param>
	/// <param name="size">The NOP chain size between 1 and 15 inclusive.</param>
	extern auto InjectNopChain(U8* needle, U8 size) -> void;

	/// <summary>
	/// Contains all registers supported by the JIT compiler.
	/// </summary>
	enum class Register : U8
	{
		RAX,
		RBX,
		RCX,
		RDX,
		RSI,
		RDI,
		RBP,
		RSP,
		R8,
		R9,
		R10,
		R11,
		R12,
		R13,
		R14,
		R15,

		$Count
	};

	/// <summary>
	/// Machine code id table for all registers.
	/// </summary>
	constexpr std::array<U8, static_cast<U64>(Register::$Count)> REGISTER_ID_TABLE
	{
		0x00, 0x03,
		0x01, 0x02,
		0x06, 0x07,
		0x05, 0x04,
		0x00, 0x01,
		0x02, 0x03,
		0x04, 0x05,
		0x06, 0x07
	};

	/// <summary>
	/// Mnemonic name table of all registers.
	/// </summary>
	constexpr std::array<std::string_view, static_cast<U64>(Register::$Count)> REGISTER_MNEMONIC_TABLE
	{
		"rax",
		"rbx",
		"rcx",
		"rdx",
		"rsi",
		"rdi",
		"rbp",
		"rsp",
		"r8",
		"r9",
		"r10",
		"r11",
		"r12",
		"r13",
		"r14",
		"r15"
	};

	/// <summary>
	/// These registers must be preserved across function calls.
	/// </summary>
	[[maybe_unused]]
	constexpr std::array CALLE_SAVED_REGISTERS
	{
		Register::RBX,
		Register::RSP,
		Register::RBP,
		Register::R12,
		Register::R13,
		Register::R14,
		Register::R15,
	};
}
