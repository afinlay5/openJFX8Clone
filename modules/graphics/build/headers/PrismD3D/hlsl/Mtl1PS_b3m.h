#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float4 gDiffuseColor;
//   float4 gLightColor[5];
//   float4 gSpecularColor;
//   sampler2D mapBumpHeight;
//   sampler2D mapDiffuse;
//   sampler2D mapSpecular;
//
//
// Registers:
//
//   Name           Reg   Size
//   -------------- ----- ----
//   gDiffuseColor  c0       1
//   gSpecularColor c1       1
//   gLightColor    c4       3
//   mapDiffuse     s0       1
//   mapSpecular    s1       1
//   mapBumpHeight  s2       1
//

    ps_2_0
    def c2, -1, -0, 2, 0
    def c3, 0.298999995, 0.587000012, 0.114, 0
    dcl t2.xyz
    dcl t3.xyz
    dcl t4.xyz
    dcl t5.xyz
    dcl t0.xy
    dcl t1.xyz
    dcl_2d s0
    dcl_2d s1
    dcl_2d s2
    texld r0, t0, s0
    mul r1.w, r0.w, r0.w
    cmp r1, -r1.w, c2.x, c2.y
    texkill r1
    mul r0, r0, c0
    texld r1, t0, s2
    texld r2, t0, s1
    mad r1.xyz, r1, c2.z, c2.x
    nrm r3.xyz, r1
    nrm r1.xyz, t2
    dp3 r1.w, r1, r3
    add r1.w, r1.w, r1.w
    mad r1.xyz, r3, -r1.w, r1
    nrm r4.xyz, t3
    dp3_sat r1.w, -r1, r4
    nrm r5.xyz, t4
    dp3_sat r2.w, -r1, r5
    nrm r6.xyz, t5
    dp3_sat r3.w, -r1, r6
    dp3_sat r4.w, r3, r6
    dp3 r5.w, r2, c3
    mul r5.w, r5.w, c1.w
    pow r1.x, r3.w, r5.w
    mul r2.xyz, r2, c1
    pow r3.w, r1.w, r5.w
    pow r1.y, r2.w, r5.w
    mul r1.yzw, r1.y, c5.wzyx
    mad r1.yzw, r3.w, c4.wzyx, r1
    mad r1.xyz, r1.x, c6, r1.wzyx
    mul r1.xyz, r2, r1
    dp3_sat r1.w, r3, r4
    dp3_sat r2.x, r3, r5
    mul r2.xyz, r2.x, c5
    mad r2.xyz, r1.w, c4, r2
    mad r2.xyz, r4.w, c6, r2
    add r2.xyz, r2, t1
    mad_sat r0.xyz, r2, r0, r1
    mov oC0, r0

// approximately 54 instruction slots used (3 texture, 51 arithmetic)
#endif

const BYTE g_ps20_main[] =
{
      0,   2, 255, 255, 254, 255, 
     91,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  63,   1, 
      0,   0,   0,   2, 255, 255, 
      6,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     56,   1,   0,   0, 148,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0, 164,   0, 
      0,   0,   0,   0,   0,   0, 
    180,   0,   0,   0,   2,   0, 
      4,   0,   3,   0,  18,   0, 
    192,   0,   0,   0,   0,   0, 
      0,   0, 208,   0,   0,   0, 
      2,   0,   1,   0,   1,   0, 
      6,   0, 164,   0,   0,   0, 
      0,   0,   0,   0, 223,   0, 
      0,   0,   3,   0,   2,   0, 
      1,   0,  10,   0, 240,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   1,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
     12,   1,   0,   0,   0,   0, 
      0,   0,  28,   1,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      6,   0,  40,   1,   0,   0, 
      0,   0,   0,   0, 103,  68, 
    105, 102, 102, 117, 115, 101, 
     67, 111, 108, 111, 114,   0, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    103,  76, 105, 103, 104, 116, 
     67, 111, 108, 111, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   5,   0,   0,   0, 
      0,   0,   0,   0, 103,  83, 
    112, 101,  99, 117, 108,  97, 
    114,  67, 111, 108, 111, 114, 
      0, 109,  97, 112,  66, 117, 
    109, 112,  72, 101, 105, 103, 
    104, 116,   0, 171, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 109,  97, 
    112,  68, 105, 102, 102, 117, 
    115, 101,   0, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 109,  97, 112,  83, 
    112, 101,  99, 117, 108,  97, 
    114,   0,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    112, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     49,  48,  46,  49,   0, 171, 
     81,   0,   0,   5,   2,   0, 
     15, 160,   0,   0, 128, 191, 
      0,   0,   0, 128,   0,   0, 
      0,  64,   0,   0,   0,   0, 
     81,   0,   0,   5,   3,   0, 
     15, 160, 135,  22, 153,  62, 
    162,  69,  22,  63, 213, 120, 
    233,  61,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   2,   0,   7, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   3,   0,   7, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   4,   0,   7, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   5,   0,   7, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   1,   0,   7, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   2,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 176, 
      0,   8, 228, 160,   5,   0, 
      0,   3,   1,   0,   8, 128, 
      0,   0, 255, 128,   0,   0, 
    255, 128,  88,   0,   0,   4, 
      1,   0,  15, 128,   1,   0, 
    255, 129,   2,   0,   0, 160, 
      2,   0,  85, 160,  65,   0, 
      0,   1,   1,   0,  15, 128, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      0,   0, 228, 160,  66,   0, 
      0,   3,   1,   0,  15, 128, 
      0,   0, 228, 176,   2,   8, 
    228, 160,  66,   0,   0,   3, 
      2,   0,  15, 128,   0,   0, 
    228, 176,   1,   8, 228, 160, 
      4,   0,   0,   4,   1,   0, 
      7, 128,   1,   0, 228, 128, 
      2,   0, 170, 160,   2,   0, 
      0, 160,  36,   0,   0,   2, 
      3,   0,   7, 128,   1,   0, 
    228, 128,  36,   0,   0,   2, 
      1,   0,   7, 128,   2,   0, 
    228, 176,   8,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    228, 128,   3,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      1,   0, 255, 128,   4,   0, 
      0,   4,   1,   0,   7, 128, 
      3,   0, 228, 128,   1,   0, 
    255, 129,   1,   0, 228, 128, 
     36,   0,   0,   2,   4,   0, 
      7, 128,   3,   0, 228, 176, 
      8,   0,   0,   3,   1,   0, 
     24, 128,   1,   0, 228, 129, 
      4,   0, 228, 128,  36,   0, 
      0,   2,   5,   0,   7, 128, 
      4,   0, 228, 176,   8,   0, 
      0,   3,   2,   0,  24, 128, 
      1,   0, 228, 129,   5,   0, 
    228, 128,  36,   0,   0,   2, 
      6,   0,   7, 128,   5,   0, 
    228, 176,   8,   0,   0,   3, 
      3,   0,  24, 128,   1,   0, 
    228, 129,   6,   0, 228, 128, 
      8,   0,   0,   3,   4,   0, 
     24, 128,   3,   0, 228, 128, 
      6,   0, 228, 128,   8,   0, 
      0,   3,   5,   0,   8, 128, 
      2,   0, 228, 128,   3,   0, 
    228, 160,   5,   0,   0,   3, 
      5,   0,   8, 128,   5,   0, 
    255, 128,   1,   0, 255, 160, 
     32,   0,   0,   3,   1,   0, 
      1, 128,   3,   0, 255, 128, 
      5,   0, 255, 128,   5,   0, 
      0,   3,   2,   0,   7, 128, 
      2,   0, 228, 128,   1,   0, 
    228, 160,  32,   0,   0,   3, 
      3,   0,   8, 128,   1,   0, 
    255, 128,   5,   0, 255, 128, 
     32,   0,   0,   3,   1,   0, 
      2, 128,   2,   0, 255, 128, 
      5,   0, 255, 128,   5,   0, 
      0,   3,   1,   0,  14, 128, 
      1,   0,  85, 128,   5,   0, 
     27, 160,   4,   0,   0,   4, 
      1,   0,  14, 128,   3,   0, 
    255, 128,   4,   0,  27, 160, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,   7, 128, 
      1,   0,   0, 128,   6,   0, 
    228, 160,   1,   0,  27, 128, 
      5,   0,   0,   3,   1,   0, 
      7, 128,   2,   0, 228, 128, 
      1,   0, 228, 128,   8,   0, 
      0,   3,   1,   0,  24, 128, 
      3,   0, 228, 128,   4,   0, 
    228, 128,   8,   0,   0,   3, 
      2,   0,  17, 128,   3,   0, 
    228, 128,   5,   0, 228, 128, 
      5,   0,   0,   3,   2,   0, 
      7, 128,   2,   0,   0, 128, 
      5,   0, 228, 160,   4,   0, 
      0,   4,   2,   0,   7, 128, 
      1,   0, 255, 128,   4,   0, 
    228, 160,   2,   0, 228, 128, 
      4,   0,   0,   4,   2,   0, 
      7, 128,   4,   0, 255, 128, 
      6,   0, 228, 160,   2,   0, 
    228, 128,   2,   0,   0,   3, 
      2,   0,   7, 128,   2,   0, 
    228, 128,   1,   0, 228, 176, 
      4,   0,   0,   4,   0,   0, 
     23, 128,   2,   0, 228, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
    228, 128, 255, 255,   0,   0
};
