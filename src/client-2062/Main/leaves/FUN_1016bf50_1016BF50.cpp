// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016BF50 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_1016bf50_1016BF50() {
    __asm {
        sub esp, 38h
        push ebp
        push esi
        mov esi, ecx
        or ebp, 0ffffffffh
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x1016c0f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 44h]
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x1016c0fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 4ch]
        push ebx
        mov ebx, dword ptr [esp + 58h]
        push edi
        xor edi, edi
        cmp eax, 8002000fh
        mov dword ptr [esp + 1ch], 1020304h
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], ecx
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 2ch], ebx
        ; Exact mapped bytes 75 09: jne 0x1016bfac
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esp + 4ch], eax
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x1016c02c
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 0F BE 44 0C 1C: movsx eax, byte ptr [esp + ecx + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x1c
        add eax, 0dh
        imul eax, ecx
        inc ecx
        lea edx, [eax + eax*4]
        cmp ecx, 14h
        lea edx, [edi + edx*2]
        lea edi, [edx + eax]
        ; Exact mapped bytes 72 E6: jb 0x1016bfae
        __asm _emit 0x72
        __asm _emit 0xe6
        xor ecx, ecx
        mov dword ptr [esp + 4ch], edi
        test ebx, ebx
        ; Exact mapped bytes 76 22: jbe 0x1016bff4
        __asm _emit 0x76
        __asm _emit 0x22
        mov eax, dword ptr [esp + 58h]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        add eax, 1dh
        imul eax, ecx
        lea edx, [eax*8]
        sub edx, eax
        add edi, edx
        inc ecx
        cmp ecx, ebx
        ; Exact mapped bytes 72 E2: jb 0x1016bfd2
        __asm _emit 0x72
        __asm _emit 0xe2
        mov dword ptr [esp + 4ch], edi
        mov eax, dword ptr [esi + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x1016c022
        __asm _emit 0x74
        __asm _emit 0x27
        mov ebp, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 40h]
        mov eax, ebp
        xor edx, edx
        imul eax, edi
        div dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 0ch]
        add ebp, 11h
        mov ecx, dword ptr [eax + edx*4]
        mov dword ptr [esi + 58h], ebp
        xor edi, ecx
        or ebp, 0ffffffffh
        mov dword ptr [esp + 4ch], edi
        ; Exact mapped bytes EB 0A: jmp 0x1016c02c
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor edi, 7c8ba106h
        mov dword ptr [esp + 4ch], edi
        mov edx, dword ptr [esp + 58h]
        lea ecx, [esp + 1ch]
        mov dword ptr [esp + 38h], ebx
        pop edi
        test ebx, ebx
        mov eax, 3
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 2ch], 14h
        mov dword ptr [esp + 38h], edx
        pop ebx
        ; Exact mapped bytes 74 12: je 0x1016c065
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [esp + 44h]
        mov dword ptr [esp + 38h], 4
        mov dword ptr [esp + 3ch], ecx
        ; Exact mapped bytes EB 15: jmp 0x1016c07a
        __asm _emit 0xeb
        __asm _emit 0x15
        lea edx, [esp + 44h]
        mov eax, 2
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 30h], 4
        mov edx, dword ptr [esp + 58h]
        lea ecx, [esi + 8]
        push 0
        push ecx
        lea ecx, [esp + 10h]
        push edx
        push ecx
        push eax
        mov eax, dword ptr [esi + 4]
        lea edx, [esp + 3ch]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B8 51 17 10: call dword ptr [0x101751b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x1016c15d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B4 51 17 10: call dword ptr [0x101751b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 3e5h
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x1016c15d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 30h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x1016c0f2
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 4], ebp
        ; Exact mapped bytes 74 33: je 0x1016c0f2
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        push 1
        push ecx
        ; Exact mapped bytes FF 15 AC 51 17 10: call dword ptr [0x101751ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes FF 15 A4 51 17 10: call dword ptr [0x101751a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2ch]
        push eax
        ; Exact mapped bytes E8 F8 05 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 30h], 0
        pop esi
        xor eax, eax
        pop ebp
        add esp, 38h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 48h]
        mov dword ptr [esp + 2ch], edx
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 54h]
        lea edx, [esp + 28h]
        mov dword ptr [esp + 18h], edx
        mov edx, dword ptr [esp + 50h]
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 1ch], eax
        lea eax, [esi + 8]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 58h]
        push 0
        push eax
        lea eax, [esp + 10h]
        push edx
        push eax
        lea edx, [esp + 24h]
        push 2
        push edx
        mov dword ptr [esp + 40h], 1020304h
        mov dword ptr [esp + 2ch], 14h
        push ecx
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x1016c094
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov eax, 1
        pop ebp
        add esp, 38h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
