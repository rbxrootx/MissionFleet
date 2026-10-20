// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512D8D .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_00512d8d_00512D8D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 16: je 0x512db8
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x512db8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x512f0c
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1B: je 0x512dea
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 94 00 00 00: call dword ptr [edx + 0x94]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x512dea
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 22 01 00 00: jmp 0x512f0c
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 EC 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 72: je 0x512e6a
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 67: jne 0x512e6a
        __asm _emit 0x75
        __asm _emit 0x67
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 17: jne 0x512e20
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x512e20
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x512f0c
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 40 FE FF: call 0x4f6e70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 42 FE FF: call 0x4f70ae
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E8 B1 7C 00 00: call 0x51aae8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x512e47
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 2D 7D 00 00: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x512f0c
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 D8 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x512e6a
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 0C: jne 0x512e6a
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 10 64 07 00: call 0x589275
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x512f0c
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x512f01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x512f01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3D: je 0x512ed9
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 14h], eax
        push 341h
        push 673dc0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 9F 73 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x73
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 FB FB FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 09: je 0x512ed7
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 02: jmp 0x512ed9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x512e96
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 10: jne 0x512eef
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x512f0c
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov esp, ebp
        pop ebp
        ret
    }
}
