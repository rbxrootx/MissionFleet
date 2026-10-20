// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58636EB0 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_58636eb0_58636EB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 18ah], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 170h], 0
        ; Exact mapped bytes 0F 84 0C 02 00 00: je 0x586370ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 41 6D ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 1
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 C4 E8 FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58636f14
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 CD 01 00 00: jae 0x586370ed
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E3 5E 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 10h], 1
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 FC EB FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 35ch]
        mov ecx, dword ptr [ebp - 18h]
        shr ecx, 8
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x586370e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18ah]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 178h]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 3A 58 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18ah]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 178h]
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ecx + edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18ah]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 178h]
        mov dword ptr [edx + eax + 4], 1869fh
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18ah]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ecx + edx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18ah]
        imul ecx, eax, 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 178h]
        mov dword ptr [eax + ecx + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 18ah]
        add dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 18ah], dl
        ; Exact mapped bytes E9 1E FE FF FF: jmp 0x58636f0b
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
