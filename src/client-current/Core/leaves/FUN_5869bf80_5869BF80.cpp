// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869BF80 .. +0x324 bytes.
extern "C" __declspec(naked) void FUN_5869bf80_5869BF80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
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
        ; Exact mapped bytes 0F 84 06 03 00 00: je 0x5869c2a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 74 1B: je 0x5869bfcf
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 0ch], 200h
        ; Exact mapped bytes 74 59: je 0x5869c016
        __asm _emit 0x74
        __asm _emit 0x59
        cmp dword ptr [ebp - 0ch], 201h
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x5869c188
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x5869c219
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1bh
        ; Exact mapped bytes 74 06: je 0x5869bfe4
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes EB 2C: jmp 0x5869c00c
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes EB 2A: jmp 0x5869c00c
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 28: jmp 0x5869c00c
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2d0h], 1
        ; Exact mapped bytes 75 07: jne 0x5869bff7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B7 02 00 00: jmp 0x5869c2ae
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        ; Exact mapped bytes E9 A2 02 00 00: jmp 0x5869c2ae
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x5869c219
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x5869c219
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 89 DE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x89
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB 98 DE FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x98
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x5869c0ac
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 2c0h]
        ; Exact mapped bytes E8 30 98 DF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x98
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 20: jne 0x5869c087
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5A 9E DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 3A 9E DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x5869c17e
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 89 DE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x89
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 45 98 DE FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x98
        __asm _emit 0xde
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x5869c13f
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2c0h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E2 9D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 2c0h]
        ; Exact mapped bytes E8 7A 97 DF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x97
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 20: jne 0x5869c13d
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2c0h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A4 9D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3F: jmp 0x5869c17e
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 32 9E DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2c0h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 13 9E DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x5869c219
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x5869c219
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2c0h]
        ; Exact mapped bytes E8 F1 96 DF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5869c1df
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 0d4h]
        xor ecx, 55h
        cmp ecx, 0ah
        ; Exact mapped bytes 7C 1E: jl 0x5869c1df
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0cch
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 14 4B 05 00: call 0x586f0cf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3A: jmp 0x5869c219
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2c0h]
        ; Exact mapped bytes E8 9A 96 DF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x96
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x5869c219
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0cch
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 28 83 06 00: call 0x58704540
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5869c2a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0E: ja 0x5869c242
        __asm _emit 0x77
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes EB 6C: jmp 0x5869c2ae
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes E8 F3 86 DE FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x5869c25e
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 52: jmp 0x5869c2ae
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes EB 2C: jmp 0x5869c28a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes E8 BF 86 DE FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x5869c28a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1E: jmp 0x5869c2a8
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 16: je 0x5869c2a6
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0B: ja 0x5869c2a6
        __asm _emit 0x77
        __asm _emit 0x0b
        mov dword ptr [ebp - 8], 0
        xor eax, eax
    }
}
