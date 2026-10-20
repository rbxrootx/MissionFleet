// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8D00 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_585d8d00_585D8D00() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 5
        cmp dword ptr [ecx + 58947974h], 0
        ; Exact mapped bytes 0F 84 0A 02 00 00: je 0x585d8f3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 DC EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 36 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x36
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 BC EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 DD 01 00 00: jne 0x585d8f3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 8], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x585d8ee5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10730h], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x585d8ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D DC EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10730h], eax
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x585d8ee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585d8da4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 35 01 00 00: jge 0x585d8ee3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA A4 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x585d8ede
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10730h]
        ; Exact mapped bytes E8 24 BC EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE DB EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdb
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 BC EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 E7 B0 F0 FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 32 A4 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB AC F8 FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 15 B2 F0 FF: call 0x584e4060
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb2
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B6 84 EB FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        cmp eax, 3
        ; Exact mapped bytes 7E 5C: jle 0x585d8ebe
        __asm _emit 0x7e
        __asm _emit 0x5c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 28: jle 0x585d8e90
        __asm _emit 0x7e
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F0 A3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 33 74 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2C: jmp 0x585d8ebc
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 26: jge 0x585d8ebc
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C2 A3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 05 74 EC FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x585d8ede
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9A A3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 84 EB FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x585d8d9b
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 56: jmp 0x585d8f3b
        __asm _emit 0xeb
        __asm _emit 0x56
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585d8ef7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 3E: jge 0x585d8f3b
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5B A3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585d8f39
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3F A3 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 83 EB FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x585d8eee
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
