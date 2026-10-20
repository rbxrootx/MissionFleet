// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A070 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_1008a070_1008A070() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push 18h
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes E8 1C 27 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        add esp, 4
        inc ecx
        mov dword ptr [esp + 10h], eax
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, dword ptr [ebx + 194h]
        mov eax, dword ptr [ebx + 198h]
        cmp esi, eax
        ; Exact mapped bytes 74 5D: je 0x1008a10a
        __asm _emit 0x74
        __asm _emit 0x5d
        lea edi, [esi + 2dh]
        mov eax, dword ptr [esp + 10h]
        push edi
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1008a0d2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebx + 198h]
        add esi, 54h
        add edi, 54h
        cmp esi, eax
        ; Exact mapped bytes 75 E0: jne 0x1008a0b0
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 38: jmp 0x1008a10a
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ebp, dword ptr [ebx + 198h]
        lea eax, [esi + 54h]
        cmp eax, ebp
        ; Exact mapped bytes 74 18: je 0x1008a0f7
        __asm _emit 0x74
        __asm _emit 0x18
        lea edx, [eax - 54h]
        mov esi, eax
        mov edi, edx
        add eax, 54h
        mov ecx, 15h
        add edx, 54h
        cmp eax, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 75 EB: jne 0x1008a0e2
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, dword ptr [ebx + 198h]
        add eax, -54h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [ebx + 198h], eax
        mov esi, dword ptr [ebx + 228h]
        mov eax, dword ptr [ebx + 22ch]
        cmp esi, eax
        mov ebp, 4
        ; Exact mapped bytes 74 22: je 0x1008a141
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x1008a2f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 22ch]
        add esi, ebp
        cmp esi, eax
        ; Exact mapped bytes 75 DE: jne 0x1008a11f
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebx + 22ch]
        mov ecx, dword ptr [ebx + 230h]
        lea esi, [ebx + 224h]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        ; Exact mapped bytes 0F 83 B0 00 00 00: jae 0x1008a213
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x1008a176
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 77 05: ja 0x1008a17b
        __asm _emit 0x77
        __asm _emit 0x05
        mov ecx, 1
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x1008a183
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x1008a188
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 7D 02: jge 0x1008a194
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea edx, [eax*4]
        push edx
        ; Exact mapped bytes E8 FF 25 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        mov ecx, esi
        push ebx
        push edi
        push eax
        ; Exact mapped bytes E8 7D 7B FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [esp + 10h]
        mov ebp, eax
        push ecx
        push 1
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 9C 7B FB FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 5C 7B FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 ED 49 01 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes E8 98 25 0E 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x25
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        add esp, 4
        lea ecx, [ebx + eax*4]
        mov dword ptr [esi + 0ch], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 10 7B FB FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        lea edx, [ebx + eax*4 + 4]
        mov dword ptr [esi + 4], ebx
        mov ebx, dword ptr [esp + 14h]
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x1008a29d
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 43: jae 0x1008a262
        __asm _emit 0x73
        __asm _emit 0x43
        lea edx, [edi + 4]
        mov ecx, esi
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 04 7B FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 10h]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 15 7B FB FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 46: je 0x1008a29a
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        add eax, ebp
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x1008a254
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 38: jmp 0x1008a29a
        __asm _emit 0xeb
        __asm _emit 0x38
        push eax
        push eax
        add eax, -4
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C1 7A FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0C: je 0x1008a285
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ebp
        sub ecx, ebp
        cmp eax, edi
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F4: jne 0x1008a279
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ecx, [edi + 4]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 0C: je 0x1008a29a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        add eax, ebp
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x1008a28e
        __asm _emit 0x75
        __asm _emit 0xf4
        add dword ptr [esi + 8], ebp
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 200h
        ; Exact mapped bytes 75 45: jne 0x1008a2f2
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esp + 10h]
        push 83add7h
        push 0
        push ecx
        mov ecx, dword ptr [ebx + 218h]
        ; Exact mapped bytes E8 EC 99 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 21ch]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 D5 99 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 220h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 BE 99 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
