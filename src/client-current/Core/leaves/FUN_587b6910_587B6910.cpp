// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6910 .. +0x339 bytes.
extern "C" __declspec(naked) void FUN_587b6910_587B6910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdc84h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x587b6a6d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587b6944
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 160h]
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x587b69f9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        cmp dword ptr [ecx + edx + 10h], 0
        ; Exact mapped bytes 74 39: je 0x587b69a5
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 8]
        shl edx, 6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ecx + edx + 10h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 C0 A6 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 6
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [eax + ecx + 10h], 0
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 6
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        cmp dword ptr [eax + ecx + 14h], 0
        ; Exact mapped bytes 74 39: je 0x587b69f4
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 6
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [eax + ecx + 14h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 71 A6 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        shl eax, 6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [edx + eax + 14h], 0
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x587b693b
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 68: je 0x587b6a6d
        __asm _emit 0x74
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3C: je 0x587b6a59
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx - 4], 0
        ; Exact mapped bytes 74 13: je 0x587b6a39
        __asm _emit 0x74
        __asm _emit 0x13
        push 3
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 18: jmp 0x587b6a51
        __asm _emit 0xeb
        __asm _emit 0x18
        push 4
        mov eax, dword ptr [ebp - 18h]
        sub eax, 4
        push eax
        ; Exact mapped bytes E8 3D B1 07 00: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 07: jmp 0x587b6a60
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 190h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x587b6b74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587b6a8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 164h]
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x587b6b43
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 31: je 0x587b6ae7
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 32 2B 0A 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 45: je 0x587b6b3e
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 13: je 0x587b6b24
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x587b6b2b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x587b6a86
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18ch], 0
        ; Exact mapped bytes 74 25: je 0x587b6b74
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 E7 A4 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x587b6c2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587b6b96
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 170h]
        ; Exact mapped bytes 7D 59: jge 0x587b6bfd
        __asm _emit 0x7d
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 45: je 0x587b6bfb
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 13: je 0x587b6be1
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587b6be8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB 90: jmp 0x587b6b8d
        __asm _emit 0xeb
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 25: je 0x587b6c2e
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 2D A4 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 194h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 74 0E: je 0x587b6c45
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
