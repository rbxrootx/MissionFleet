// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58483870 .. +0x3D3 bytes.
extern "C" __declspec(naked) void FUN_58483870_58483870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 B1 03 00 00: je 0x58483c43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5848392a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x584838be
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 8B 03 00 00: jmp 0x58483c49
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 77 10 00 00: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x584838dd
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 6E 03 00 00: jmp 0x58483c49
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x58483909
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 40 10 00 00: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x58483909
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5848392a
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x58483928
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x58483928
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 21 03 00 00: jmp 0x58483c49
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x584838ce
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 74 0E: je 0x5848394a
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 0ch], 202h
        ; Exact mapped bytes 74 29: je 0x5848396e
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes E9 F9 02 00 00: jmp 0x58483c43
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 1bh
        ; Exact mapped bytes 74 02: je 0x5848395b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0E: jmp 0x58483969
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 D5 02 00 00: jmp 0x58483c43
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 10 00 00: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 83 1F 00 00: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x58483a50
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 25 24 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0F 24 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F9 23 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA 1B 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1b
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 30h], edx
        push -64h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 8B 1B 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1b
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 34h], eax
        push -64h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6C 1B 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1b
        __asm _emit 0x33
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x58483c49
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x58483c43
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 0F 00 00: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A1 1E 00 00: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x58483b55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 12ch]
        cmp eax, 1
        ; Exact mapped bytes 74 13: je 0x58483aa9
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 12ch]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x58483b49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 21 23 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0B 23 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F5 22 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 4ch], eax
        push -64h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A6 1A 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 87 1A 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 54h], edx
        push -64h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 68 1A 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x58483c49
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x58483c43
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 0E 00 00: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9C 1D 00 00: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x58483c43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 12ch]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x58483c3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 2B 22 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 64h], eax
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 15 22 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 FF 21 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 6ch], eax
        push -64h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B0 19 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 70h], ecx
        push -64h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 91 19 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 74h], edx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 72 19 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x58483c49
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}
