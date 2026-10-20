// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C4A0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5887c4a0_5887C4A0() {
    __asm {
        ; Exact mapped bytes F3 0F 7E 44 24 04: movq xmm0, qword ptr [esp + 4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F 28 15 60 19 8D 58: movapd xmm2, xmmword ptr [0x588d1960]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 28 C8: movapd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F 28 F8: movapd xmm7, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xf8
        ; Exact mapped bytes 66 0F 73 D0 34: psrlq xmm0, 0x34
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xd0
        __asm _emit 0x34
        ; Exact mapped bytes 66 0F 7E C0: movd eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 54 05 80 19 8D 58: andpd xmm0, xmmword ptr [0x588d1980]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F FA D0: psubd xmm2, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0F D3 CA: psrlq xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xca
        test eax, 800h
        ; Exact mapped bytes 74 4C: je 0x5887c522
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 0bffh
        ; Exact mapped bytes 7C 7D: jl 0x5887c55a
        __asm _emit 0x7c
        __asm _emit 0x7d
        ; Exact mapped bytes 66 0F F3 CA: psllq xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xca
        cmp eax, 0c32h
        ; Exact mapped bytes 7F 0B: jg 0x5887c4f3
        __asm _emit 0x7f
        __asm _emit 0x0b
        ; Exact mapped bytes 66 0F D6 4C 24 04: movq qword ptr [esp + 4], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes 66 0F 2E FF: ucomisd xmm7, xmm7
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xff
        ; Exact mapped bytes 7B 24: jnp 0x5887c51d
        __asm _emit 0x7b
        __asm _emit 0x24
        mov edx, 3ech
        sub esp, 10h
        mov dword ptr [esp + 0ch], edx
        mov edx, esp
        add edx, 14h
        mov dword ptr [esp + 8], edx
        mov dword ptr [esp + 4], edx
        mov dword ptr [esp], edx
        ; Exact mapped bytes E8 C6 65 FF FF: call 0x58872ae0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes F3 0F 7E 44 24 04: movq xmm0, qword ptr [esp + 4]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 0F F3 CA: psllq xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xca
        ; Exact mapped bytes 66 0F 28 D8: movapd xmm3, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xd8
        cmp eax, 3ffh
        ; Exact mapped bytes 7C 2A: jl 0x5887c561
        __asm _emit 0x7c
        __asm _emit 0x2a
        cmp eax, 432h
        ; Exact mapped bytes 7F B5: jg 0x5887c4f3
        __asm _emit 0x7f
        __asm _emit 0xb5
        ; Exact mapped bytes 66 0F C2 C1 06: cmpnlepd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0xc1
        __asm _emit 0x06
        ; Exact mapped bytes 66 0F 54 05 50 19 8D 58: andpd xmm0, xmmword ptr [0x588d1950]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes 66 0F D6 4C 24 04: movq qword ptr [esp + 4], xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
        ; Exact mapped bytes DD 05 90 19 8D 58: fld qword ptr [0x588d1990]
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ret
        ; Exact mapped bytes 66 0F C2 1D 70 19 8D 58 06: cmpnlepd xmm3, xmmword ptr [0x588d1970]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xc2
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 66 0F 54 1D 50 19 8D 58: andpd xmm3, xmmword ptr [0x588d1950]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x1d
        __asm _emit 0x50
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F D6 5C 24 04: movq qword ptr [esp + 4], xmm3
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DD 44 24 04: fld qword ptr [esp + 4]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ret
    }
}
