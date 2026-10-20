// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF620 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_100cf620_100CF620() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x100cf6ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x100cf650
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x100cf6b3
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 EC: jne 0x100cf63c
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 75 59: jne 0x100cf6b3
        __asm _emit 0x75
        __asm _emit 0x59
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 0dh]
        cmp eax, 1bh
        ; Exact mapped bytes 77 4E: ja 0x100cf6b3
        __asm _emit 0x77
        __asm _emit 0x4e
        xor edx, edx
        mov dl, byte ptr [eax + 100cf6d4h]
        ; Exact mapped bytes FF 24 95 C4 F6 0C 10: jmp dword ptr [edx*4 + 0x100cf6c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 6ch]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 2F: jne 0x100cf6b3
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [eax + 80h]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x100cf6b3
        __asm _emit 0x74
        __asm _emit 0x25
        mov edi, eax
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        cmp ecx, 2
        ; Exact mapped bytes 7E 15: jle 0x100cf6b3
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, esi
        ; Exact mapped bytes E8 AB 03 00 00: call 0x100cfa50
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
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
