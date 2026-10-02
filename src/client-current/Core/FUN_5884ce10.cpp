// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884CE10 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_5884ce10() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        movzx eax, byte ptr [esp + 8]
        mov edx, edi
        mov edi, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x5884cf63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 1010101h
        cmp ecx, 20h
        ; Exact mapped bytes 0F 86 DF 00 00 00: jbe 0x5884cf15
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 80h
        ; Exact mapped bytes 0F 82 8B 00 00 00: jb 0x5884cecd
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BA 25 20 67 96 58 01: bt dword ptr [0x58966720], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0x20
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 73 09: jae 0x5884ce55
        __asm _emit 0x73
        __asm _emit 0x09
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [esp + 4]
        mov edi, edx
        ret
        ; Exact mapped bytes 0F BA 25 B8 60 90 58 01: bt dword ptr [0x589060b8], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 83 B2 00 00 00: jae 0x5884cf15
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 70 C0 00: pshufd xmm0, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        add ecx, edi
        ; Exact mapped bytes 0F 11 07: movups xmmword ptr [edi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x07
        add edi, 10h
        and edi, 0fffffff0h
        sub ecx, edi
        cmp ecx, 80h
        ; Exact mapped bytes 76 4C: jbe 0x5884cecd
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 66 0F 7F 07: movdqa xmmword ptr [edi], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes 66 0F 7F 47 10: movdqa xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 7F 47 20: movdqa xmmword ptr [edi + 0x20], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes 66 0F 7F 47 30: movdqa xmmword ptr [edi + 0x30], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x30
        ; Exact mapped bytes 66 0F 7F 47 40: movdqa xmmword ptr [edi + 0x40], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x40
        ; Exact mapped bytes 66 0F 7F 47 50: movdqa xmmword ptr [edi + 0x50], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 66 0F 7F 47 60: movdqa xmmword ptr [edi + 0x60], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x60
        ; Exact mapped bytes 66 0F 7F 47 70: movdqa xmmword ptr [edi + 0x70], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x70
        lea edi, [edi + 80h]
        sub ecx, 80h
        test ecx, 0ffffff00h
        ; Exact mapped bytes 75 C5: jne 0x5884ce90
        __asm _emit 0x75
        __asm _emit 0xc5
        ; Exact mapped bytes EB 13: jmp 0x5884cee0
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 0F BA 25 B8 60 90 58 01: bt dword ptr [0x589060b8], 1
        __asm _emit 0x0f
        __asm _emit 0xba
        __asm _emit 0x25
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 73 3E: jae 0x5884cf15
        __asm _emit 0x73
        __asm _emit 0x3e
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 70 C0 00: pshufd xmm0, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        cmp ecx, 20h
        ; Exact mapped bytes 72 1C: jb 0x5884cf01
        __asm _emit 0x72
        __asm _emit 0x1c
        ; Exact mapped bytes F3 0F 7F 07: movdqu xmmword ptr [edi], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes F3 0F 7F 47 10: movdqu xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        add edi, 20h
        sub ecx, 20h
        cmp ecx, 20h
        ; Exact mapped bytes 73 EC: jae 0x5884cee5
        __asm _emit 0x73
        __asm _emit 0xec
        test ecx, 1fh
        ; Exact mapped bytes 74 62: je 0x5884cf63
        __asm _emit 0x74
        __asm _emit 0x62
        lea edi, [edi + ecx - 20h]
        ; Exact mapped bytes F3 0F 7F 07: movdqu xmmword ptr [edi], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x07
        ; Exact mapped bytes F3 0F 7F 47 10: movdqu xmmword ptr [edi + 0x10], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x10
        mov eax, dword ptr [esp + 4]
        mov edi, edx
        ret
        test ecx, 3
        ; Exact mapped bytes 74 0E: je 0x5884cf2b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov byte ptr [edi], al
        inc edi
        sub ecx, 1
        test ecx, 3
        ; Exact mapped bytes 75 F2: jne 0x5884cf1d
        __asm _emit 0x75
        __asm _emit 0xf2
        test ecx, 4
        ; Exact mapped bytes 74 08: je 0x5884cf3b
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [edi], eax
        add edi, 4
        sub ecx, 4
        test ecx, 0fffffff8h
        ; Exact mapped bytes 74 20: je 0x5884cf63
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        add edi, 8
        sub ecx, 8
        test ecx, 0fffffff8h
        ; Exact mapped bytes 75 ED: jne 0x5884cf50
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esp + 4]
        mov edi, edx
        ret
    }
}
