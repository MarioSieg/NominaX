// File: Asm_x86_64_Jitdb14.cpp
// Author: Mario
// Created: 26.07.2021 4:26 PM
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

#include "../../Include/Nominax/Assembler/_Assembler.hpp"

namespace Nominax::Assembler::X86_64
{
	NOX_NEVER_INLINE NOX_COLD auto GetVariationTable_14(std::pmr::monotonic_buffer_resource& allocator, std::pmr::vector<InstructionVariationPool>& out) -> void
	{
		std::pmr::vector<InstructionVariation> instruction {&allocator};
		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpckhdq",
				.GasMnemonic = "punpckhdq",
				.Description = "punpckhdq mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhdq",
				.GasMnemonic = "punpckhdq",
				.Description = "punpckhdq mm, m64",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhdq",
				.GasMnemonic = "punpckhdq",
				.Description = "punpckhdq xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhdq",
				.GasMnemonic = "punpckhdq",
				.Description = "punpckhdq xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpckhqdq",
				.GasMnemonic = "punpckhqdq",
				.Description = "punpckhqdq xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6d,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhqdq",
				.GasMnemonic = "punpckhqdq",
				.Description = "punpckhqdq xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6d,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpckhwd",
				.GasMnemonic = "punpckhwd",
				.Description = "punpckhwd mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x69,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhwd",
				.GasMnemonic = "punpckhwd",
				.Description = "punpckhwd mm, m64",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x69,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhwd",
				.GasMnemonic = "punpckhwd",
				.Description = "punpckhwd xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x69,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckhwd",
				.GasMnemonic = "punpckhwd",
				.Description = "punpckhwd xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x69,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpcklbw",
				.GasMnemonic = "punpcklbw",
				.Description = "punpcklbw mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x60,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklbw",
				.GasMnemonic = "punpcklbw",
				.Description = "punpcklbw mm, m32",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x60,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklbw",
				.GasMnemonic = "punpcklbw",
				.Description = "punpcklbw xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x60,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklbw",
				.GasMnemonic = "punpcklbw",
				.Description = "punpcklbw xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x60,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpckldq",
				.GasMnemonic = "punpckldq",
				.Description = "punpckldq mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x62,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckldq",
				.GasMnemonic = "punpckldq",
				.Description = "punpckldq mm, m32",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x62,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckldq",
				.GasMnemonic = "punpckldq",
				.Description = "punpckldq xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x62,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpckldq",
				.GasMnemonic = "punpckldq",
				.Description = "punpckldq xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x62,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpcklqdq",
				.GasMnemonic = "punpcklqdq",
				.Description = "punpcklqdq xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6c,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklqdq",
				.GasMnemonic = "punpcklqdq",
				.Description = "punpcklqdq xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x6c,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "punpcklwd",
				.GasMnemonic = "punpcklwd",
				.Description = "punpcklwd mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x61,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklwd",
				.GasMnemonic = "punpcklwd",
				.Description = "punpcklwd mm, m32",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x61,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklwd",
				.GasMnemonic = "punpcklwd",
				.Description = "punpcklwd xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x61,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "punpcklwd",
				.GasMnemonic = "punpcklwd",
				.Description = "punpcklwd xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x61,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushq",
				.Description = "pushq imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0x6a,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushq",
				.Description = "pushq imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0x68,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushw",
				.Description = "pushw r16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x50,
							.Addend = {OperandType::R16},
						},
					},
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xff,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushq",
				.Description = "pushq r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x50,
							.Addend = {OperandType::R64},
						},
					},
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xff,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushw",
				.Description = "pushw m16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xff,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "push",
				.GasMnemonic = "pushq",
				.Description = "pushq m64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xff,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "pxor",
				.GasMnemonic = "pxor",
				.Description = "pxor mm, mm",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Mm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xef,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Mm},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "pxor",
				.GasMnemonic = "pxor",
				.Description = "pxor mm, m64",
				.MmxMode = MmxModeType::Mmx,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Mm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Mmx,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Mm},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xef,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::Mm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "pxor",
				.GasMnemonic = "pxor",
				.Description = "pxor xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xef,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "pxor",
				.GasMnemonic = "pxor",
				.Description = "pxor xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xef,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclb",
				.Description = "rclb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclw",
				.Description = "rclw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rcll",
				.Description = "rcll m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x2)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcl",
				.GasMnemonic = "rclq",
				.Description = "rclq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x2)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rcpps",
				.GasMnemonic = "rcpps",
				.Description = "rcpps xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x53,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcpps",
				.GasMnemonic = "rcpps",
				.Description = "rcpps xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x53,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rcpss",
				.GasMnemonic = "rcpss",
				.Description = "rcpss xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0xf3,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x53,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcpss",
				.GasMnemonic = "rcpss",
				.Description = "rcpss xmm, m32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0xf3,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x53,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrb",
				.Description = "rcrb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrw",
				.Description = "rcrw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrl",
				.Description = "rcrl m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rcr",
				.GasMnemonic = "rcrq",
				.Description = "rcrq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x3)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rdrand",
				.GasMnemonic = "rdrand",
				.Description = "rdrand r16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdrand,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rdrand",
				.GasMnemonic = "rdrand",
				.Description = "rdrand r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdrand,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rdrand",
				.GasMnemonic = "rdrand",
				.Description = "rdrand r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdrand,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x6)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rdseed",
				.GasMnemonic = "rdseed",
				.Description = "rdseed r16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdseed,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rdseed",
				.GasMnemonic = "rdseed",
				.Description = "rdseed r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdseed,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rdseed",
				.GasMnemonic = "rdseed",
				.Description = "rdseed r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdseed,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xc7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rdtsc",
				.GasMnemonic = "rdtsc",
				.Description = "rdtsc",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
					ImplicitRegisterOperand::Edx,
					ImplicitRegisterOperand::Eax,
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdtsc,
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x31,
							.Addend = {UINT64_C(0x0)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rdtscp",
				.GasMnemonic = "rdtscp",
				.Description = "rdtscp",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
					ImplicitRegisterOperand::Ecx,
					ImplicitRegisterOperand::Edx,
					ImplicitRegisterOperand::Eax,
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Rdtscp,
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x1,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xf9,
							.Addend = {UINT64_C(0x0)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "ret",
				.GasMnemonic = "ret",
				.Description = "ret",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0xc3,
							.Addend = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ret",
				.GasMnemonic = "ret",
				.Description = "ret imm16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Imm16,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0xc2,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 2,
							.Value = {OperandType::Imm16},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolb",
				.Description = "rolb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolw",
				.Description = "rolw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "roll",
				.Description = "roll m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rol",
				.GasMnemonic = "rolq",
				.Description = "rolq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorb",
				.Description = "rorb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorw",
				.Description = "rorw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorl",
				.Description = "rorl m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x1)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "ror",
				.GasMnemonic = "rorq",
				.Description = "rorq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x1)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rorx",
				.GasMnemonic = "rorxl",
				.Description = "rorxl r32, r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b11,
							.Pp = 0b11,
							.W = false,
							.L = false,
							.R = {OperandType::R32},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.Vvvv = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xf0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {OperandType::R32},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rorx",
				.GasMnemonic = "rorxl",
				.Description = "rorxl r32, m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b11,
							.Pp = 0b11,
							.W = false,
							.L = false,
							.R = {OperandType::R32},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.Vvvv = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xf0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::R32},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rorx",
				.GasMnemonic = "rorxq",
				.Description = "rorxq r64, r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b11,
							.Pp = 0b11,
							.W = true,
							.L = false,
							.R = {OperandType::R64},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.Vvvv = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xf0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {OperandType::R64},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rorx",
				.GasMnemonic = "rorxq",
				.Description = "rorxq r64, m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b11,
							.Pp = 0b11,
							.W = true,
							.L = false,
							.R = {OperandType::R64},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.Vvvv = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xf0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::R64},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "roundpd",
				.GasMnemonic = "roundpd",
				.Description = "roundpd xmm, xmm, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x9,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "roundpd",
				.GasMnemonic = "roundpd",
				.Description = "roundpd xmm, m128, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x9,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "roundps",
				.GasMnemonic = "roundps",
				.Description = "roundps xmm, xmm, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x8,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "roundps",
				.GasMnemonic = "roundps",
				.Description = "roundps xmm, m128, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x8,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "roundsd",
				.GasMnemonic = "roundsd",
				.Description = "roundsd xmm, xmm, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xb,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "roundsd",
				.GasMnemonic = "roundsd",
				.Description = "roundsd xmm, m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xb,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "roundss",
				.GasMnemonic = "roundss",
				.Description = "roundss xmm, xmm, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xa,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "roundss",
				.GasMnemonic = "roundss",
				.Description = "roundss xmm, m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse41,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x3a,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0xa,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Xmm},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rsqrtps",
				.GasMnemonic = "rsqrtps",
				.Description = "rsqrtps xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x52,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rsqrtps",
				.GasMnemonic = "rsqrtps",
				.Description = "rsqrtps xmm, m128",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M128,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M128},
							.B = {OperandType::M128},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x52,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M128},
							.Rm = {OperandType::M128},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "rsqrtss",
				.GasMnemonic = "rsqrtss",
				.Description = "rsqrtss xmm, xmm",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0xf3,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::Xmm},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x52,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::Xmm},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "rsqrtss",
				.GasMnemonic = "rsqrtss",
				.Description = "rsqrtss xmm, m32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::Sse,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Xmm,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Sse,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0xf3,
							.IsMandatory = true,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::Xmm},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x52,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::Xmm},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salb",
				.Description = "salb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salw",
				.Description = "salw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "sall",
				.Description = "sall m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x4)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sal",
				.GasMnemonic = "salq",
				.Description = "salq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x4)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb r8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb r8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw r16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw r16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl r32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl r32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq r64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq r64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb m8, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc0,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarb",
				.Description = "sarb m8, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd2,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw m16, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarw",
				.Description = "sarw m16, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl m32, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarl",
				.Description = "sarl m32, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq m64, 1",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::ScalarOne,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xc1,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x7)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sar",
				.GasMnemonic = "sarq",
				.Description = "sarq m64, cl",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Cl,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0xd3,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x7)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "sarx",
				.GasMnemonic = "sarxl",
				.Description = "sarxl r32, r32, r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b10,
							.Pp = 0b10,
							.W = false,
							.L = false,
							.R = {OperandType::R32},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.Vvvv = {OperandType::R32},
						},
						OpCode
						{
							.Value = 0xf7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {OperandType::R32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sarx",
				.GasMnemonic = "sarxl",
				.Description = "sarxl r32, m32, r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b10,
							.Pp = 0b10,
							.W = false,
							.L = false,
							.R = {OperandType::R32},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.Vvvv = {OperandType::R32},
						},
						OpCode
						{
							.Value = 0xf7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::R32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sarx",
				.GasMnemonic = "sarxq",
				.Description = "sarxq r64, r64, r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b10,
							.Pp = 0b10,
							.W = true,
							.L = false,
							.R = {OperandType::R64},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.Vvvv = {OperandType::R64},
						},
						OpCode
						{
							.Value = 0xf7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {OperandType::R64},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sarx",
				.GasMnemonic = "sarxq",
				.Description = "sarxq r64, m64, r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
					IsaExtension::Bmi2,
				},
				.EncodingScheme =
				{
					Encoding
					{
						Vex
						{
							.Type = VexPrefixType::Vex,
							.Mmmmm = 0b10,
							.Pp = 0b10,
							.W = true,
							.L = false,
							.R = {OperandType::R64},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.Vvvv = {OperandType::R64},
						},
						OpCode
						{
							.Value = 0xf7,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::R64},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb al, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Al,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0x1c,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb r8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x80,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb r8, r8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R8},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x18,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {OperandType::R8},
						},
					},
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R8},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {OperandType::R8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb r8, m8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R8},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1a,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {OperandType::R8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw ax, imm16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Ax,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm16,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1d,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 2,
							.Value = {OperandType::Imm16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw r16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 2
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw r16, imm16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm16,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 2,
							.Value = {OperandType::Imm16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw r16, r16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::R16},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {OperandType::R16},
						},
					},
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::R16},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R16},
							.Reg = {OperandType::R16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw r16, m16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::R16},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {OperandType::R16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl eax, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Eax,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						OpCode
						{
							.Value = 0x1d,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl r32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 4
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl r32, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl r32, r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R32},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {OperandType::R32},
						},
					},
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R32},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R32},
							.Reg = {OperandType::R32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl r32, m32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R32},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::R32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq rax, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::Rax,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {UINT64_C(0x0)},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x1d,
							.Addend = {UINT64_C(0x0)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq r64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq r64, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq r64, r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = true,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {OperandType::R64},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {OperandType::R64},
						},
					},
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {OperandType::R64},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R64},
							.Reg = {OperandType::R64},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq r64, m64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {OperandType::R64},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x1b,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::R64},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb m8, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x80,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbb",
				.Description = "sbbb m8, r8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R8},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x18,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {OperandType::R8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw m16, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 2
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw m16, imm16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm16,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 2,
							.Value = {OperandType::Imm16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbw",
				.Description = "sbbw m16, r16",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M16,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R16,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Prefix
						{
							.Value = 0x66,
							.IsMandatory = false,
						},
						Rex
						{
							.W = false,
							.R = {OperandType::R16},
							.X = {OperandType::M16},
							.B = {OperandType::M16},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M16},
							.Rm = {OperandType::M16},
							.Reg = {OperandType::R16},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl m32, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 4
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl m32, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbl",
				.Description = "sbbl m32, r32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M32,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R32,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {OperandType::R32},
							.X = {OperandType::M32},
							.B = {OperandType::M32},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M32},
							.Rm = {OperandType::M32},
							.Reg = {OperandType::R32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq m64, imm8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm8,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x83,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 1,
							.Value = {OperandType::Imm8},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq m64, imm32",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::Imm32,
						.IsInput = false,
						.IsOutput = false,
						.ExtendedSize = 8
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x81,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {UINT64_C(0x3)},
						},
						ImmediateScalar
						{
							.Size = 4,
							.Value = {OperandType::Imm32},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "sbb",
				.GasMnemonic = "sbbq",
				.Description = "sbbq m64, r64",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M64,
						.IsInput = true,
						.IsOutput = true,
						.ExtendedSize = 0
					},
					Operand
					{
						.Type = OperandType::R64,
						.IsInput = true,
						.IsOutput = false,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = true,
							.R = {OperandType::R64},
							.X = {OperandType::M64},
							.B = {OperandType::M64},
							.IsMandatory = true,
						},
						OpCode
						{
							.Value = 0x19,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M64},
							.Rm = {OperandType::M64},
							.Reg = {OperandType::R64},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));

		instruction =
		{
			InstructionVariation
			{
				.IntelMnemonic = "seta",
				.GasMnemonic = "seta",
				.Description = "seta r8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::R8,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {UINT64_C(0x0)},
							.B = {OperandType::R8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x97,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {UINT64_C(0x3)},
							.Rm = {OperandType::R8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
			InstructionVariation
			{
				.IntelMnemonic = "seta",
				.GasMnemonic = "seta",
				.Description = "seta m8",
				.MmxMode = MmxModeType::None,
				.XmmMode = XmmModeType::None,
				.IsCancellingInputs = false,
				.OperandList =
				{
					Operand
					{
						.Type = OperandType::M8,
						.IsInput = false,
						.IsOutput = true,
						.ExtendedSize = 0
					},
				},
				.ImplicitInputs =
				{
				},
				.ImplicitOutputs =
				{
				},
				.IsaFeatureExtensions =
				{
				},
				.EncodingScheme =
				{
					Encoding
					{
						Rex
						{
							.W = false,
							.R = {UINT64_C(0x0)},
							.X = {OperandType::M8},
							.B = {OperandType::M8},
							.IsMandatory = false,
						},
						OpCode
						{
							.Value = 0xf,
							.Addend = {UINT64_C(0x0)},
						},
						OpCode
						{
							.Value = 0x97,
							.Addend = {UINT64_C(0x0)},
						},
						ModRm
						{
							.Mode = {OperandType::M8},
							.Rm = {OperandType::M8},
							.Reg = {UINT64_C(0x0)},
						},
					},
				}
			},
		};
		out.emplace_back(std::move(instruction));
	};
}
