// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B7920 .. +0x3AB bytes.
extern "C" __declspec(naked) void FUN_004b7920_004B7920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        push 0ch
        ; Exact mapped bytes E8 BC D8 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes C7 05 10 EE 5D 00 00 00 00 00: mov dword ptr [0x5dee10], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 38 1B 5D 00 FF FF FF FF: mov dword ptr [0x5d1b38], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 38 1B 5D 00: mov eax, dword ptr [0x5d1b38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A3 28 1B 5D 00: mov dword ptr [0x5d1b28], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        push 58c8cch
        ; Exact mapped bytes E8 21 98 00 00: call 0x4c1180
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 85 34 01 00 00: jne 0x4b7aa3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes E8 1A D9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 5dee18h
        ; Exact mapped bytes FF 15 B8 22 5E 00: call dword ptr [0x5e22b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 11 01 00 00: je 0x4b7a9e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 10 EE 5D 00 01 00 00 00: mov dword ptr [0x5dee10], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 EE 5D 00: mov ecx, dword ptr [0x5dee18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        imul ecx, ecx, 3ch
        ; Exact mapped bytes 89 0D 94 1A 5D 00: mov dword ptr [0x5d1a94], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 5E EE 5D 00: mov dx, word ptr [0x5dee5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4b79c9
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 6C EE 5D 00: mov eax, dword ptr [0x5dee6c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes 8B 0D 94 1A 5D 00: mov ecx, dword ptr [0x5d1a94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 94 1A 5D 00: mov dword ptr [0x5d1a94], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 B2 EE 5D 00: mov dx, word ptr [0x5deeb2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x4b79fe
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D C0 EE 5D 00 00: cmp dword ptr [0x5deec0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x4b79fe
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes C7 05 98 1A 5D 00 01 00 00 00: mov dword ptr [0x5d1a98], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 EE 5D 00: mov eax, dword ptr [0x5deec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 6C EE 5D 00: sub eax, dword ptr [0x5dee6c]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        imul eax, eax, 3ch
        ; Exact mapped bytes A3 9C 1A 5D 00: mov dword ptr [0x5d1a9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x4b7a12
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 98 1A 5D 00 00 00 00 00: mov dword ptr [0x5d1a98], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 9C 1A 5D 00 00 00 00 00: mov dword ptr [0x5d1a9c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        push 0
        push 3fh
        ; Exact mapped bytes 8B 15 20 1B 5D 00: mov edx, dword ptr [0x5d1b20]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        push -1
        push 5dee1ch
        push 220h
        ; Exact mapped bytes A1 24 F0 5D 00: mov eax, dword ptr [0x5df024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4b7a4f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0C: jne 0x4b7a4f
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 20 1B 5D 00: mov ecx, dword ptr [0x5d1b20]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ecx + 3fh], 0
        ; Exact mapped bytes EB 09: jmp 0x4b7a58
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 20 1B 5D 00: mov edx, dword ptr [0x5d1b20]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [edx], 0
        lea eax, [ebp - 8]
        push eax
        push 0
        push 3fh
        ; Exact mapped bytes 8B 0D 24 1B 5D 00: mov ecx, dword ptr [0x5d1b24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        push -1
        push 5dee70h
        push 220h
        ; Exact mapped bytes 8B 15 24 F0 5D 00: mov edx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4b7a95
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0B: jne 0x4b7a95
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes A1 24 1B 5D 00: mov eax, dword ptr [0x5d1b24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [eax + 3fh], 0
        ; Exact mapped bytes EB 09: jmp 0x4b7a9e
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 24 1B 5D 00: mov ecx, dword ptr [0x5d1b24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ecx], 0
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x4b7cc7
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4b7acd
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 83 3D C4 EE 5D 00 00: cmp dword ptr [0x5deec4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x4b7adc
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D C4 EE 5D 00: mov ecx, dword ptr [0x5deec4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 6A 24 00 00: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4b7adc
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ch
        ; Exact mapped bytes E8 BC D7 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 EB 01 00 00: jmp 0x4b7cc7
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes A1 C4 EE 5D 00: mov eax, dword ptr [0x5deec4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D7 31 FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 10ch
        push 58c8c4h
        push 2
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 CF 18 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 23 27 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 C4 EE 5D 00: mov dword ptr [0x5deec4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C4 EE 5D 00 00: cmp dword ptr [0x5deec4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x4b7b2d
        __asm _emit 0x75
        __asm _emit 0x0f
        push 0ch
        ; Exact mapped bytes E8 6B D7 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x4b7cc7
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes A1 C4 EE 5D 00: mov eax, dword ptr [0x5deec4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 04 23 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 0ch
        ; Exact mapped bytes E8 4A D7 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 3
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 20 1B 5D 00: mov edx, dword ptr [0x5d1b20]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 E5 1C FF FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes A1 20 1B 5D 00: mov eax, dword ptr [0x5d1b20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [eax + 3], 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 3
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 12: jne 0x4b7b8d
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9A 19 FF FF: call 0x4a9530
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        imul eax, eax, 0e10h
        ; Exact mapped bytes A3 94 1A 5D 00: mov dword ptr [0x5d1a94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2bh
        ; Exact mapped bytes 74 16: je 0x4b7bc5
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 16: jl 0x4b7bd0
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7F 0B: jg 0x4b7bd0
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB D4: jmp 0x4b7ba4
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3ah
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x4b7c75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 3F 19 FF FF: call 0x4a9530
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        imul eax, eax, 3ch
        ; Exact mapped bytes 8B 0D 94 1A 5D 00: mov ecx, dword ptr [0x5d1a94]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 89 0D 94 1A 5D 00: mov dword ptr [0x5d1a94], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 7C 16: jl 0x4b7c26
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 39h
        ; Exact mapped bytes 7F 0B: jg 0x4b7c26
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DF: jmp 0x4b7c05
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 75 44: jne 0x4b7c75
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 ED 18 FF FF: call 0x4a9530
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 8B 15 94 1A 5D 00: mov edx, dword ptr [0x5d1a94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, eax
        ; Exact mapped bytes 89 15 94 1A 5D 00: mov dword ptr [0x5d1a94], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 7C 16: jl 0x4b7c75
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 39h
        ; Exact mapped bytes 7F 0B: jg 0x4b7c75
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB DF: jmp 0x4b7c54
        __asm _emit 0xeb
        __asm _emit 0xdf
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4b7c89
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 94 1A 5D 00: mov edx, dword ptr [0x5d1a94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        ; Exact mapped bytes 89 15 94 1A 5D 00: mov dword ptr [0x5d1a94], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 89 0D 98 1A 5D 00: mov dword ptr [0x5d1a98], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 1A 5D 00 00: cmp dword ptr [0x5d1a98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x4b7cbe
        __asm _emit 0x74
        __asm _emit 0x20
        push 3
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes A1 24 1B 5D 00: mov eax, dword ptr [0x5d1b24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 91 1B FF FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 24 1B 5D 00: mov ecx, dword ptr [0x5d1b24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ecx + 3], 0
        ; Exact mapped bytes EB 09: jmp 0x4b7cc7
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 24 1B 5D 00: mov edx, dword ptr [0x5d1b24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [edx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
