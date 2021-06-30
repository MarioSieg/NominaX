// File: DecomposerF64.hpp
// Author: Mario
// Created: 06.06.2021 5:38 PM
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

#include <bit>
#include <cstdint>
#include <cmath>
#include <limits>

namespace Nominax::Common
{
	/// <summary>
	/// Zero tolerance epsilon.
	/// </summary>
	constexpr auto ZERO_TOLERANCE {1e-6}; // 8 * 1.19209290E-07F

	/// <summary>
	/// Returns true if x is zero, else false.
	/// </summary>
	/// <param name="x">The number to check for zero.</param>
	/// <returns>True if x is zero, else false.</returns>
	NOX_FLATTEN NOX_PURE inline auto F64IsZero(const F64 x) -> bool
	{
		return std::abs(x) < ZERO_TOLERANCE;
	}

	/// <summary>
	/// Returns true if x is one, else false.
	/// </summary>
	/// <param name="x">The number to check for zero.</param>
	/// <returns>True if x is zero, else false.</returns>
	NOX_FLATTEN NOX_PURE inline auto F64IsOne(const F64 x) -> bool
	{
		return F64IsZero(x - 1.0);
	}

	/// <summary>
	/// How many ULP's (Units in the Last Place) we want to tolerate when comparing two numbers.
	/// The large the value, the more error (mismatch) the comparison will allow.
	/// If the ULP value is zero, the two numbers must be exactly the same.
	/// See http://randomascii.wordpress.com/2012/02/25/comparing-F32ing-point-numbers-2012-edition/ by Bruce Dawson
	/// </summary>
	constexpr U32 MAX_ULPS {4};

	/// <summary>
	/// Bit count inside F64.
	/// </summary>
	constexpr auto BIT_COUNT {8 * sizeof(F64)};

	/// <summary>
	/// Fraction bit count.
	/// </summary>
	constexpr auto FRACTION_BITS {std::numeric_limits<F64>::digits - 1};

	/// <summary>
	/// Exponent bit count.
	/// </summary>
	constexpr auto EXPONENT_BITS {BIT_COUNT - 1 - FRACTION_BITS};

	/// <summary>
	/// Mask to extract sign bit.
	/// </summary>
	constexpr auto SIGN_MASK {UINT64_C(1) << (BIT_COUNT - 1)};

	/// <summary>
	/// Mask to extract fraction.
	/// </summary>
	constexpr auto FRACTION_MASK {~UINT64_C(0) >> (EXPONENT_BITS + 1)};

	/// <summary>
	/// Mask to extract exponent.
	/// </summary>
	constexpr auto EXPONENT_MASK {~(SIGN_MASK | FRACTION_MASK)};

	/// <summary>
	/// Returns the bit representation of the F64.
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	NOX_FLATTEN NOX_PURE constexpr auto BitsOf(const F64 x) -> U64
	{
		static_assert(sizeof(U64) == sizeof(F64));
		return std::bit_cast<U64>(x);
	}

	NOX_FLATTEN NOX_PURE constexpr auto ExponentBitsOf(const F64 x) -> U64
	{
		return EXPONENT_MASK & BitsOf(x);
	}

	NOX_FLATTEN NOX_PURE constexpr auto FractionBitsOf(const F64 x) -> U64
	{
		return FRACTION_MASK & BitsOf(x);
	}

	NOX_FLATTEN NOX_PURE constexpr auto SignBitOf(const F64 x) -> U64
	{
		return SIGN_MASK & BitsOf(x);
	}

	/// <summary>
	/// Returns true if x is NAN, else false.
	/// NAN = Not A Number
	/// </summary>
	NOX_FLATTEN NOX_PURE constexpr auto IsNan(const F64 x) -> bool
	{
		return ExponentBitsOf(x) == EXPONENT_MASK && FractionBitsOf(x) != 0;
	}

	/// <summary>
	/// Converts an integer from the "sign and magnitude" to the biased representation.
	/// See https://en.wikipedia.org/wiki/Signed_number_representations for more info.
	/// </summary>
	NOX_FLATTEN NOX_PURE constexpr auto SignMagnitudeToBiasedRepresentation(const U64 bits) -> U64
	{
		if (SIGN_MASK & bits)
		{
			return ~bits + 1;
		}
		return SIGN_MASK | bits;
	}

	/// <summary>
	/// Returns the unsigned distance between bitsA and bitsB.
	/// bitsA and bitsB must be converted into the biased representation first!
	/// </summary>
	/// <param name="bitsA">The first bits as biased representation.</param>
	/// <param name="bitsB">The second bits as biased representation.</param>
	/// <returns>The unsigned distance.</returns>
	NOX_FLATTEN NOX_PURE constexpr auto ComputeDistanceBetweenSignAndMagnitude(const U64 bitsA, const U64 bitsB) -> U64
	{
		const auto biasedA {SignMagnitudeToBiasedRepresentation(bitsA)};
		const auto biasedB {SignMagnitudeToBiasedRepresentation(bitsB)};
		return biasedA >= biasedB ? biasedA - biasedB : biasedB - biasedA;
	}

	/// <summary>
	/// Returns true if x and y are near or equal.
	/// Returns false if either x or y or both are NAN.
	/// Huge numbers are treated almost as infinity.
	/// Uses a ULP based approach.
	/// See https://randomascii.wordpress.com/2012/02/25/comparing-F32ing-point-numbers-2012-edition/
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	/// <returns></returns>
	template <U32 Ulps = MAX_ULPS>
	NOX_FLATTEN NOX_PURE constexpr auto F64Equals(const F64 x, const F64 y) -> bool
	{
		static_assert(Ulps > 0);
		// IEEE 754 required that any NAN comparison should yield false.
		if (IsNan(x) || IsNan(y))
		{
			return false;
		}

		return ComputeDistanceBetweenSignAndMagnitude(BitsOf(x), BitsOf(y)) <= Ulps;
	}
}
