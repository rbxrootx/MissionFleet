// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D1730 .. +0x79A bytes.
extern "C" __declspec(naked) void FUN_585d1730_585D1730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 27ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 59 F0 FF: call 0x584d70b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x59
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 79 17 00: call 0x58749110
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x585d1767
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 57 07 00 00: jmp 0x585d1ebe
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 20f34h], 0
        ; Exact mapped bytes 0F 85 44 07 00 00: jne 0x585d1ebe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 52 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 3F EC FF: call 0x584956f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3f
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 2A 07 00 00: jne 0x585d1ebe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 1067ch], 0
        ; Exact mapped bytes 0F 85 17 07 00 00: jne 0x585d1ebe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 20ff8h], 2
        ; Exact mapped bytes 0F 85 56 02 00 00: jne 0x585d1a10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 20e74h]
        ; Exact mapped bytes E8 45 10 00 00: call 0x585d2810
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 E8 FD FF FF: mov word ptr [ebp - 0x218], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 20ah], 0
        movzx edx, word ptr [ebp - 218h]
        mov dword ptr [ebp - 220h], edx
        cmp dword ptr [ebp - 220h], 10h
        ; Exact mapped bytes 74 14: je 0x585d1803
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 220h], 20h
        ; Exact mapped bytes 74 14: je 0x585d180c
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 220h], 30h
        ; Exact mapped bytes 74 14: je 0x585d1815
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 19: jmp 0x585d181c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov byte ptr [ebp - 20ah], 11h
        ; Exact mapped bytes EB 10: jmp 0x585d181c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov byte ptr [ebp - 20ah], 12h
        ; Exact mapped bytes EB 07: jmp 0x585d181c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 20ah], 13h
        movzx eax, byte ptr [ebp - 20ah]
        test eax, eax
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x585d1a0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 214h], 0ffffffffh
        mov dword ptr [ebp - 228h], 0
        cmp dword ptr [ebp - 214h], -1
        ; Exact mapped bytes 74 0D: je 0x585d1855
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 214h], -2
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x585d18ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 278h], edx
        lea eax, [ebp - 202h]
        push eax
        movzx ecx, word ptr [ebp - 218h]
        push ecx
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 20ffch]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 52 F9 F7 FF: call 0x585511e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        cmp dword ptr [ebp - 214h], -1
        ; Exact mapped bytes 75 29: jne 0x585d18c6
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 20ffch], 0
        cmp dword ptr [ebp - 228h], 1
        ; Exact mapped bytes 75 04: jne 0x585d18ba
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 37: jmp 0x585d18ef
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes EB 0A: jmp 0x585d18c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 1
        ; Exact mapped bytes EB 24: jmp 0x585d18ea
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp - 214h], -2
        ; Exact mapped bytes 75 1B: jne 0x585d18ea
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 20ffch]
        add eax, 1
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 20ffch], eax
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x585d183f
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 214h], 1
        ; Exact mapped bytes 0F 8E F4 00 00 00: jle 0x585d19f0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 95 F6 FD FF FF: movzx dx, byte ptr [ebp - 0x20a]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        mov eax, 0ffc0h
        ; Exact mapped bytes 66 23 85 FC FD FF FF: and ax, word ptr [ebp - 0x204]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 85 FC FD FF FF: mov word ptr [ebp - 0x204], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 8D EC FD FF FF: and cx, word ptr [ebp - 0x214]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 E1 06: shl cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 95 FC FD FF FF: mov dx, word ptr [ebp - 0x204]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 95 FC FD FF FF: mov word ptr [ebp - 0x204], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 60 06 96 58: mov eax, dword ptr [0x58960660]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 1
        ; Exact mapped bytes A3 60 06 96 58: mov dword ptr [0x58960660], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D F4 57 90 58 00: cmp dword ptr [0x589057f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x585d1976
        __asm _emit 0x74
        __asm _emit 0x1d
        push 5fh
        push 5ch
        push 12h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 03 1A 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 F4 57 90 58 00 00 00 00: mov dword ptr [0x589057f4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x585d1999
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes E8 F1 F2 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 12: jne 0x585d1999
        __asm _emit 0x75
        __asm _emit 0x12
        push 61h
        push 60h
        push 13h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 02 1A 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 57 F0 FF: call 0x584d70b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 E9 FE FF: call 0x585c02f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 66 8B 95 FC FD FF FF: mov dx, word ptr [ebp - 0x204]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov eax, 3ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        add ecx, 2
        push ecx
        lea edx, [ebp - 204h]
        push edx
        push 0
        push 0
        push 80020500h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE AF 25 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xaf
        __asm _emit 0x25
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 DB 0A 00: call 0x5867f5b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 20ffch]
        add ecx, 1
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 20ffch], ecx
        ; Exact mapped bytes E9 1C 02 00 00: jmp 0x585d1c2c
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 20ff8h], 0
        ; Exact mapped bytes 74 65: je 0x585d1a84
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 244h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 20e74h]
        ; Exact mapped bytes E8 CE 0D 00 00: call 0x585d2810
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, ax
        mov dword ptr [ebp - 27ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 4F EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 18 00 00: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 240h], eax
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 14 F2 F7 FF: call 0x58550c90
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x585d1c2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 20ffch], 0
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 20e74h]
        ; Exact mapped bytes E8 6B 0D 00 00: call 0x585d2810
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 E4 FD FF FF: mov word ptr [ebp - 0x21c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 209h], 0
        movzx eax, word ptr [ebp - 21ch]
        mov dword ptr [ebp - 224h], eax
        cmp dword ptr [ebp - 224h], 10h
        ; Exact mapped bytes 74 14: je 0x585d1add
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 224h], 20h
        ; Exact mapped bytes 74 14: je 0x585d1ae6
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 224h], 30h
        ; Exact mapped bytes 74 14: je 0x585d1aef
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 19: jmp 0x585d1af6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov byte ptr [ebp - 209h], 11h
        ; Exact mapped bytes EB 10: jmp 0x585d1af6
        __asm _emit 0xeb
        __asm _emit 0x10
        mov byte ptr [ebp - 209h], 12h
        ; Exact mapped bytes EB 07: jmp 0x585d1af6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 209h], 13h
        movzx ecx, byte ptr [ebp - 209h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x585d1c2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 248h], eax
        lea ecx, [ebp - 102h]
        push ecx
        movzx edx, word ptr [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 EF F4 F7 FF: call 0x58551020
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        cmp dword ptr [ebp - 22ch], 1
        ; Exact mapped bytes 0F 8E E8 00 00 00: jle 0x585d1c2c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 85 F7 FD FF FF: movzx ax, byte ptr [ebp - 0x209]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        mov ecx, 0ffc0h
        ; Exact mapped bytes 66 23 8D FC FE FF FF: and cx, word ptr [ebp - 0x104]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 8D FC FE FF FF: mov word ptr [ebp - 0x104], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 95 D4 FD FF FF: and dx, word ptr [ebp - 0x22c]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 E2 06: shl dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 85 FC FE FF FF: mov ax, word ptr [ebp - 0x104]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 85 FC FE FF FF: mov word ptr [ebp - 0x104], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 55 F0 FF: call 0x584d70b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x55
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 E7 FE FF: call 0x585c02f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 66 8B 8D FC FE FF FF: mov cx, word ptr [ebp - 0x104]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        add eax, 2
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        push 0
        push 0
        push 80020500h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC AD 25 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D F4 57 90 58 00: cmp dword ptr [0x589057f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x585d1bfb
        __asm _emit 0x74
        __asm _emit 0x1d
        push 5fh
        push 5ch
        push 12h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 00 1A 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 F4 57 90 58 00 00 00 00: mov dword ptr [0x589057f4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x585d1c1e
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes E8 6C F0 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 12: jne 0x585d1c1e
        __asm _emit 0x75
        __asm _emit 0x12
        push 61h
        push 60h
        push 13h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 00 1A 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 D9 0A 00: call 0x5867f5b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 210h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d1c47
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 210h]
        add edx, 1
        mov dword ptr [ebp - 210h], edx
        cmp dword ptr [ebp - 210h], 20h
        ; Exact mapped bytes 0F 84 6A 02 00 00: je 0x585d1ebe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 24ch], ecx
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 F8 15 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 39 02 00 00: je 0x585d1eb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 250h], ecx
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 CC 15 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C5 E4 ED FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe4
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 06 02 00 00: jne 0x585d1eb9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + eax*4 + 20e78h], 0
        ; Exact mapped bytes 0F 85 EC 01 00 00: jne 0x585d1eb9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 7F 15 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 230h], eax
        mov edx, dword ptr [ebp - 230h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 230h]
        mov edx, dword ptr [eax + 44h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp eax, 64h
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x585d1e0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 258h], ecx
        mov edx, dword ptr [ebp - 210h]
        push edx
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 39 15 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 2E 00 00: call 0x585d4b50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x585d1e09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 53h
        push 4eh
        push 0eh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 00 1A 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x585d1ded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 2D EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov eax, dword ptr [ebp - 234h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 234h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x585d1ded
        __asm _emit 0x75
        __asm _emit 0x64
        push 7
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 2C EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 25ch], ecx
        mov edx, dword ptr [ebp - 25ch]
        push edx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 06 A0 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 2C EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov eax, dword ptr [ebp - 238h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 264h], edx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 210h]
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + eax*4 + 20e78h], 1
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x585d1ebe
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x585d1eb9
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 3E 14 00 00: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 47 2D 00 00: call 0x585d4b80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 7C: je 0x585d1eb9
        __asm _emit 0x74
        __asm _emit 0x7c
        push 8
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 2C EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 26ch], edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 52 9F 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9f
        __asm _emit 0x1e
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 2C EB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 23ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 274h], eax
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 210h]
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + ecx*4 + 20e78h], 1
        ; Exact mapped bytes EB 05: jmp 0x585d1ebe
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A FD FF FF: jmp 0x585d1c38
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 88 F1 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf1
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
    }
}
