// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58637660 .. +0x379 bytes.
extern "C" __declspec(naked) void FUN_58637660_58637660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 3F 03 00 00: je 0x586379cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 71 57 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x57
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 48 65 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 180h
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 C6 51 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x51
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 54 81 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 11ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 35 81 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 A4 5C ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 DD 5D ED FF: call 0x5850d510
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 30 3A 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 0C 3A 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 E8 39 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 C5 5D ED FF: call 0x5850d590
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 AA 39 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x39
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 C9 90 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 B8 90 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58637824
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        cmp ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 0F 83 89 01 00 00: jae 0x586379bf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 C7 55 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        push eax
        push 588aeda8h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 138h], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8A 8C 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10ch]
        movzx eax, byte ptr [ebp + edx*4 - 104h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5863796c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        movzx edx, word ptr [ebp + ecx*4 - 102h]
        test edx, edx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x5863796c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp + eax*4 - 104h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 F4 EB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 31: je 0x5863791c
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 13ch], eax
        push 0ffffffh
        push -1
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 07 8C 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x5863796a
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 30 90 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 144h], eax
        push 0ffffffh
        push -1
        push 588aedach
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B7 8B 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x586379ba
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 E0 8F 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 14ch], edx
        push 0ffffffh
        push -1
        push 588aedb0h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 67 8B 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 56 FE FF FF: jmp 0x58637815
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 76 D8 FF FF: call 0x58635240
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7B 96 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
