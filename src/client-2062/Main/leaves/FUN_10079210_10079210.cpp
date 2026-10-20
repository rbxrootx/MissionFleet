// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10079210 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_10079210_10079210() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 74 54: je 0x1007926e
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1007923c
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x10079259
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x10079228
        __asm _emit 0x75
        __asm _emit 0xec
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 29: jne 0x1007926e
        __asm _emit 0x75
        __asm _emit 0x29
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 13: je 0x10079260
        __asm _emit 0x74
        __asm _emit 0x13
        cmp edi, 1bh
        ; Exact mapped bytes 75 1C: jne 0x1007926e
        __asm _emit 0x75
        __asm _emit 0x1c
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
        mov ecx, esi
        ; Exact mapped bytes E8 E9 00 00 00: call 0x10079350
        __asm _emit 0xe8
        __asm _emit 0xe9
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
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
