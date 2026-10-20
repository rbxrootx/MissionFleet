// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58637FB0 .. +0x3E6 bytes.
extern "C" __declspec(naked) void FUN_58637fb0_58637FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 130h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0e8h], ecx
        mov eax, dword ptr [ebp - 0e8h]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 AC 03 00 00: je 0x58638388
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 60h
        push 0
        lea ecx, [ebp - 0e4h]
        push ecx
        ; Exact mapped bytes E8 24 4E 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 60h
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 FE 5B ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5b
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 300h
        push eax
        lea eax, [ebp - 0e4h]
        push eax
        ; Exact mapped bytes E8 7C 48 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 E8 55 ED FF: call 0x5850d610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 17 53 ED FF: call 0x5850d350
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x53
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 80 5D ED FF: call 0x5850ddd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 148h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 13 31 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 EF 30 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 100h]
        ; Exact mapped bytes E8 0E 88 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 104h]
        ; Exact mapped bytes E8 FD 87 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 EC 87 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes EB 0F: jmp 0x586380f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ech]
        add edx, 1
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 0ech]
        cmp eax, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes 0F 83 7A 02 00 00: jae 0x5863837c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 FB 4C 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ech]
        add edx, 1
        push edx
        push 588aed88h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 104h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 BE 83 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ech]
        movzx edx, byte ptr [ebp + ecx*4 - 0e4h]
        test edx, edx
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x586382dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ech]
        movzx ecx, word ptr [ebp + eax*4 - 0e2h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x586382dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ech]
        mov eax, dword ptr [ebp + edx*4 - 0e4h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 EA EB FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5863823c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 108h], edx
        push 0ffffffh
        push -1
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 33ch
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 35 83 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        ; Exact mapped bytes E8 7C 9F EE FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        push 0ffffffh
        push -1
        mov eax, dword ptr [ebp - 10ch]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 EA 82 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x586382d7
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 10 87 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 118h], edx
        push 0ffffffh
        push -1
        push 588aed8ch
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 97 82 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C3 86 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 120h], ecx
        push 0ffffffh
        push -1
        push 588aed90h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 4A 82 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58638377
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 70 86 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 128h], eax
        push 0ffffffh
        push -1
        push 588aed94h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 F7 81 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 23 86 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 130h], edx
        push 0ffffffh
        push -1
        push 588aed98h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 AA 81 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 FD FF FF: jmp 0x586380e1
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 79 D1 FF FF: call 0x58635500
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BE 8C 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
