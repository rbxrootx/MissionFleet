// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846EE0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_58846ee0() {
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
        ; Exact mapped bytes 74 75: je 0x58846f61
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58846f1d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58846f16
        __asm _emit 0x74
        __asm _emit 0x18
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x58846f1d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58846f00
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 24: je 0x58846f4b
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 201h
        ; Exact mapped bytes 75 33: jne 0x58846f61
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 64h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 00 A6 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa6
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58846f61
        __asm _emit 0x74
        __asm _emit 0x1d
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 75 10: jne 0x58846f61
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
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
