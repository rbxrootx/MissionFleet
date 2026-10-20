// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7464 .. +0x242 bytes.
extern "C" __declspec(naked) void FUN_004f7464_004F7464() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4f7484
        __asm _emit 0x75
        __asm _emit 0x11
        push 5dh
        push 672eech
        ; Exact mapped bytes E8 C1 18 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7484
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4f746d
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4f74a1
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 672eech
        ; Exact mapped bytes E8 A4 18 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f74a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4f748a
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 25h
        ; Exact mapped bytes 74 11: je 0x4f74c3
        __asm _emit 0x74
        __asm _emit 0x11
        push 60h
        push 672eech
        ; Exact mapped bytes E8 82 18 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f74c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f74a7
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 6ch
        ; Exact mapped bytes 75 12: jne 0x4f74fd
        __asm _emit 0x75
        __asm _emit 0x12
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 1B: jmp 0x4f7518
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 73h
        ; Exact mapped bytes 75 10: jne 0x4f7518
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 14h], 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 64h
        ; Exact mapped bytes 74 1C: je 0x4f753f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 75h
        ; Exact mapped bytes 74 11: je 0x4f753f
        __asm _emit 0x74
        __asm _emit 0x11
        push 70h
        push 672eech
        ; Exact mapped bytes E8 06 18 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f753f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4f7518
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4f7561
        __asm _emit 0x74
        __asm _emit 0x11
        push 71h
        push 672eech
        ; Exact mapped bytes E8 E4 17 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7561
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f7545
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 20h
        ; Exact mapped bytes 74 0B: je 0x4f757d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 9
        ; Exact mapped bytes 75 0B: jne 0x4f7588
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB DF: jmp 0x4f7567
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 4], dl
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 64h
        ; Exact mapped bytes 75 1D: jne 0x4f75b8
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0ah
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 06 2E F7 FF: call 0x46a3b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2e
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 2D: jmp 0x4f75e5
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 07: jne 0x4f75ca
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x4f769d
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        lea ecx, [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 37 31 F7 FF: call 0x46a710
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 10: jne 0x4f75fb
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 0F BE 4D FC: movsx ecx, byte ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 30h
        ; Exact mapped bytes 74 07: je 0x4f75fb
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x4f769d
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 20h
        ; Exact mapped bytes 74 0B: je 0x4f7611
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 9
        ; Exact mapped bytes 75 0B: jne 0x4f761c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB DF: jmp 0x4f75fb
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x4f762a
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 73: jmp 0x4f769d
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x4f7655
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 0F BF 45 F0: movsx eax, word ptr [ebp - 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf0
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 04: je 0x4f763d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 60: jmp 0x4f769d
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx - 4]
        ; Exact mapped bytes 66 8B 4D F0: mov cx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 43: jmp 0x4f7698
        __asm _emit 0xeb
        __asm _emit 0x43
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4f765c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4f7655
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 14: je 0x4f767e
        __asm _emit 0x74
        __asm _emit 0x14
        push 96h
        push 672eech
        ; Exact mapped bytes E8 C7 16 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f767e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4f7662
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 10h]
        add eax, 4
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
