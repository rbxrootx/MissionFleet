// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881D130 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_5881d130() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 74 6D: je 0x5881d1a8
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 3ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5881d16d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5881d166
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
        ; Exact mapped bytes 74 0B: je 0x5881d16d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5881d150
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 75 F0: jne 0x5881d166
        __asm _emit 0x75
        __asm _emit 0xf0
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 1C: je 0x5881d19a
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp edi, 1bh
        ; Exact mapped bytes 75 E3: jne 0x5881d166
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, esi
        ; Exact mapped bytes E8 36 EC FF FF: call 0x5881bdc0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 FF EE FF FF: call 0x5881c0a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
