// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58909FB0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58909fb0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 74 60: je 0x5890a01c
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58909fd6
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esi + 50h]
        mov ecx, dword ptr [esi + 54h]
        add dword ptr [eax + 4], edx
        add dword ptr [eax + 8], ecx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x5890a00a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58909ffe
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edi, dword ptr [esp + 0ch]
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5890a005
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58909fe8
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5890a01c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 54h]
        mov edx, dword ptr [esi + 50h]
        sub dword ptr [eax + 4], edx
        neg ecx
        add dword ptr [eax + 8], ecx
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
