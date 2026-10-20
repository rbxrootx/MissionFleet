// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588786D0 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_588786d0_588786D0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        sub esp, 10h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 54 05 A0 1B 8C 58: andps xmm0, xmmword ptr [0x588c1ba0]
        __asm _emit 0x0f
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x1b
        __asm _emit 0x8c
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5887877e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 3D: jne 0x58878736
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes F2 0F 10 0D C0 50 89 58: movsd xmm1, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 15: jbe 0x5887871c
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 86 7B 01 00 00: jbe 0x588788a4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        test ecx, ecx
        ; Exact mapped bytes 75 44: jne 0x5887877e
        __asm _emit 0x75
        __asm _emit 0x44
        cmp eax, 0fff00000h
        ; Exact mapped bytes 75 3D: jne 0x5887877e
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes F2 0F 10 0D C0 50 89 58: movsd xmm1, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 10: jbe 0x5887875f
        __asm _emit 0x76
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 86 38 01 00 00: jbe 0x588788a4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x588788bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 31: jne 0x588787c4
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes F2 0F 10 4D 10: movsd xmm1, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 87 62 FF FF FF: ja 0x58878707
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 87 07 01 00 00: ja 0x588788b9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 C0 50 89 58: movsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x588788bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fff00000h
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x588788bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 45 10: movsd xmm0, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 27 9A FE FF: call 0x58862210
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        test al, 90h
        ; Exact mapped bytes 75 6D: jne 0x5887885d
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes F2 0F 10 45 10: movsd xmm0, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 DE 2B 00 00: call 0x5887b3e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 4D 10: movsd xmm1, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 45 F8: movsd xmm0, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 0F 2E C1: ucomisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xc1
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 41: jp 0x5887885d
        __asm _emit 0x7a
        __asm _emit 0x41
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 59 05 28 52 89 58: mulsd xmm0, qword ptr [0x58895228]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 A7 2B 00 00: call 0x5887b3e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 45 F8: movsd xmm0, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf8
        add esp, 8
        ; Exact mapped bytes 66 0F 2E 45 F0: ucomisd xmm0, qword ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x45
        __asm _emit 0xf0
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 07: jp 0x58878856
        __asm _emit 0x7a
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 09: jmp 0x5887885f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x5887885f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes F2 0F 10 45 10: movsd xmm0, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 21: jbe 0x5887888e
        __asm _emit 0x76
        __asm _emit 0x21
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 3C: jne 0x588788b6
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 1A: jbe 0x588788ae
        __asm _emit 0x76
        __asm _emit 0x1a
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x588788a1
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 10 0D 20 33 8C 58: movsd xmm1, qword ptr [0x588c3320]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes F2 0F 11 08: movsd qword ptr [eax], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x08
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 10 05 C0 50 89 58: movsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
