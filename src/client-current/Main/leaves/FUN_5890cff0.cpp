// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890CFF0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_5890cff0() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x5890d0ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 4A: je 0x5890d057
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ecx + 4]
        mov edi, dword ptr [esi + 114h]
        mov dword ptr [esp + 0ch], eax
        imul eax, eax, 3e8h
        mov dword ptr [esp + 8], edx
        cdq
        idiv edi
        push ebx
        mov ebx, eax
        mov eax, dword ptr [ecx + 4]
        imul eax, eax, 3e8h
        cdq
        idiv edi
        mov dword ptr [ecx + 8], ebx
        pop ebx
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 50h]
        add dword ptr [eax + 4], edx
        add dword ptr [eax + 8], ecx
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5890d096
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5890d086
        __asm _emit 0x74
        __asm _emit 0x21
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0E: je 0x5890d090
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5890d070
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x5890d0ad
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
