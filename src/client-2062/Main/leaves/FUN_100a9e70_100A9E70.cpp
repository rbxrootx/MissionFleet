// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9E70 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_100a9e70_100A9E70() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 74: je 0x100a9eee
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100a9e9c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x100a9eb8
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x100a9e88
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 74 19: je 0x100a9ebf
        __asm _emit 0x74
        __asm _emit 0x19
        sub eax, 2
        ; Exact mapped bytes 75 0D: jne 0x100a9eb8
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp byte ptr [edi + 8], 0dh
        ; Exact mapped bytes 75 07: jne 0x100a9eb8
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 48 00 00 00: call 0x100a9f00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 EA: je 0x100a9eb1
        __asm _emit 0x74
        __asm _emit 0xea
        cmp edi, 1bh
        ; Exact mapped bytes 75 EC: jne 0x100a9eb8
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esi + 484h]
        test eax, eax
        ; Exact mapped bytes 75 E2: jne 0x100a9eb8
        __asm _emit 0x75
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 480h]
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x100a9eb8
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
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
