// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BA870 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_588ba870() {
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
        ; Exact mapped bytes 74 56: je 0x588ba8d2
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588ba8ad
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588ba8a6
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
        ; Exact mapped bytes 74 0B: je 0x588ba8ad
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588ba890
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
        sub eax, 100h
        ; Exact mapped bytes 74 0C: je 0x588ba8c3
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, 101h
        ; Exact mapped bytes 74 0B: je 0x588ba8c9
        __asm _emit 0x74
        __asm _emit 0x0b
        sub eax, 3
        ; Exact mapped bytes EB 04: jmp 0x588ba8c7
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 75 09: jne 0x588ba8d2
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
