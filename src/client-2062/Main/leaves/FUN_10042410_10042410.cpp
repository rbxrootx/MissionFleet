// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042410 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_10042410_10042410() {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push esi
        cmp eax, ecx
        push edi
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x10042557
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0f4241h
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 28h], edx
        ; Exact mapped bytes 74 0D: je 0x1004243a
        __asm _emit 0x74
        __asm _emit 0x0d
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x10042426
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x10042557
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push 0cch
        ; Exact mapped bytes E8 4C A3 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x00
        mov ebx, eax
        mov ecx, 33h
        xor eax, eax
        mov edi, ebx
        mov ebp, dword ptr [esp + 1ch]
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [eax + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x10042493
        __asm _emit 0x74
        __asm _emit 0x1f
        lea edi, [ebp + 6]
        mov ecx, dword ptr [esi + 0f10h]
        push edi
        mov eax, dword ptr [ecx + 6ch]
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10042493
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x10042477
        __asm _emit 0x75
        __asm _emit 0xe4
        mov dword ptr [ebx + 0b4h], 5
        mov edx, dword ptr [esi + 4]
        mov dword ptr [ebx], edx
        mov eax, dword ptr [esi + 8]
        lea edi, [ebx + 8]
        mov ecx, 2bh
        mov esi, ebp
        mov dword ptr [ebx + 4], eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor ecx, ecx
        mov cl, byte ptr [ebp + 0a4h]
        mov eax, ecx
        mov dword ptr [ebx + 0c8h], ecx
        mov edx, dword ptr [ebp + 44h]
        lea ecx, [eax*8]
        sub ecx, eax
        shr edx, 1
        shl ecx, 2
        and edx, 1fh
        push ecx
        mov dword ptr [ebx + 0c4h], edx
        ; Exact mapped bytes E8 BC A2 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0c8h]
        mov esi, dword ptr [esp + 24h]
        mov edi, eax
        mov dword ptr [ebx + 0c0h], eax
        lea ecx, [edx*8]
        sub ecx, edx
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [ebx + 0c4h]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 7F A2 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa2
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c4h]
        mov esi, dword ptr [esp + 24h]
        mov edi, eax
        mov dword ptr [ebx + 0b8h], eax
        lea ecx, [ecx + ecx*4]
        add esp, 8
        shl ecx, 1
        mov edx, ecx
        push 1
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        push ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes E8 CB F1 FF FF: call 0x10041720
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ebx
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
