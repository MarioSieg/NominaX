use crate::simd::fallback;

use std::arch::x86_64::*;

#[inline(always)]
pub fn __add8(x: &mut [f32; 8], y: &[f32; 8]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_add_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
    }
}

#[inline(always)]
pub fn __add16(x: &mut [f32; 16], y: &[f32; 16]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_add_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
        _mm256_storeu_ps(
            x.offset(8),
            _mm256_add_ps(_mm256_loadu_ps(x.offset(8)), _mm256_loadu_ps(y.offset(8))),
        );
    }
}

#[inline(always)]
pub fn __sub8(x: &mut [f32; 8], y: &[f32; 8]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_sub_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
    }
}

#[inline(always)]
pub fn __sub16(x: &mut [f32; 16], y: &[f32; 16]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_sub_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
        _mm256_storeu_ps(
            x.offset(8),
            _mm256_sub_ps(_mm256_loadu_ps(x.offset(8)), _mm256_loadu_ps(y.offset(8))),
        );
    }
}

#[inline(always)]
pub fn __mul8(x: &mut [f32; 8], y: &[f32; 8]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_mul_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
    }
}

#[inline(always)]
pub fn __mul16(x: &mut [f32; 16], y: &[f32; 16]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_mul_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
        _mm256_storeu_ps(
            x.offset(8),
            _mm256_mul_ps(_mm256_loadu_ps(x.offset(8)), _mm256_loadu_ps(y.offset(8))),
        );
    }
}

#[inline(always)]
pub fn __div8(x: &mut [f32; 8], y: &[f32; 8]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_div_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
    }
}

#[inline(always)]
pub fn __div16(x: &mut [f32; 16], y: &[f32; 16]) {
    unsafe {
        let x: *mut f32 = x.as_mut_ptr();
        let y: *const f32 = y.as_ptr();
        _mm256_storeu_ps(x, _mm256_div_ps(_mm256_loadu_ps(x), _mm256_loadu_ps(y)));
        _mm256_storeu_ps(
            x.offset(8),
            _mm256_div_ps(_mm256_loadu_ps(x.offset(8)), _mm256_loadu_ps(y.offset(8))),
        );
    }
}

#[inline(always)]
pub fn __mod8(x: &mut [f32; 8], y: &[f32; 8]) {
    fallback::f32::__mod8(x, y);
}

#[inline(always)]
pub fn __mod16(x: &mut [f32; 16], y: &[f32; 16]) {
    fallback::f32::__mod16(x, y);
}

#[cfg(test)]
mod tests {
    use crate::simd::fallback;

    #[test]
    fn __add8() {
        let y = [3.0, -5.0, 8.0, 200.0, -32.0, -3222.9999, 3213.0, 2.0];
        let mut x_simd = [4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0];
        let mut x_fallback = x_simd;
        super::__add8(&mut x_simd, &y);
        fallback::f32::__add8(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __add16() {
        let y = [
            4.0, 2.0, 8.0, 109.0, 9.0, -422.0, 3233.4332, 3.0, 4.0, 2.0, 8.0, 109.0, 9.0, 134.0,
            21.0, 3.0,
        ];
        let mut x_simd = [
            3.0, -5.0, 8.0, 200.0, -32.0, 92.0, 12.0, 2.0, 3.0, -5.0, 8.0, 200.0, -32.0, 92.0,
            12.0, 2.0,
        ];
        let mut x_fallback = x_simd;
        super::__add16(&mut x_simd, &y);
        fallback::f32::__add16(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __sub8() {
        let y = [3.0, -5.0, 8.0, 200.0, -32.0, -3222.9999, 3213.0, 2.0];
        let mut x_simd = [4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0];
        let mut x_fallback = x_simd;
        super::__sub8(&mut x_simd, &y);
        fallback::f32::__sub8(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __sub16() {
        let y = [
            4.0, 2.0, 8.0, 109.0, 9.0, -422.0, 3233.4332, 3.0, 4.0, 2.0, 8.0, 109.0, 9.0, 134.0,
            21.0, 3.0,
        ];
        let mut x_simd = [
            3.0, -5.0, 8.0, 200.0, -32.0, 92.0, 12.0, 2.0, 3.0, -5.0, 8.0, 200.0, -32.0, 92.0,
            12.0, 2.0,
        ];
        let mut x_fallback = x_simd;
        super::__sub16(&mut x_simd, &y);
        fallback::f32::__sub16(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __mul8() {
        let y = [3.0, -5.0, 8.0, 200.0, -32.0, -3222.9999, 3213.0, 2.0];
        let mut x_simd = [4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0];
        let mut x_fallback = x_simd;
        super::__mul8(&mut x_simd, &y);
        fallback::f32::__mul8(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __mul16() {
        let y = [
            4.0, 2.0, 8.0, 109.0, 9.0, -422.0, 3233.4332, 3.0, 4.0, 2.0, 8.0, 109.0, 9.0, 134.0,
            21.0, 3.0,
        ];
        let mut x_simd = [
            3.0, -5.0, 8.0, 200.0, -32.0, 92.0, 12.0, 2.0, 3.0, -5.0, 8.0, 200.0, -32.0, 92.0,
            12.0, 2.0,
        ];
        let mut x_fallback = x_simd;
        super::__mul16(&mut x_simd, &y);
        fallback::f32::__mul16(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __mod8() {
        let y = [3.0, -5.0, 8.0, 200.0, -32.0, -80.0, 4322809.0, 2.0];
        let mut x_simd = [4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0];
        let mut x_fallback = x_simd;
        super::__mod8(&mut x_simd, &y);
        fallback::f32::__mod8(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __mod16() {
        let y = [
            4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0, -2233.0, 0242.0, 8.0, 109.0, 9.0, 134.0,
            21.0, 3.0,
        ];
        let mut x_simd = [
            3.0, -5.0, 8.0, 200.0, -32.0, 92.0, 12.0, 2.0, 3.0, -5.0, 8.0, 200.0, -32.0, 92.0,
            12.0, 2.0,
        ];
        let mut x_fallback = x_simd;
        super::__mod16(&mut x_simd, &y);
        fallback::f32::__mod16(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __div8() {
        let y = [3.0, -5.0, 8.0, 200.0, -32.0, -3222.9999, 3213.0, 2.0];
        let mut x_simd = [4.0, 2.0, 8.0, 109.0, 9.0, 134.0, 21.0, 3.0];
        let mut x_fallback = x_simd;
        super::__div8(&mut x_simd, &y);
        fallback::f32::__div8(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }

    #[test]
    fn __div16() {
        let y = [
            4.0, 2.0, 8.0, 109.0, 9.0, -422.0, 3233.4332, 3.0, 4.0, 2.0, 8.0, 109.0, 9.0, 134.0,
            21.0, 3.0,
        ];
        let mut x_simd = [
            3.0, -5.0, 8.0, 200.0, -32.0, 92.0, 12.0, 2.0, 3.0, -5.0, 8.0, 200.0, -32.0, 92.0,
            12.0, 2.0,
        ];
        let mut x_fallback = x_simd;
        super::__div16(&mut x_simd, &y);
        fallback::f32::__div16(&mut x_fallback, &y);
        for (x, y) in x_simd.iter().zip(x_fallback.iter()) {
            assert_eq!(x, y);
        }
    }
}
