// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A340 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_5875a340() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x5875a436
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a4h], 0
        ; Exact mapped bytes 74 63: je 0x5875a3bb
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0C: je 0x5875a370
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 64h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 08: jne 0x5875a383
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 6C F4 0E 00: call 0x58849800
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0a4h]
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 07: jne 0x5875a3a6
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 48 24 04: or word ptr [eax + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes EB 72: jmp 0x5875a418
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, 0fffbh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 50h], 4
        ; Exact mapped bytes EB 5D: jmp 0x5875a418
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0C: je 0x5875a3d3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 68h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 08: jne 0x5875a3e6
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 BE 9E 00 00 00 00: cmp word ptr [esi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x5875a40e
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 0b0h]
        mov ecx, dword ptr [eax + 68h]
        dec ecx
        cmp dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 7D 03: jge 0x5875a402
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [eax + 64h], ecx
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes EB 0A: jmp 0x5875a418
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [edx + 50h], 2
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5875a436
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875a438
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875a420
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
