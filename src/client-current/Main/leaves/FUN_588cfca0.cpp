// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFCA0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_588cfca0() {
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
        ; Exact mapped bytes 74 78: je 0x588cfd24
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588cfcdd
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588cfcd6
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
        ; Exact mapped bytes 74 0B: je 0x588cfcdd
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588cfcc0
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 20ah
        ; Exact mapped bytes 75 3E: jne 0x588cfd24
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [edx + 4]
        cmp dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 7D 2D: jge 0x588cfd24
        __asm _emit 0x7d
        __asm _emit 0x2d
        cmp dword ptr [ecx + 6ch], eax
        ; Exact mapped bytes 7E 28: jle 0x588cfd24
        __asm _emit 0x7e
        __asm _emit 0x28
        mov eax, dword ptr [edx + 8]
        cmp dword ptr [ecx + 68h], eax
        ; Exact mapped bytes 7D 20: jge 0x588cfd24
        __asm _emit 0x7d
        __asm _emit 0x20
        cmp dword ptr [ecx + 70h], eax
        ; Exact mapped bytes 7E 1B: jle 0x588cfd24
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 14h
        ; Exact mapped bytes 7E 0D: jle 0x588cfd1f
        __asm _emit 0x7e
        __asm _emit 0x0d
        ; Exact mapped bytes E8 F9 6F EE FF: call 0x587b6d10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6f
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 70 EE FF: call 0x587b6d80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
