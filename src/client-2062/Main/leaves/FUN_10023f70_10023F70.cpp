// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023F70 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_10023f70_10023F70() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        xor eax, eax
        push edi
        mov al, byte ptr [esi + 330h]
        mov edi, eax
        mov eax, dword ptr [esp + 10h]
        cmp eax, edi
        ; Exact mapped bytes 75 0B: jne 0x10023f94
        __asm _emit 0x75
        __asm _emit 0x0b
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 54h]
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x10024011
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 8]
        cmp edx, ebx
        ; Exact mapped bytes 74 6C: je 0x10024011
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [edx]
        cmp dword ptr [eax], 0ffffh
        ; Exact mapped bytes 75 5B: jne 0x1002400a
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 75 52: jne 0x1002400a
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x10023ffc
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 48 18: mov cx, word ptr [eax + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 66 3B 8E 2C 03 00 00: cmp cx, word ptr [esi + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 63: je 0x10024032
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [eax + 10h]
        cmp ecx, 0ffffh
        ; Exact mapped bytes 74 1B: je 0x10023ff5
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ecx, dword ptr [esi + 0f34h]
        ; Exact mapped bytes 75 28: jne 0x1002400a
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [eax + 14h]
        mov ecx, dword ptr [esi + 0f38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 1B: jne 0x1002400a
        __asm _emit 0x75
        __asm _emit 0x1b
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x1002401c
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes EB 15: jmp 0x1002400a
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [eax + 14h], edi
        ; Exact mapped bytes 74 2D: je 0x10024027
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes EB 0E: jmp 0x1002400a
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp dword ptr [eax + 10h], 0ffffh
        ; Exact mapped bytes 75 05: jne 0x1002400a
        __asm _emit 0x75
        __asm _emit 0x05
        cmp dword ptr [eax + 14h], edi
        ; Exact mapped bytes 74 28: je 0x10024032
        __asm _emit 0x74
        __asm _emit 0x28
        add edx, 4
        cmp edx, ebx
        ; Exact mapped bytes 75 94: jne 0x10023fa5
        __asm _emit 0x75
        __asm _emit 0x94
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edx]
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
