// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A190 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_0042a190_0042A190() {
    __asm {
        sub esp, 30h
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 75 09: jne 0x42a1a8
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 30h
        ret
        ; Exact mapped bytes 66 33 F6: xor si, si
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 1D C4 C4 43 00: mov ebx, dword ptr [0x43c4c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        movzx edi, si
        ; Exact mapped bytes 66 46: inc si
        __asm _emit 0x66
        __asm _emit 0x46
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 7D 60 09 44 00: mov ax, word ptr [edi*2 + 0x440960]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x7d
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 66 83 FE 08: cmp si, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x08
        mov dword ptr [esp + edi*4 + 1ch], eax
        ; Exact mapped bytes 72 E4: jb 0x42a1b1
        __asm _emit 0x72
        __asm _emit 0xe4
        ; Exact mapped bytes 66 81 3D 20 14 45 00 00 03: cmp word ptr [0x451420], 0x300
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 08: jne 0x42a1e0
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 1ch], 0ffffffh
        cmp dword ptr [esp + 34h], 0
        ; Exact mapped bytes 74 0A: je 0x42a1f1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esp + 34h]
        cmp dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 1A: jne 0x42a20b
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [esp + 20h], 808080h
        mov dword ptr [esp + 34h], 0c0c0c0h
        ; Exact mapped bytes 74 08: je 0x42a20b
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 34h], 808080h
        cmp dword ptr [esp + 40h], 0
        ; Exact mapped bytes 75 1E: jne 0x42a230
        __asm _emit 0x75
        __asm _emit 0x1e
        mov esi, 451424h
        lea edi, [esp + 1ch]
        mov ecx, 20h
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 75 0C: jne 0x42a230
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 30h
        ret
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 1ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 3ch]
        push eax
        push ecx
        ; Exact mapped bytes A1 18 14 45 00: mov eax, dword ptr [0x451418]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 F6: xor si, si
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xf6
        push edx
        push 67c7h
        push eax
        ; Exact mapped bytes E8 5F 21 00 00: call 0x42c3c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D A0 C0 43 00: mov edi, dword ptr [0x43c0a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], eax
        movzx eax, si
        ; Exact mapped bytes 66 46: inc si
        __asm _emit 0x66
        __asm _emit 0x46
        mov ecx, dword ptr [esp + eax*4 + 1ch]
        lea ebx, [eax*4]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 FE 03: cmp si, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x03
        mov dword ptr [esp + ebx + 10h], eax
        ; Exact mapped bytes 72 E3: jb 0x42a26b
        __asm _emit 0x72
        __asm _emit 0xe3
        xor eax, eax
        xor ecx, ecx
        movzx edx, ax
        cmp dword ptr [esp + edx*4 + 10h], ecx
        ; Exact mapped bytes 74 53: je 0x42a2e8
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 72 EF: jb 0x42a28c
        __asm _emit 0x72
        __asm _emit 0xef
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 74 44: je 0x42a2e8
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes E8 47 EE FF FF: call 0x4290f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 14h]
        lea ecx, [esp + 10h]
        mov edx, 451444h
        lea esi, [esp + 1ch]
        mov eax, dword ptr [ecx]
        mov edi, 451424h
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ebx
        mov dword ptr [edx + 8], ecx
        mov ecx, 8
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes A3 50 14 45 00: mov dword ptr [0x451450], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, 1
        pop ebx
        add esp, 30h
        ret
        ; Exact mapped bytes 66 33 F6: xor si, si
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xf6
        movzx eax, si
        ; Exact mapped bytes 66 46: inc si
        __asm _emit 0x66
        __asm _emit 0x46
        lea ecx, [esp + eax*4 + 10h]
        push ecx
        ; Exact mapped bytes E8 D6 ED FF FF: call 0x4290d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 66 83 FE 03: cmp si, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x03
        ; Exact mapped bytes 72 E8: jb 0x42a2eb
        __asm _emit 0x72
        __asm _emit 0xe8
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes E8 C3 ED FF FF: call 0x4290d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 30h
        ret
    }
}
