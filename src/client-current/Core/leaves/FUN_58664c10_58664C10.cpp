// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58664C10 .. +0xBAC bytes.
extern "C" __declspec(naked) void FUN_58664c10_58664C10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1f0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
        mov byte ptr [eax + 0a0h], 1
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 198h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 49 14 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x14
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 51 1A: movsx edx, word ptr [ecx + 0x1a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x1a
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 6
        ; Exact mapped bytes 0F 87 98 01 00 00: ja 0x58664e0a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 24 85 BC 57 66 58: jmp dword ptr [eax*4 + 0x586657bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0a4h], edx
        push 588af918h
        ; Exact mapped bytes E8 58 D3 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd3
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 ED 13 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x58664e0a
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0ach], edx
        push 588af934h
        ; Exact mapped bytes E8 1E D3 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd3
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B3 13 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x58664e0a
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0b4h], edx
        push 588af950h
        ; Exact mapped bytes E8 E4 D2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 79 13 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x58664e0a
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0bch], edx
        push 588af96ch
        ; Exact mapped bytes E8 AA D2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 3F 13 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x58664e0a
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0c4h], edx
        push 588af990h
        ; Exact mapped bytes E8 70 D2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 05 13 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x58664e0a
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0cch], edx
        push 588af9ach
        ; Exact mapped bytes E8 39 D2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 CE 12 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x58664e0a
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0d4h], edx
        push 588af9cch
        ; Exact mapped bytes E8 02 D2 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 97 12 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0dch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 0e0h], eax
        push 588af9ech
        ; Exact mapped bytes E8 AF D1 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd1
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        push edx
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0e8h], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 09 12 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        push 589604e0h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x58664ec1
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 AD E4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x58664f46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ach
        push ecx
        lea edx, [ebp - 0ech]
        push edx
        ; Exact mapped bytes E8 B7 79 1E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x79
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ech]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 1D E9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 29: je 0x58664f26
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 90h]
        add eax, 33ch
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 7D 11 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x58664f46
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0f4h], edx
        push 588af932h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 5B 11 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 36 11 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 34h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 B2 A8 E3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa8
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 94h], edx
        cmp dword ptr [ebp - 94h], 0ah
        ; Exact mapped bytes 0F 87 A6 02 00 00: ja 0x5866524e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 24 85 D8 57 66 58: jmp dword ptr [eax*4 + 0x586657d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x66
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 104h], edx
        push 588afa10h
        ; Exact mapped bytes E8 1F D0 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd0
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 B4 10 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7F 02 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 10ch], edx
        push 588afa34h
        ; Exact mapped bytes E8 E2 CF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 77 10 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 114h], edx
        push 588afa48h
        ; Exact mapped bytes E8 A5 CF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 3A 10 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 05 02 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 11ch], edx
        push 588afa70h
        ; Exact mapped bytes E8 68 CF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 FD 0F E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 124h], edx
        push 588afa88h
        ; Exact mapped bytes E8 2B CF EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 C0 0F E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 12ch], edx
        push 588afaach
        ; Exact mapped bytes E8 EE CE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 83 0F E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E 01 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 134h], edx
        push 588afac4h
        ; Exact mapped bytes E8 B1 CE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 46 0F E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 13ch], edx
        push 588afadch
        ; Exact mapped bytes E8 74 CE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 09 0F E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 144h], edx
        push 588afafch
        ; Exact mapped bytes E8 37 CE EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 CC 0E E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x58665271
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 14ch], edx
        push 588afb1ch
        ; Exact mapped bytes E8 FA CD EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 8F 0E E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x58665271
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 154h], edx
        push 588afb38h
        ; Exact mapped bytes E8 C0 CD EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 55 0E E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x58665271
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 158h], edx
        push 588af933h
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 30 0E E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 15ch], ecx
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 02: je 0x58665288
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 74: jmp 0x586652fc
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 164h], eax
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 F8 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 71 0C E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 16ch], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 F8 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 3A 0C E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x586654f1
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 06 96 58 00: cmp dword ptr [0x589606b8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x5866543e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 48h]
        sub eax, 1
        push eax
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 F4 E5 FF: call 0x584c4810
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf4
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x58665386
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 174h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 48h]
        sub ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 83 E5 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 CF 0B E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 178h], ecx
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 60 0B E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x58665439
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 180h], eax
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B F7 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 73 0B E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 188h], eax
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 F7 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 3C 0B E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 18ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 9A 01 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 190h], edx
        push 101h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 78 01 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x586654f1
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 1c4h], ecx
        push 5ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 F6 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 BB 0A E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1a0h], ecx
        push 59h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C F6 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 84 0A E2 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 1a4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 E2 00 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1a8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 C0 00 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 75 43: jne 0x5866553d
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 3A: jne 0x5866553d
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 1b0h], ecx
        push 588afb50h
        ; Exact mapped bytes E8 D1 CA EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 66 0B E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 68: jmp 0x586655a5
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp + 8]
        add eax, 3ch
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 60 E5 FF: call 0x584bb570
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x60
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 75 22: jne 0x58665580
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 88h]
        mov byte ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp + 8]
        add edx, 3ch
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 77 F1 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x586655a5
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 1b4h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 FC 0A E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 44: movsx ecx, word ptr [eax + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x44
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 6
        ; Exact mapped bytes 0F 87 AD 01 00 00: ja 0x5866576c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 24 95 04 58 66 58: jmp dword ptr [edx*4 + 0x58665804]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0x66
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1bch], ecx
        push 588afb68h
        ; Exact mapped bytes E8 08 CA EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b8h], eax
        mov edx, dword ptr [ebp - 1b8h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 9D 0A E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x5866576c
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1f0h], ecx
        push 588afb80h
        ; Exact mapped bytes E8 CB C9 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 60 0A E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x5866576c
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1cch], ecx
        push 588afba0h
        ; Exact mapped bytes E8 8E C9 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 23 0A E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x5866576c
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1d4h], ecx
        push 588afbbch
        ; Exact mapped bytes E8 51 C9 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d0h], eax
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 E6 09 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x5866576c
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1dch], ecx
        push 588afbdch
        ; Exact mapped bytes E8 14 C9 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 A9 09 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 72: jmp 0x5866576c
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1e4h], ecx
        push 588afbf8h
        ; Exact mapped bytes E8 DA C8 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 6F 09 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x5866576c
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 1ech], ecx
        push 588afc14h
        ; Exact mapped bytes E8 A0 C8 EB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0xeb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 35 09 E2 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 88h]
        movzx ecx, byte ptr [eax + 0a0h]
        cmp ecx, 1
        ; Exact mapped bytes 75 2E: jne 0x586657ac
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 14: jne 0x586657ac
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9A B8 1C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
