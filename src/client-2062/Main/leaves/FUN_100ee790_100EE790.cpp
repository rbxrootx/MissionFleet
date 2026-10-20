// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE790 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_100ee790_100EE790() {
    __asm {
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [eax + 21714h]
        mov eax, dword ptr [esp + 0ch]
        test ecx, ecx
        mov edx, 0ffffffh
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x100ee83c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [ecx + 4]
        test edi, edi
        ; Exact mapped bytes 74 7F: je 0x100ee83c
        __asm _emit 0x74
        __asm _emit 0x7f
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x100ee7cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, 0ff9b00h
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x100ee85c
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ffh
        mov ecx, dword ptr [esi + 0f1ch]
        mov dword ptr [ecx + 60h], 0ffh
        mov ecx, dword ptr [esi + 0f20h]
        mov dword ptr [ecx + 60h], 0ffh
        mov ecx, dword ptr [esi + 0f10h]
        mov dword ptr [esi + 0e9ch], eax
        neg eax
        mov dword ptr [ecx + 60h], edx
        mov ecx, dword ptr [esi + 0f14h]
        sbb eax, eax
        mov dword ptr [ecx + 60h], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 3
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 05: jne 0x100ee819
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 0cfh
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 59: jle 0x100ee880
        __asm _emit 0x7e
        __asm _emit 0x59
        test eax, eax
        ; Exact mapped bytes 7C 55: jl 0x100ee880
        __asm _emit 0x7c
        __asm _emit 0x55
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 4B: je 0x100ee880
        __asm _emit 0x74
        __asm _emit 0x4b
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 46: jmp 0x100ee882
        __asm _emit 0xeb
        __asm _emit 0x46
        xor ecx, ecx
        mov cl, byte ptr [esi + 330h]
        cmp ecx, 7
        ; Exact mapped bytes 77 13: ja 0x100ee85c
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes FF 24 8D BC E8 0E 10: jmp dword ptr [ecx*4 + 0x100ee8bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x10
        mov edx, 0ffh
        ; Exact mapped bytes EB 05: jmp 0x100ee85c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edx, 86ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 6C FF FF FF: je 0x100ee7d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esi + 0f1ch]
        mov ecx, 0ff00h
        mov dword ptr [edi + 60h], ecx
        mov edi, dword ptr [esi + 0f20h]
        mov dword ptr [edi + 60h], ecx
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x100ee7ea
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esi, dword ptr [esi + 5cdch]
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100ee8b7
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        add esi, 14h
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 0ch], edx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
