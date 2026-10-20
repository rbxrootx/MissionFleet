// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F7D80 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_584f7d80_584F7D80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        push 0
        push 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 E7 FC FF: call 0x584c65b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x584f7f62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0c0h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 A8 4A 35 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4a
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        add edx, 0c0h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f7e0f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0c0h
        ; Exact mapped bytes 73 1E: jae 0x584f7e36
        __asm _emit 0x73
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx]
        imul eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB D0: jmp 0x584f7e06
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 44h], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes E8 42 4A 35 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4a
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        add edx, 4
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f7e72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 73 1E: jae 0x584f7e96
        __asm _emit 0x73
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 18h]
        movzx eax, byte ptr [edx]
        imul eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB D3: jmp 0x584f7e69
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp + 1ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x584f7f60
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 16: je 0x584f7ec0
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 77 91 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x91
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        imul edx, dword ptr [ebp + 20h]
        push edx
        ; Exact mapped bytes E8 73 91 33 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x91
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        imul ecx, dword ptr [ebp + 20h]
        cmp edx, ecx
        ; Exact mapped bytes 74 0B: je 0x584f7efb
        __asm _emit 0x74
        __asm _emit 0x0b
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 1F: jmp 0x584f7f1a
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp + 20h]
        imul eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 79 49 35 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x49
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584f7f34
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp + 20h]
        imul edx, dword ptr [ecx]
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 7D 1E: jge 0x584f7f60
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 1ch]
        movzx ecx, byte ptr [eax]
        imul ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB CB: jmp 0x584f7f2b
        __asm _emit 0xeb
        __asm _emit 0xcb
        ; Exact mapped bytes EB 30: jmp 0x584f7f92
        __asm _emit 0xeb
        __asm _emit 0x30
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D A4 20 96 58: mov ecx, dword ptr [0x589620a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 97 FF FF: call 0x584f1750
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x584f7f89
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 44 33 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x44
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x584f7fb1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 A4 90 33 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
