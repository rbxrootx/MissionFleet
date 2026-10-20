// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006B530 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_1006b530_1006B530() {
    __asm {
        sub esp, 80h
        push esi
        mov esi, dword ptr [esp + 88h]
        push edi
        mov edi, ecx
        mov eax, dword ptr [esi + 0e74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x1006b692
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 90h]
        cmp eax, 5
        ; Exact mapped bytes 0F 87 CD 00 00 00: ja 0x1006b62c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A0 B6 06 10: jmp dword ptr [eax*4 + 0x1006b6a0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0f10h]
        lea edx, [esi + 37ch]
        mov ecx, dword ptr [eax + 6ch]
        lea eax, [esp + 8]
        push ecx
        push edx
        push 101ab710h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x1006b62c
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f10h]
        lea eax, [esi + 37ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push eax
        push 101ab6ech
        ; Exact mapped bytes EB 62: jmp 0x1006b609
        __asm _emit 0xeb
        __asm _emit 0x62
        mov edx, dword ptr [esi + 0f10h]
        lea ecx, [esi + 37ch]
        mov eax, dword ptr [edx + 6ch]
        lea edx, [esp + 8]
        push eax
        push ecx
        push 101ab6d0h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 5F: jmp 0x1006b62c
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [esi + 0f10h]
        lea edx, [esi + 37ch]
        mov ecx, dword ptr [eax + 6ch]
        lea eax, [esp + 8]
        push ecx
        push edx
        push 101ab6b0h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 39: jmp 0x1006b62c
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 0f10h]
        lea eax, [esi + 37ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push eax
        push 101ab694h
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 13: jmp 0x1006b62c
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edx, [esp + 8]
        push 101ab670h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        mov eax, dword ptr [esi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1006b648
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi + 20b9ch]
        lea eax, [esp + 8]
        push 0ffff00h
        push eax
        ; Exact mapped bytes EB 10: jmp 0x1006b658
        __asm _emit 0xeb
        __asm _emit 0x10
        lea ecx, [esp + 8]
        push 0ffffh
        push ecx
        mov ecx, dword ptr [edi + 20ba0h]
        ; Exact mapped bytes E8 33 DC 09 00: call 0x10109290
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 1dh
        ; Exact mapped bytes 7E 1F: jle 0x1006b68a
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x1006b68a
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [eax + 74h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        add esp, 80h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        add esp, 80h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
