// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1FA0 .. +0x337 bytes.
extern "C" __declspec(naked) void FUN_587a1fa0_587A1FA0() {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        cmp dword ptr [esi + 80h], 49444154h
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x587a203a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        test ecx, ecx
        ; Exact mapped bytes 75 21: jne 0x587a1fe4
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi + 0c0h]
        add eax, 4
        push eax
        push esi
        ; Exact mapped bytes E8 2D 4A 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 0bch], eax
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 1E: jmp 0x587a2002
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x587a2002
        __asm _emit 0x74
        __asm _emit 0x18
        mov dword ptr [ecx], 0
        mov edi, dword ptr [eax]
        push eax
        push esi
        ; Exact mapped bytes E8 D7 49 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, edi
        test edi, edi
        ; Exact mapped bytes 75 EE: jne 0x587a1ff0
        __asm _emit 0x75
        __asm _emit 0xee
        push esi
        ; Exact mapped bytes E8 C8 07 00 00: call 0x587a27d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 49444154h
        push esi
        ; Exact mapped bytes E8 CC 02 00 00: call 0x587a22e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 96 02 00 00: jne 0x587a22b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        add eax, 4
        mov dword ptr [esi + 90h], eax
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esp + 18h]
        lea edx, [esi + 84h]
        mov ecx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [edx], eax
        push ebp
        or eax, 0ffffffffh
        cmp ebx, -1
        cmovb eax, ebx
        sub ebx, eax
        mov dword ptr [esi + 88h], eax
        mov eax, ecx
        xor ecx, ecx
        test ebx, ebx
        cmovne eax, ecx
        push eax
        push edx
        ; Exact mapped bytes E8 4F A4 00 00: call 0x587ac4c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, dword ptr [esi + 88h]
        add esp, 8
        mov edi, dword ptr [esi + 94h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi + 88h], 0
        test edi, edi
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x587a2183
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0bch]
        lea ebp, [esi + 74h]
        mov edi, dword ptr [esi + 0c0h]
        add ebx, 4
        test byte ptr [ebp], 4
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 75 24: jne 0x587a20da
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [esi + 2a4h], 0
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 75 17: jne 0x587a20da
        __asm _emit 0x75
        __asm _emit 0x17
        push esi
        ; Exact mapped bytes E8 07 07 00 00: call 0x587a27d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 50 FE FF FF: call 0x587a1f20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 74h]
        add esp, 0ch
        mov dword ptr [esp + 10h], eax
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x587a2153
        __asm _emit 0x74
        __asm _emit 0x75
        cmp edi, 7fffffffh
        ; Exact mapped bytes 0F 87 E2 01 00 00: ja 0x587a22cc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 49444154h
        push esi
        ; Exact mapped bytes E8 6A 1C 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x587a2110
        __asm _emit 0x74
        __asm _emit 0x13
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 BB 47 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push esi
        ; Exact mapped bytes E8 A3 D4 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 1ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 1dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 1eh], al
        lea eax, [esp + 1ch]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 2bh], cl
        ; Exact mapped bytes E8 74 47 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        add esp, 0ch
        or dword ptr [ebp], 4
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [esi + 90h], ebx
        mov ebx, dword ptr [esp + 24h]
        mov dword ptr [esi + 94h], edi
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x587a21ab
        __asm _emit 0x75
        __asm _emit 0x38
        lea edx, [esi + 84h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 CF FE FF FF: jne 0x587a2050
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x587a218b
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x587a21ab
        __asm _emit 0x75
        __asm _emit 0x1c
        lea edx, [esi + 84h]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 B3 FE FF FF: jne 0x587a2050
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 4
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x587a22c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x587a2297
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x587a229f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x587a229f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0c0h]
        mov ebp, dword ptr [esi + 0bch]
        sub ebx, edi
        lea edi, [esi + 74h]
        add ebp, 4
        mov dword ptr [esp + 10h], edi
        test byte ptr [edi], cl
        ; Exact mapped bytes 75 24: jne 0x587a21fd
        __asm _emit 0x75
        __asm _emit 0x24
        cmp byte ptr [esi + 2a4h], 0
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 75 17: jne 0x587a21fd
        __asm _emit 0x75
        __asm _emit 0x17
        push esi
        ; Exact mapped bytes E8 E4 05 00 00: call 0x587a27d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebp
        ; Exact mapped bytes E8 2D FD FF FF: call 0x587a1f20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 74h]
        add esp, 0ch
        mov dword ptr [esp + 10h], eax
        test ebx, ebx
        ; Exact mapped bytes 74 75: je 0x587a2276
        __asm _emit 0x74
        __asm _emit 0x75
        cmp ebx, 7fffffffh
        ; Exact mapped bytes 0F 87 BF 00 00 00: ja 0x587a22cc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 49444154h
        push esi
        ; Exact mapped bytes E8 47 1B 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 74 13: je 0x587a2233
        __asm _emit 0x74
        __asm _emit 0x13
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes E8 98 46 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes E8 80 D3 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 1ch], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 1dh], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 1eh], al
        lea eax, [esp + 1ch]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 2bh], cl
        ; Exact mapped bytes E8 51 46 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        add esp, 0ch
        or dword ptr [edi], 0ch
        mov dword ptr [esi + 94h], 0
        mov dword ptr [esi + 90h], 0
        mov dword ptr [esi + 80h], 0
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret
        push eax
        push esi
        ; Exact mapped bytes E8 DA E7 FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push dword ptr [esi + 9ch]
        push esi
        ; Exact mapped bytes E8 CB CB FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 9ch]
        push esi
        ; Exact mapped bytes E8 BF CB FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8c00h
        push esi
        ; Exact mapped bytes E8 B4 CB FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b89ach
        push esi
        ; Exact mapped bytes E8 A9 CB FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
