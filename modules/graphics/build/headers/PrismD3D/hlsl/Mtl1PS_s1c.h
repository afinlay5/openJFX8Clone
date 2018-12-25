#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   float4 gDiffuseColor;
//   float4 gLightColor[5];
//   float4 gSpecularColor;
//   sampler2D mapDiffuse;
//
//
// Registers:
//
//   Name           Reg   Size
//   -------------- ----- ----
//   gDiffuseColor  c0       1
//   gSpecularColor c1       1
//   gLightColor    c4       1
//   mapDiffuse     s0       1
//

    ps_2_0
    def c2, -1, -0, 0, 0
    def c3, -0, -0, -2, 0
    dcl t0.xy
    dcl t1.xyz
    dcl t2.xyz
    dcl t3.xyz
    dcl_2d s0
    texld r0, t0, s0
    mul r1.w, r0.w, r0.w
    cmp r1, -r1.w, c2.x, c2.y
    texkill r1
    mul r0, r0, c0
    nrm r1.xyz, t2
    mad r1.xyz, r1.z, c3, r1
    nrm r2.xyz, t3
    dp3_sat r1.x, -r1, r2
    pow r2.x, r1.x, c1.w
    mov_sat r1.x, r2.z
    mul r1.yzw, r2.x, c4.wzyx
    mul r1.yzw, r1, c1.wzyx
    mad r2.xyz, r1.x, c4, t1
    mad_sat r0.xyz, r2, r0, r1.wzyx
    mov oC0, r0

// approximately 22 instruction slots used (1 texture, 21 arithmetic)
#endif

const BYTE g_ps20_main[] =
{
      0,   2, 255, 255, 254, 255, 
     66,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 219,   0, 
      0,   0,   0,   2, 255, 255, 
      4,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    212,   0,   0,   0, 108,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0, 124,   0, 
      0,   0,   0,   0,   0,   0, 
    140,   0,   0,   0,   2,   0, 
      4,   0,   1,   0,  18,   0, 
    152,   0,   0,   0,   0,   0, 
      0,   0, 168,   0,   0,   0, 
      2,   0,   1,   0,   1,   0, 
      6,   0, 124,   0,   0,   0, 
      0,   0,   0,   0, 183,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   2,   0, 196,   0, 
      0,   0,   0,   0,   0,   0, 
    103,  68, 105, 102, 102, 117, 
    115, 101,  67, 111, 108, 111, 
    114,   0, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 103,  76, 105, 103, 
    104, 116,  67, 111, 108, 111, 
    114,   0,   1,   0,   3,   0, 
      1,   0,   4,   0,   5,   0, 
      0,   0,   0,   0,   0,   0, 
    103,  83, 112, 101,  99, 117, 
    108,  97, 114,  67, 111, 108, 
    111, 114,   0, 109,  97, 112, 
     68, 105, 102, 102, 117, 115, 
    101,   0, 171, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 115,  95,  50, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  49,  48,  46,  49, 
      0, 171,  81,   0,   0,   5, 
      2,   0,  15, 160,   0,   0, 
    128, 191,   0,   0,   0, 128, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  81,   0,   0,   5, 
      3,   0,  15, 160,   0,   0, 
      0, 128,   0,   0,   0, 128, 
      0,   0,   0, 192,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
      3, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   1,   0, 
      7, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   2,   0, 
      7, 176,  31,   0,   0,   2, 
      0,   0,   0, 128,   3,   0, 
      7, 176,  31,   0,   0,   2, 
      0,   0,   0, 144,   0,   8, 
     15, 160,  66,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 176,   0,   8, 228, 160, 
      5,   0,   0,   3,   1,   0, 
      8, 128,   0,   0, 255, 128, 
      0,   0, 255, 128,  88,   0, 
      0,   4,   1,   0,  15, 128, 
      1,   0, 255, 129,   2,   0, 
      0, 160,   2,   0,  85, 160, 
     65,   0,   0,   1,   1,   0, 
     15, 128,   5,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   0,   0, 228, 160, 
     36,   0,   0,   2,   1,   0, 
      7, 128,   2,   0, 228, 176, 
      4,   0,   0,   4,   1,   0, 
      7, 128,   1,   0, 170, 128, 
      3,   0, 228, 160,   1,   0, 
    228, 128,  36,   0,   0,   2, 
      2,   0,   7, 128,   3,   0, 
    228, 176,   8,   0,   0,   3, 
      1,   0,  17, 128,   1,   0, 
    228, 129,   2,   0, 228, 128, 
     32,   0,   0,   3,   2,   0, 
      1, 128,   1,   0,   0, 128, 
      1,   0, 255, 160,   1,   0, 
      0,   2,   1,   0,  17, 128, 
      2,   0, 170, 128,   5,   0, 
      0,   3,   1,   0,  14, 128, 
      2,   0,   0, 128,   4,   0, 
     27, 160,   5,   0,   0,   3, 
      1,   0,  14, 128,   1,   0, 
    228, 128,   1,   0,  27, 160, 
      4,   0,   0,   4,   2,   0, 
      7, 128,   1,   0,   0, 128, 
      4,   0, 228, 160,   1,   0, 
    228, 176,   4,   0,   0,   4, 
      0,   0,  23, 128,   2,   0, 
    228, 128,   0,   0, 228, 128, 
      1,   0,  27, 128,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      0,   0, 228, 128, 255, 255, 
      0,   0
};