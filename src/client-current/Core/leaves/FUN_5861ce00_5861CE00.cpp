// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861CE00 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_5861ce00_5861CE00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 524h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 508h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 50ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 30h
        mov dword ptr [ebp - 510h], ecx
        movzx edx, word ptr [ebp + 8]
        cmp edx, 800h
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x5861cf34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 10h]
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 35: jne 0x5861ce7e
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 508h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 518h], edx
        push 0
        push 0
        push 10101h
        push 0
        mov eax, dword ptr [ebp - 510h]
        push eax
        mov ecx, dword ptr [ebp - 518h]
        ; Exact mapped bytes E8 28 A6 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x5861cf2f
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 10h]
        mov dword ptr [ebp - 514h], ecx
        cmp dword ptr [ebp - 514h], 0
        ; Exact mapped bytes 74 0E: je 0x5861ce9f
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 514h], 1
        ; Exact mapped bytes 74 5F: je 0x5861cef9
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5861cf2f
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50ch]
        add edx, 18h
        push edx
        push 588ae60ch
        ; Exact mapped bytes E8 3D 51 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
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
        mov ecx, dword ptr [ebp - 508h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 51ch], edx
        push 0
        push 0
        push 10101h
        push 0
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        ; Exact mapped bytes E8 AA A5 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x5861cf2f
        __asm _emit 0xeb
        __asm _emit 0x36
        push 588ae634h
        ; Exact mapped bytes E8 ED 50 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x50
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 6464ffh
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 34 0C 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x5861d04b
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50ch]
        push eax
        mov ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes E8 5A F6 FF FF: call 0x5861c5a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x5861d04b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 508h]
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 01 C3 E9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5861cff6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov eax, dword ptr [ebp - 50ch]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x5861cff4
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        push 588ae650h
        lea edx, [ebp - 504h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 3d4h
        mov eax, dword ptr [ebp - 510h]
        push eax
        lea ecx, [ebp - 504h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp + eax - 504h]
        push edx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 508h]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 520h], ecx
        push 0
        push 0
        push 10101h
        push 0
        lea edx, [ebp - 504h]
        push edx
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 AD A4 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2C: jmp 0x5861d022
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 508h]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 524h], ecx
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov eax, dword ptr [ebp - 50ch]
        push eax
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 5F C1 04 00: call 0x58669180
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 F1 E6 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5861d04b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 510h]
        push ecx
        mov edx, dword ptr [ebp - 50ch]
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 C8 E9 FF: call 0x584b9860
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 FB 3F 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3f
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
