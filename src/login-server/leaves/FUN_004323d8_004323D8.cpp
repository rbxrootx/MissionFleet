// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004323D8 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_004323d8_004323D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        cmp esi, ebx
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x432519
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sub eax, ebx
        ; Exact mapped bytes 74 75: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x75
        dec eax
        dec eax
        ; Exact mapped bytes 74 0A: je 0x432406
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, 7fffh
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x432519
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi]
        ; Exact mapped bytes E8 CB CE FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes 74 5C: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, eax
        ; Exact mapped bytes E8 50 E4 FF FF: call 0x430868
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 74 4F: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, edi
        ; Exact mapped bytes E8 6E F4 FF FF: call 0x431893
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [edi + 50h], ebx
        ; Exact mapped bytes 74 3F: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes E8 28 30 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], ebx
        ; Exact mapped bytes 74 32: je 0x43246d
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [esi + 4]
        cmp ecx, 100h
        ; Exact mapped bytes 75 06: jne 0x43244c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esi + 8], 0dh
        ; Exact mapped bytes 74 08: je 0x432454
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, 202h
        ; Exact mapped bytes 75 19: jne 0x43246d
        __asm _emit 0x75
        __asm _emit 0x19
        push ebx
        push 0e146h
        push 111h
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x43250d
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E9 2F FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 81 3D DC FB 44 00 33 03 00 00: cmp dword ptr [0x44fbdc], 0x333
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 73 1E: jae 0x43249e
        __asm _emit 0x73
        __asm _emit 0x1e
        cmp edi, ebx
        ; Exact mapped bytes 74 1A: je 0x43249e
        __asm _emit 0x74
        __asm _emit 0x1a
        push esi
        ; Exact mapped bytes E8 03 FF FF FF: call 0x43238d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x43249e
        __asm _emit 0x74
        __asm _emit 0x10
        push ebx
        push 0e146h
        push 111h
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes EB C4: jmp 0x432462
        __asm _emit 0xeb
        __asm _emit 0xc4
        cmp dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 75 76: jne 0x432519
        __asm _emit 0x75
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], ebx
        ; Exact mapped bytes 74 6E: je 0x432519
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [esi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 72 64: jb 0x432519
        __asm _emit 0x72
        __asm _emit 0x64
        cmp eax, 108h
        ; Exact mapped bytes 77 5D: ja 0x432519
        __asm _emit 0x77
        __asm _emit 0x5d
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 E8 48 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        cmp dword ptr [ebx + 0bch], 0
        ; Exact mapped bytes 75 43: jne 0x432519
        __asm _emit 0x75
        __asm _emit 0x43
        push 7
        lea edi, [ebp - 20h]
        pop ecx
        mov dword ptr [ebx + 0bch], 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + 20h]
        ; Exact mapped bytes E8 5B BE FF FF: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x432512
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x432512
        __asm _emit 0x74
        __asm _emit 0x0c
        and dword ptr [ebx + 0bch], 0
        push 1
        pop eax
        ; Exact mapped bytes EB 09: jmp 0x43251b
        __asm _emit 0xeb
        __asm _emit 0x09
        and dword ptr [ebx + 0bch], 0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
