// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D96D0 .. +0x1C8 bytes.
extern "C" __declspec(naked) void FUN_004d96d0_004D96D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4d96e8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x4d9890
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x4d979c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], 2
        ; Exact mapped bytes 74 15: je 0x4d9713
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 34h], 8001h
        ; Exact mapped bytes 74 05: je 0x4d970c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x4d988e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x4d9890
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 91 61 FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 75: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x75
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 95 FF FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 64: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 BF FF FF: call 0x4d5717
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 4F: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes E8 1E 84 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 3E: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 C9 04 00 00: call 0x4d9c30
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x4d977e
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E9 04 00 00: call 0x4d9c60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4d979c
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 1E 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x4d9890
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF 83 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 81 3D 04 6E 68 00 33 03 00 00: cmp dword ptr [0x686e04], 0x333
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 31: jae 0x4d97e1
        __asm _emit 0x73
        __asm _emit 0x31
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x4d97e1
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 96 FE FF FF: call 0x4d9655
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4d97e1
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 1E 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x4d9890
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x4d988e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4d988e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 0F 82 86 00 00 00: jb 0x4d988e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 108h
        ; Exact mapped bytes 77 7A: ja 0x4d988e
        __asm _emit 0x77
        __asm _emit 0x7a
        mov ecx, 686d24h
        ; Exact mapped bytes E8 12 3E 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 74 04: je 0x4d9831
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x4d9890
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 1
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 7
        lea edi, [ebp - 2ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes E8 DB CF FF FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4d9881
        __asm _emit 0x74
        __asm _emit 0x27
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d9881
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov eax, 1
        ; Exact mapped bytes EB 0F: jmp 0x4d9890
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0bch], 0
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
