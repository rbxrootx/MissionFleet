// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10012A60 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_10012a60_10012A60() {
    __asm {
        sub esp, 48h
        mov edx, dword ptr [esp + 4ch]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 54h]
        push ebp
        mov eax, dword ptr [ebx + 0ch]
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        cmp esi, eax
        ; Exact mapped bytes 74 1A: je 0x10012a95
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [esi], edx
        ; Exact mapped bytes 75 05: jne 0x10012a84
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [esi + 4], ecx
        ; Exact mapped bytes 74 09: je 0x10012a8d
        __asm _emit 0x74
        __asm _emit 0x09
        add esi, 48h
        cmp esi, eax
        ; Exact mapped bytes 75 F0: jne 0x10012a7b
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes EB 08: jmp 0x10012a95
        __asm _emit 0xeb
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 0F 85 28 02 00 00: jne 0x10012cbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 64h]
        ; Exact mapped bytes 8B 35 B0 50 17 10: mov esi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esp + 68h]
        mov dword ptr [esp + 10h], edx
        lea edx, [esp + 1ch]
        push ecx
        push edx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 6ch]
        lea ecx, [esp + 34h]
        push eax
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 70h]
        lea eax, [esp + 3dh]
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 0ch]
        mov edx, dword ptr [ebx + 10h]
        add ebx, 4
        sub edx, ecx
        mov eax, 38e38e39h
        mov ebp, ecx
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 0F 83 E9 00 00 00: jae 0x10012bdf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x10012b19
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, ecx
        mov eax, 38e38e39h
        sub edx, esi
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ; Exact mapped bytes 77 05: ja 0x10012b1e
        __asm _emit 0x77
        __asm _emit 0x05
        mov edi, 1
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x10012b26
        __asm _emit 0x75
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 13: jmp 0x10012b39
        __asm _emit 0xeb
        __asm _emit 0x13
        sub ecx, esi
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        lea eax, [edx + edi]
        test eax, eax
        mov dword ptr [esp + 64h], eax
        ; Exact mapped bytes 7D 02: jge 0x10012b46
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea edx, [eax + eax*8]
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 4E 9C 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9c
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, dword ptr [ebx + 4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr [esp + 70h], eax
        mov esi, eax
        ; Exact mapped bytes 74 14: je 0x10012b76
        __asm _emit 0x74
        __asm _emit 0x14
        push edi
        push esi
        ; Exact mapped bytes E8 47 06 00 00: call 0x100131b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 48h
        add esp, 8
        add esi, 48h
        cmp edi, ebp
        ; Exact mapped bytes 75 EC: jne 0x10012b62
        __asm _emit 0x75
        __asm _emit 0xec
        lea eax, [esp + 10h]
        mov ecx, ebx
        push eax
        push 1
        push esi
        ; Exact mapped bytes E8 BB 05 00 00: call 0x10013140
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        add esi, 48h
        push esi
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 FB 04 00 00: call 0x10013090
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        mov eax, dword ptr [ebx + 4]
        push edx
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 2C C0 08 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4]
        push ecx
        ; Exact mapped bytes E8 D7 9B 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9b
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        mov esi, dword ptr [esp + 74h]
        add esp, 4
        mov ecx, ebx
        lea edx, [eax + eax*8]
        lea eax, [esi + edx*8]
        mov dword ptr [ebx + 0ch], eax
        ; Exact mapped bytes E8 98 04 00 00: call 0x10013060
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        mov dword ptr [ebx + 4], esi
        pop edi
        lea ecx, [eax + eax*8]
        lea edx, [esi + ecx*8]
        pop esi
        mov dword ptr [ebx + 8], edx
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, ecx
        mov eax, 38e38e39h
        sub edx, ebp
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 1
        ; Exact mapped bytes 73 68: jae 0x10012c61
        __asm _emit 0x73
        __asm _emit 0x68
        lea edx, [ebp + 48h]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 8A 04 00 00: call 0x10013090
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 8]
        lea eax, [esp + 10h]
        mov ecx, esi
        push eax
        sub ecx, ebp
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov ecx, edx
        mov eax, 1
        shr ecx, 1fh
        add edx, ecx
        mov ecx, ebx
        sub eax, edx
        push eax
        push esi
        ; Exact mapped bytes E8 0D 05 00 00: call 0x10013140
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        cmp ebp, eax
        ; Exact mapped bytes 74 14: je 0x10012c4e
        __asm _emit 0x74
        __asm _emit 0x14
        mov edi, ebp
        add ebp, 48h
        mov ecx, 12h
        lea esi, [esp + 10h]
        cmp ebp, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EC: jne 0x10012c3a
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [ebx + 8]
        pop edi
        add eax, 48h
        pop esi
        mov dword ptr [ebx + 8], eax
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        push ecx
        push ecx
        add ecx, -48h
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 22 04 00 00: call 0x10013090
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 8]
        lea eax, [edx - 48h]
        cmp ebp, eax
        ; Exact mapped bytes 74 15: je 0x10012c8d
        __asm _emit 0x74
        __asm _emit 0x15
        sub eax, 48h
        sub edx, 48h
        mov ecx, 12h
        mov esi, eax
        mov edi, edx
        cmp eax, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EB: jne 0x10012c78
        __asm _emit 0x75
        __asm _emit 0xeb
        lea edx, [ebp + 48h]
        mov eax, ebp
        cmp ebp, edx
        ; Exact mapped bytes 74 14: je 0x10012caa
        __asm _emit 0x74
        __asm _emit 0x14
        mov edi, eax
        add eax, 48h
        mov ecx, 12h
        lea esi, [esp + 10h]
        cmp eax, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EC: jne 0x10012c96
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [ebx + 8]
        pop edi
        add eax, 48h
        pop esi
        mov dword ptr [ebx + 8], eax
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [esp + 70h]
        mov ecx, dword ptr [esp + 64h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esi + 2dh]
        push edx
        push eax
        mov dword ptr [esi + 8], ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 68h]
        lea edx, [esi + 0ch]
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 6ch]
        add esi, 24h
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
