// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571380 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_58571380_58571380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 F8 B4 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb4
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 10000h
        ; Exact mapped bytes 77 1E: ja 0x585713cb
        __asm _emit 0x77
        __asm _emit 0x1e
        cmp dword ptr [ebp - 4], 10000h
        ; Exact mapped bytes 74 53: je 0x58571409
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5857146b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 13: je 0x585713d9
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x58571496
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1000000h
        ; Exact mapped bytes 74 66: je 0x5857143a
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58571496
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 90 75 94 58 00 00 00 00: mov dword ptr [0x58947590], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes 0F B7 0D 90 75 94 58: movzx ecx, word ptr [0x58947590]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 45 04 00: call 0x585b5920
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 34 D2 8F 58 02 00 00 00: mov dword ptr [0x588fd234], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x58571496
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 90 75 94 58 01 00 00 00: mov dword ptr [0x58947590], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 0F B7 0D 90 75 94 58: movzx ecx, word ptr [0x58947590]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 44 04 00: call 0x585b5920
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 34 D2 8F 58 02 00 00 00: mov dword ptr [0x588fd234], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x58571496
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes C7 05 90 75 94 58 02 00 00 00: mov dword ptr [0x58947590], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 0F B7 0D 90 75 94 58: movzx ecx, word ptr [0x58947590]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 44 04 00: call 0x585b5920
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 34 D2 8F 58 03 00 00 00: mov dword ptr [0x588fd234], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x58571496
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes C7 05 90 75 94 58 03 00 00 00: mov dword ptr [0x58947590], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes 0F B7 15 90 75 94 58: movzx edx, word ptr [0x58947590]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 44 04 00: call 0x585b5920
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 34 D2 8F 58 02 00 00 00: mov dword ptr [0x588fd234], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
