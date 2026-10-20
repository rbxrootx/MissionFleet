// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861B700 .. +0x27B bytes.
extern "C" __declspec(naked) void FUN_5861b700_5861B700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0ee49h
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x5861b862
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes 74 0C: je 0x5861b730
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x5861b85d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 27: jne 0x5861b75d
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        or ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], cl
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 18 F6 FF: call 0x5857cfd0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5861b7e5
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 66: jne 0x5861b7c9
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        or ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], cl
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 75 2C: jne 0x5861b7b1
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0d0h]
        cmp edx, 0fh
        ; Exact mapped bytes 74 1D: je 0x5861b7b1
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80013115h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 11 21 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x11
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 16: jmp 0x5861b7c7
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        or ecx, 8
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], cl
        ; Exact mapped bytes EB 1C: jmp 0x5861b7e5
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 16: jne 0x5861b7e5
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        or ecx, 8
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0d0h], cl
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 69: jne 0x5861b85d
        __asm _emit 0x75
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0d20h], 0
        ; Exact mapped bytes 74 5D: je 0x5861b85d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 0ch], ecx
        push 588ae5ach
        ; Exact mapped bytes E8 DA 67 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 10101h
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D BC E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d20h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 B7 EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb7
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 B8 EB FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 23 00 00: call 0x5861dba0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x5861b973
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0ee4ah
        ; Exact mapped bytes 75 1E: jne 0x5861b889
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes 75 0B: jne 0x5861b884
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D A5 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa5
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x5861b973
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 05: jne 0x5861b894
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x5861b973
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 75 20: jne 0x5861b8bd
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d14h]
        ; Exact mapped bytes 75 0D: jne 0x5861b8b8
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d18h], 0
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x5861b973
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f231h
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x5861b973
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0d8h]
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5861b973
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x5861b973
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        ; Exact mapped bytes E8 96 9F E7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9f
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 71: jne 0x5861b973
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0d20h], 0
        ; Exact mapped bytes 74 34: je 0x5861b942
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 18h], ecx
        push 588ae5e0h
        ; Exact mapped bytes E8 CC 66 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x66
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 10101h
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5F BB E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0d0h]
        or ecx, 4
        ; Exact mapped bytes 74 16: je 0x5861b967
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0d0h]
        xor eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0d0h], al
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 16 F6 FF: call 0x5857cfd0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
