// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FD960 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_100fd960_100FD960() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x100fda01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 5F: jne 0x100fd9da
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [edi + 8]
        cmp eax, 21h
        ; Exact mapped bytes 74 29: je 0x100fd9ac
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 2dh
        ; Exact mapped bytes 75 52: jne 0x100fd9da
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes A1 F8 58 1C 10: mov eax, dword ptr [0x101c58f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 64h
        test eax, eax
        ; Exact mapped bytes A3 F8 58 1C 10: mov dword ptr [0x101c58f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 7E 07: jle 0x100fd9a0
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes A3 F8 58 1C 10: mov dword ptr [0x101c58f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x100fd9da
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes EB 28: jmp 0x100fd9d4
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes A1 F8 58 1C 10: mov eax, dword ptr [0x101c58f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, 64h
        cmp eax, 0ffffd8f0h
        ; Exact mapped bytes A3 F8 58 1C 10: mov dword ptr [0x101c58f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 7D 0A: jge 0x100fd9ca
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, 0ffffd8f0h
        ; Exact mapped bytes A3 F8 58 1C 10: mov dword ptr [0x101c58f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100fd9da
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100fda01
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100fd9fa
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x100fda01
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100fd9e4
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
