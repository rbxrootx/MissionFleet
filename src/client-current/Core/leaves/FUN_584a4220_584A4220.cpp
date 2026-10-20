// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4220 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_584a4220_584A4220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 34h], 0
        ; Exact mapped bytes 0F 85 E9 00 00 00: jne 0x584a4324
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B1 7A FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 66 27 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x584a431f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 71 7C FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 7D FE FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        imul eax, eax, 3e8h
        sub eax, 2710h
        cdq
        mov ecx, 0d48h
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 2ch], 0
        ; Exact mapped bytes 75 15: jne 0x584a42af
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 75 0F: jne 0x584a42af
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 2ch], 3
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 2ch], 3
        ; Exact mapped bytes 75 2B: jne 0x584a42e8
        __asm _emit 0x75
        __asm _emit 0x2b
        push 3
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 32 3E 00 00: call 0x584a8100
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 10h], 32h
        ; Exact mapped bytes 7F 0F: jg 0x584a42e6
        __asm _emit 0x7f
        __asm _emit 0x0f
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 2ch], 2
        ; Exact mapped bytes EB 37: jmp 0x584a431f
        __asm _emit 0xeb
        __asm _emit 0x37
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 2ch], 2
        ; Exact mapped bytes 75 29: jne 0x584a431f
        __asm _emit 0x75
        __asm _emit 0x29
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 F9 3D 00 00: call 0x584a8100
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 10h], 50h
        ; Exact mapped bytes 7C 0F: jl 0x584a431f
        __asm _emit 0x7c
        __asm _emit 0x0f
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 2ch], 3
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x584a44ac
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 34h], 1
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x584a43f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 30h], 0
        ; Exact mapped bytes 75 05: jne 0x584a4349
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x584a44ac
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A3 79 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 51 26 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a437f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 7D FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x584a43c5
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 53 7B FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x584a43c3
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 7B FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 8D FE FF: call 0x5848d170
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x584a43ba
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 7B FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 7C FE FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 118h
        ; Exact mapped bytes 7D 09: jge 0x584a43c3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 02: jmp 0x584a43c5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AF: jmp 0x584a4374
        __asm _emit 0xeb
        __asm _emit 0xaf
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x584a43e1
        __asm _emit 0x74
        __asm _emit 0x16
        push 2
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 24 3D 00 00: call 0x584a8100
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0F: jmp 0x584a43f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 34h], 2
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x584a44ac
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 34h], 3
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x584a44ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 30h], 0
        ; Exact mapped bytes 75 05: jne 0x584a441a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x584a44ac
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D2 78 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 80 25 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a4450
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 63 7C FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2B: je 0x584a4481
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 82 7A FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x584a447f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 7A FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF 7B FE FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 7E 09: jle 0x584a447f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 02: jmp 0x584a4481
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C4: jmp 0x584a4445
        __asm _emit 0xeb
        __asm _emit 0xc4
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x584a449d
        __asm _emit 0x74
        __asm _emit 0x16
        push 3
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 68 3C 00 00: call 0x584a8100
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0F: jmp 0x584a44ac
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 34h], 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
