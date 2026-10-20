// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410000 .. +0x2B8 bytes.
extern "C" __declspec(naked) void FUN_00410000_00410000() {
    __asm {
        sub esp, 2ch
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov ecx, dword ptr [ebx + 4]
        push edi
        cmp ecx, -1
        ; Exact mapped bytes 0F 84 D6 01 00 00: je 0x4101eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 40h]
        mov ebp, dword ptr [esp + 50h]
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [esp + 48h]
        mov dword ptr [esp + 28h], 1020304h
        mov dword ptr [esp + 34h], edx
        mov edx, dword ptr [ebx + 10h]
        test edx, edx
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes 0F 85 AF 01 00 00: jne 0x4101f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0e0h]
        test edx, edx
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x41017d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 4ch]
        lea ecx, [esp + 28h]
        mov dword ptr [esp + 14h], ecx
        xor ecx, ecx
        cmp eax, 8001000fh
        mov dword ptr [esp + 10h], 14h
        mov dword ptr [esp + 1ch], esi
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 4ch], ecx
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x41010a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 0F BE 44 14 28: movsx eax, byte ptr [esp + edx + 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x28
        add eax, 7
        imul eax, edx
        lea edi, [eax*8]
        sub edi, eax
        lea ecx, [ecx + edi*4]
        add ecx, eax
        inc edx
        cmp edx, 14h
        mov dword ptr [esp + 4ch], ecx
        ; Exact mapped bytes 72 DD: jb 0x410085
        __asm _emit 0x72
        __asm _emit 0xdd
        xor edx, edx
        test ebp, ebp
        ; Exact mapped bytes 76 1B: jbe 0x4100c9
        __asm _emit 0x76
        __asm _emit 0x1b
        ; Exact mapped bytes 0F BE 04 32: movsx eax, byte ptr [edx + esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x32
        add eax, 0bh
        imul eax, edx
        lea edi, [eax + eax*2]
        lea ecx, [ecx + edi*4]
        add ecx, eax
        inc edx
        cmp edx, ebp
        mov dword ptr [esp + 4ch], ecx
        ; Exact mapped bytes 72 E5: jb 0x4100ae
        __asm _emit 0x72
        __asm _emit 0xe5
        mov eax, dword ptr [ebx + 0cch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x410100
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edi, dword ptr [ebx + 0d8h]
        mov esi, dword ptr [ebx + 0c8h]
        mov eax, edi
        xor edx, edx
        imul eax, ecx
        div dword ptr [esi + 4]
        mov eax, dword ptr [esi + 0ch]
        mov esi, dword ptr [eax + edx*4]
        xor ecx, esi
        add edi, 0dh
        mov dword ptr [esp + 4ch], ecx
        mov dword ptr [ebx + 0d8h], edi
        ; Exact mapped bytes EB 0A: jmp 0x41010a
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor ecx, 0f3a91cd0h
        mov dword ptr [esp + 4ch], ecx
        test ebp, ebp
        mov eax, 3
        ; Exact mapped bytes 75 17: jne 0x41012a
        __asm _emit 0x75
        __asm _emit 0x17
        lea ecx, [esp + 4ch]
        mov eax, 2
        mov dword ptr [esp + 1ch], ecx
        mov dword ptr [esp + 18h], 4
        ; Exact mapped bytes EB 10: jmp 0x41013a
        __asm _emit 0xeb
        __asm _emit 0x10
        lea edx, [esp + 4ch]
        mov dword ptr [esp + 20h], 4
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esp + 54h]
        lea ecx, [ebx + 20h]
        push 0
        push ecx
        lea ecx, [esp + 5ch]
        push edx
        push ecx
        push eax
        mov eax, dword ptr [ebx + 4]
        lea edx, [esp + 24h]
        push edx
        push eax
        ; Exact mapped bytes FF 15 D4 C5 43 00: call dword ptr [0x43c5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x4102a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 D0 C5 43 00: call dword ptr [0x43c5d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, 3e5h
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x4102a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2747h
        ; Exact mapped bytes 74 68: je 0x4101e3
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes EB 5B: jmp 0x4101d8
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov edx, dword ptr [esp + 4ch]
        lea eax, [esp + 28h]
        mov dword ptr [esp + 14h], eax
        lea eax, [ebx + 20h]
        mov dword ptr [esp + 1ch], edx
        mov edx, dword ptr [esp + 54h]
        push 0
        push eax
        lea eax, [esp + 54h]
        push edx
        push eax
        lea edx, [esp + 20h]
        push 2
        push edx
        push ecx
        mov dword ptr [esp + 2ch], 14h
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes FF 15 D4 C5 43 00: call dword ptr [0x43c5d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x4102a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 D0 C5 43 00: call dword ptr [0x43c5d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, 3e5h
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x4102a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2747h
        ; Exact mapped bytes 74 0B: je 0x4101e3
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, 274ah
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x4102a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 75 0B 00 00: call 0x410d60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 2ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 18h]
        mov ecx, dword ptr [ebx + 14h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 46: jl 0x410247
        __asm _emit 0x7c
        __asm _emit 0x46
        lea eax, [eax*8 + 40h]
        push eax
        ; Exact mapped bytes E8 DE D6 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 14h]
        mov esi, dword ptr [ebx + 1ch]
        shl ecx, 3
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        mov dword ptr [esp + 58h], eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [ebx + 1ch]
        push eax
        ; Exact mapped bytes E8 E1 D6 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 18h]
        mov ecx, dword ptr [esp + 5ch]
        add esp, 8
        add eax, 8
        mov dword ptr [ebx + 1ch], ecx
        mov dword ptr [ebx + 18h], eax
        push 14h
        ; Exact mapped bytes E8 9E D6 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ebx + 1ch]
        lea esi, [esp + 2ch]
        add esp, 4
        mov dword ptr [ecx + edx*8 + 4], eax
        mov edx, dword ptr [ebx + 14h]
        mov eax, dword ptr [ebx + 1ch]
        mov ecx, 5
        mov edi, dword ptr [eax + edx*8 + 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebx + 14h]
        mov edx, dword ptr [ebx + 1ch]
        mov dword ptr [edx + ecx*8], 14h
        mov esi, dword ptr [ebx + 14h]
        mov ecx, dword ptr [esp + 4ch]
        inc esi
        test ecx, ecx
        mov dword ptr [ebx + 14h], esi
        mov eax, esi
        ; Exact mapped bytes 74 1B: je 0x4102a9
        __asm _emit 0x74
        __asm _emit 0x1b
        test ebp, ebp
        ; Exact mapped bytes 74 17: je 0x4102a9
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebx + 1ch]
        mov dword ptr [edx + eax*8 + 4], ecx
        mov eax, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ebx + 1ch]
        mov dword ptr [ecx + eax*8], ebp
        mov eax, dword ptr [ebx + 14h]
        inc eax
        mov dword ptr [ebx + 14h], eax
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 2ch
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
