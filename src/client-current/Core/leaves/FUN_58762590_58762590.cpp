// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762590 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_58762590_58762590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E AA D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC EB FF FF: call 0x58761160
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x58762687
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x58762681
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        cdq
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D7 43 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x43
        __asm _emit 0xd2
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 14h], esi
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        cdq
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9E 9A D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 2A 80 48 03 00 00: cvtsi2sd xmm0, dword ptr [eax + 0x348]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 10h]
        add ecx, edx
        ; Exact mapped bytes F2 0F 2A C9: cvtsi2sd xmm1, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        ; Exact mapped bytes F2 0F 59 0D A0 51 89 58: mulsd xmm1, qword ptr [0x588951a0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D 88 54 8B 58: divsd xmm1, qword ptr [0x588b5488]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x8b
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes E8 C8 E9 0E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D DC: fstp qword ptr [ebp - 0x24]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 0F 2F 45 DC: comisd xmm0, xmmword ptr [ebp - 0x24]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 76 09: jbe 0x58762673
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x5876267a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 48: jmp 0x587626c7
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes EB 04: jmp 0x58762685
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x587626c7
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB 40: jmp 0x587626c7
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 26 E7 FF: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        pop esi
        mov esp, ebp
    }
}
