// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5D20 .. +0x2D5 bytes.
extern "C" __declspec(naked) void FUN_587c5d20_587C5D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 F9 CC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf9
        __asm _emit 0xcc
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 07: je 0x587c5d47
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9E 02 00 00: jmp 0x587c5fe5
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 EC CB FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xec
        __asm _emit 0xcb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        cdq
        idiv dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        cdq
        idiv dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 8C 52 02 00 00: jl 0x587c5fd6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C 48 02 00 00: jl 0x587c5fd6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 0fch]
        ; Exact mapped bytes 0F 8D 36 02 00 00: jge 0x587c5fd6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 100h]
        ; Exact mapped bytes 0F 8D 24 02 00 00: jge 0x587c5fd6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10ch], 0
        ; Exact mapped bytes 0F 8E 80 00 00 00: jle 0x587c5e42
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ecx + 0fch]
        add edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10ch], edx
        ; Exact mapped bytes 7E 65: jle 0x587c5e42
        __asm _emit 0x7e
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ecx + 0fch]
        add edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ecx + edx*4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 44: jne 0x587c5e42
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ecx + 0fch]
        add edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 108h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587c5e40
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 FF CB FF: call 0x58485e20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xcb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4A: jmp 0x587c5e8c
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 13 D1 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x13
        __asm _emit 0xd1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x587c5e8c
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 13 D1 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A 95 CD FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x587c5e8c
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 13 D1 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C EC D6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 FF CB FF: call 0x58485e20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xcb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC EA CB FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xea
        __asm _emit 0xcb
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 78 10: js 0x587c5ea9
        __asm _emit 0x78
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF EA CB FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xcb
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c5eb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 F8 CC FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 78 10: js 0x587c5ed3
        __asm _emit 0x78
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 F8 CC FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf8
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c5eda
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 B4 D4 FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 7D 10: jge 0x587c5f06
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 B4 D4 FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0C: jmp 0x587c5f12
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 42 CE FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x42
        __asm _emit 0xce
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + 100h]
        ; Exact mapped bytes 7D 10: jge 0x587c5f3e
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 42 CE FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x42
        __asm _emit 0xce
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0C: jmp 0x587c5f4a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x587c5f5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 5E: jge 0x587c5fc1
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x587c5f74
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 43: jge 0x587c5fbf
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [edx + 0fch]
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [edx + eax*4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 20: jne 0x587c5fbd
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ecx + 0fch]
        add edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB AC: jmp 0x587c5f6b
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes EB 91: jmp 0x587c5f52
        __asm _emit 0xeb
        __asm _emit 0x91
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 FE CB FF: call 0x58485e20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xcb
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 94 CD FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x94
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 3D CF FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 61 B0 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
