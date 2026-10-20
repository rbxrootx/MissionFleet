// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A64E0 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_587a64e0_587A64E0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov al, byte ptr [edx + 8]
        test al, al
        ; Exact mapped bytes 75 70: jne 0x587a655b
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [edx + 4]
        xor ecx, ecx
        mov eax, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x587a65a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 40h
        ; Exact mapped bytes 72 48: jb 0x587a6549
        __asm _emit 0x72
        __asm _emit 0x48
        ; Exact mapped bytes 0F 10 0D 90 76 8B 58: movups xmm1, xmmword ptr [0x588b7690]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x8b
        __asm _emit 0x58
        push esi
        mov esi, edx
        and esi, 0ffffffc0h
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        add ecx, 40h
        ; Exact mapped bytes 0F 55 C1: andnps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 11 00: movups xmmword ptr [eax], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 40 10: movups xmm0, xmmword ptr [eax + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 0F 55 C1: andnps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 11 40 10: movups xmmword ptr [eax + 0x10], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 0F 10 40 20: movups xmm0, xmmword ptr [eax + 0x20]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 0F 55 C1: andnps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 11 40 20: movups xmmword ptr [eax + 0x20], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 0F 10 40 30: movups xmm0, xmmword ptr [eax + 0x30]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x40
        __asm _emit 0x30
        ; Exact mapped bytes 0F 55 C1: andnps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 11 40 30: movups xmmword ptr [eax + 0x30], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x30
        add eax, 40h
        cmp ecx, esi
        ; Exact mapped bytes 72 CC: jb 0x587a6510
        __asm _emit 0x72
        __asm _emit 0xcc
        pop esi
        cmp ecx, edx
        ; Exact mapped bytes 73 5A: jae 0x587a65a3
        __asm _emit 0x73
        __asm _emit 0x5a
        sub edx, ecx
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        not byte ptr [eax]
        lea eax, [eax + 1]
        sub edx, 1
        ; Exact mapped bytes 75 F6: jne 0x587a6550
        __asm _emit 0x75
        __asm _emit 0xf6
        ret
        cmp al, 4
        ; Exact mapped bytes 75 44: jne 0x587a65a3
        __asm _emit 0x75
        __asm _emit 0x44
        mov al, byte ptr [edx + 9]
        cmp al, 8
        ; Exact mapped bytes 75 1A: jne 0x587a6580
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [edx + 4]
        mov ecx, dword ptr [esp + 8]
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x587a65a3
        __asm _emit 0x74
        __asm _emit 0x32
        dec edx
        shr edx, 1
        inc edx
        not byte ptr [ecx]
        lea ecx, [ecx + 2]
        sub edx, 1
        ; Exact mapped bytes 75 F6: jne 0x587a6575
        __asm _emit 0x75
        __asm _emit 0xf6
        ret
        cmp al, 10h
        ; Exact mapped bytes 75 1F: jne 0x587a65a3
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [edx + 4]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x587a65a3
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 8]
        dec edx
        shr edx, 2
        inc ecx
        inc edx
        not byte ptr [ecx - 1]
        lea ecx, [ecx + 4]
        not byte ptr [ecx - 4]
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x587a6595
        __asm _emit 0x75
        __asm _emit 0xf2
        ret
    }
}
