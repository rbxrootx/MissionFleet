// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790780 .. +0x204 bytes.
extern "C" __declspec(naked) void FUN_58790780() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        mov esi, ecx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x5879092f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, dword ptr [esi + 12114h]
        ; Exact mapped bytes 75 27: jne 0x587907c5
        __asm _emit 0x75
        __asm _emit 0x27
        cmp dword ptr [esi + 1213ch], 13h
        mov ecx, esi
        ; Exact mapped bytes 75 0F: jne 0x587907b8
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 28h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 CB FF FF: call 0x5878d2c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 13ch]
        ; Exact mapped bytes 75 0F: jne 0x587907dc
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, esi
        ; Exact mapped bytes E8 BC A4 FF FF: call 0x5878ac90
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 24ch], edi
        ; Exact mapped bytes 0F 8E 99 01 00 00: jle 0x58790983
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 11b64h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 14: je 0x58790808
        __asm _emit 0x74
        __asm _emit 0x14
        inc edi
        add eax, 4
        cmp edi, dword ptr [esi + 24ch]
        ; Exact mapped bytes 7C F0: jl 0x587907f0
        __asm _emit 0x7c
        __asm _emit 0xf0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BC 7E 52 83 00 00 00: cmp word ptr [esi + edi*2 + 0x8352], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x7e
        __asm _emit 0x52
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 77: je 0x5879088a
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esi + edi*4 + 11b64h]
        xor ecx, ecx
        mov dword ptr [eax + 50h], 3
        cmp dword ptr [esi + 24ch], ecx
        ; Exact mapped bytes 7E 28: jle 0x58790853
        __asm _emit 0x7e
        __asm _emit 0x28
        lea eax, [esi + 1201ch]
        mov edx, dword ptr [eax]
        cmp ecx, edi
        ; Exact mapped bytes 75 0B: jne 0x58790842
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 5A 24: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5a
        __asm _emit 0x24
        ; Exact mapped bytes EB 05: jmp 0x58790847
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 4A 24 01: or word ptr [edx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4a
        __asm _emit 0x24
        __asm _emit 0x01
        inc ecx
        add eax, 4
        cmp ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes 7C DE: jl 0x58790831
        __asm _emit 0x7c
        __asm _emit 0xde
        ; Exact mapped bytes A1 70 45 A2 58: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, edi
        shl ecx, 5
        lea edx, [ecx + esi + 8754h]
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push 5898d0d4h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes A1 70 45 A2 58: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        add eax, 24h
        add esp, 0ch
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, edi
        shl eax, 8
        push ebp
        ; Exact mapped bytes 8B 2D 98 C1 98 58: mov ebp, dword ptr [0x5898c198]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea ebx, [eax + esi]
        lea ecx, [ebx + 252h]
        push ecx
        lea edx, [esi + 144h]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 66 8B 84 7E 52 82 00 00: mov ax, word ptr [esi + edi*2 + 0x8252]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x52
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, 9a58h
        push ebx
        lea ecx, [esi + 9954h]
        ; Exact mapped bytes 66 89 86 44 02 00 00: mov word ptr [esi + 0x244], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 89 3D FC 3E 9C 58: mov dword ptr [0x589c3efc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        movzx edx, word ptr [esi + edi*2 + 11a58h]
        xor eax, eax
        cmp dword ptr [esi + 24ch], eax
        mov dword ptr [esi + 9a54h], edx
        pop ebp
        ; Exact mapped bytes 0F 8E 98 00 00 00: jle 0x58790983
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 11b64h]
        lea ebx, [esi + 8352h]
        ; Exact mapped bytes EB 07: jmp 0x58790900
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        cmp dword ptr [esi + edi*4 + 11b64h], edx
        ; Exact mapped bytes 74 0D: je 0x58790918
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 3B 00: cmp word ptr [ebx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58790918
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [edx + 50h], 1
        inc eax
        add ebx, 2
        add ecx, 4
        cmp eax, dword ptr [esi + 24ch]
        ; Exact mapped bytes 7C D9: jl 0x58790900
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0ch
        ; Exact mapped bytes 75 4F: jne 0x58790983
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 84h]
        test ecx, ecx
        ; Exact mapped bytes 74 45: je 0x58790983
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x58790955
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 29: jne 0x58790983
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 80 47 A2 58: mov dword ptr [0x58a24780], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 84h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0ch]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
    }
}
