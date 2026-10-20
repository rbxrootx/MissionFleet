// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588598B0 .. +0x1C1 bytes.
extern "C" __declspec(naked) void FUN_588598b0_588598B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x588598d7
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 AA 8B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 DB 76 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        pop esi
        mov esp, ebp
        pop ebp
        ret
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        and eax, 7ff00000h
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 75: jne 0x58859960
        __asm _emit 0x75
        __asm _emit 0x75
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [esi], 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x58859912
        __asm _emit 0x75
        __asm _emit 0x12
        cmp eax, 7ff00000h
        ; Exact mapped bytes 74 6C: je 0x58859973
        __asm _emit 0x74
        __asm _emit 0x6c
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x58859912
        __asm _emit 0x75
        __asm _emit 0x07
        cmp eax, 0fff00000h
        ; Exact mapped bytes 74 61: je 0x58859973
        __asm _emit 0x74
        __asm _emit 0x61
        and eax, 7ff80000h
        cmp eax, 7ff80000h
        ; Exact mapped bytes 74 55: je 0x58859973
        __asm _emit 0x74
        __asm _emit 0x55
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 03 68 01 00: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 4D 08: movsd xmm1, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x08
        add esp, 8
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 58 05 C0 50 89 58: addsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        sub esp, 10h
        ; Exact mapped bytes F2 0F 11 44 24 08: movsd qword ptr [esp + 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        push 17h
        push 8
        ; Exact mapped bytes E8 78 AE 00 00: call 0x588647d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        pop esi
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        ; Exact mapped bytes 66 0F 2E C1: ucomisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xc1
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 0E: jp 0x5885997b
        __asm _emit 0x7a
        __asm _emit 0x0e
        mov dword ptr [esi], 0
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        pop esi
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        xor eax, eax
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, edx
        and ecx, 7ff00000h
        or eax, ecx
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x58859a3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov eax, edx
        and eax, 0fffffh
        or ecx, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58859a3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 18h]
        push ebx
        mov ebx, dword ptr [ebp - 14h]
        push edi
        mov dword ptr [ebp - 8], 0
        seta al
        and ebx, 0fffffh
        bsr edi, ebx
        mov dword ptr [ebp - 4], eax
        setne al
        test al, al
        ; Exact mapped bytes 74 05: je 0x588599dc
        __asm _emit 0x74
        __asm _emit 0x05
        add edi, 20h
        ; Exact mapped bytes EB 03: jmp 0x588599df
        __asm _emit 0xeb
        __asm _emit 0x03
        bsr edi, edx
        mov ecx, 34h
        mov eax, edx
        sub ecx, edi
        mov edx, ebx
        ; Exact mapped bytes E8 D1 36 02 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        and edx, 0ffefffffh
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x58859a01
        __asm _emit 0x74
        __asm _emit 0x06
        or edx, 80000000h
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], edx
        lea edx, [edi - 431h]
        ; Exact mapped bytes F2 0F 10 45 F0: movsd xmm0, qword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        and ecx, 0bfefffffh
        pop edi
        or ecx, 3fe00000h
        mov dword ptr [ebp - 10h], eax
        pop ebx
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        mov dword ptr [esi], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        and ecx, 0bfefffffh
        shr edx, 14h
        or ecx, 3fe00000h
        and edx, 7ffh
        mov dword ptr [ebp - 0ch], ecx
        sub edx, 3feh
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        mov dword ptr [esi], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
