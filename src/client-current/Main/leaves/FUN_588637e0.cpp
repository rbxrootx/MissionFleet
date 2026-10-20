// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588637E0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_588637e0() {
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
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x588638c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 90 00 00 00 06: cmp word ptr [esi + 0x90], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x588638c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5886382d
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58863826
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5886382d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58863810
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
        ; Exact mapped bytes 74 43: je 0x5886387a
        __asm _emit 0x74
        __asm _emit 0x43
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x588638c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0b0h]
        add edi, 4
        push edi
        ; Exact mapped bytes E8 E9 DC EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 63: jne 0x588638be
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [esi + 0ach]
        push edi
        ; Exact mapped bytes E8 D9 DC EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x588638c5
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, esi
        ; Exact mapped bytes E8 5E FC FF FF: call 0x588634d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [edx + 20d40h], 0
        ; Exact mapped bytes 75 3C: jne 0x588638c5
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 75 2C: jne 0x588638c5
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 2C 46 A2 58: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 1B B2 03 00: call 0x5889eac0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        sub eax, 0fh
        ; Exact mapped bytes 74 14: je 0x588638be
        __asm _emit 0x74
        __asm _emit 0x14
        sub eax, 1
        ; Exact mapped bytes 75 16: jne 0x588638c5
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, esi
        ; Exact mapped bytes E8 1A FC FF FF: call 0x588634d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 0B FB FF FF: call 0x588633d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
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
