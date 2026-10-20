// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58637C30 .. +0x374 bytes.
extern "C" __declspec(naked) void FUN_58637c30_58637C30() {
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
        ; Exact mapped bytes 0F 84 3A 03 00 00: je 0x58637f96
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 A1 51 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x51
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 78 5F ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 FB 4B 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 118h], edx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 89 7B E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 11ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 6A 7B E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 D9 56 ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 92 58 ED FF: call 0x5850d590
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 65 34 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 41 34 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 1D 34 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 7A 57 ED FF: call 0x5850d510
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 DF 33 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 FE 8A 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 ED 8A 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58637def
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        cmp ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 0F 83 89 01 00 00: jae 0x58637f8a
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
        ; Exact mapped bytes E8 FC 4F 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4f
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10ch]
        add eax, 1
        push eax
        push 588aed9ch
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
        mov eax, dword ptr [edx + 10ch]
        mov dword ptr [ebp - 138h], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 BF 86 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10ch]
        movzx eax, byte ptr [ebp + edx*4 - 104h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x58637f37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        movzx edx, word ptr [ebp + ecx*4 - 102h]
        test edx, edx
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x58637f37
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
        ; Exact mapped bytes E8 C9 EE EB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 31: je 0x58637ee7
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 13ch], eax
        push 0ffffffh
        push -1
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 78h
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 3C 86 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x58637f35
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 65 8A 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 144h], eax
        push 0ffffffh
        push -1
        push 588aeda0h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 EC 85 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x58637f85
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 15 8A 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 14ch], edx
        push 0ffffffh
        push -1
        push 588aeda4h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 9C 85 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 56 FE FF FF: jmp 0x58637de0
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0B D4 FF FF: call 0x586353a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B0 90 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
