// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B96A0 .. +0x1C0 bytes.
extern "C" __declspec(naked) void FUN_584b96a0_584B96A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 518h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 518h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 508h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 30h
        mov dword ptr [ebp - 50ch], ecx
        movzx edx, word ptr [ebp + 8]
        cmp edx, 800h
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x584b9788
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 10h]
        cmp eax, 0ffffh
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x584b9783
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 10h]
        mov dword ptr [ebp - 510h], ecx
        cmp dword ptr [ebp - 510h], 0
        ; Exact mapped bytes 74 0B: je 0x584b970b
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 510h], 1
        ; Exact mapped bytes 74 44: je 0x584b974d
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes EB 78: jmp 0x584b9783
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 508h]
        add edx, 18h
        push edx
        push 58895904h
        ; Exact mapped bytes E8 D1 88 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
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
        push 6464ffh
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 6C 22 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6c
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x584b9783
        __asm _emit 0xeb
        __asm _emit 0x36
        push 5889592ch
        ; Exact mapped bytes E8 99 88 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 6464ffh
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 6B 22 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6b
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x584b9850
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 508h]
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 2E 16 00: call 0x5861c5a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2e
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x584b9850
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov edx, dword ptr [ebp - 508h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x584b97fc
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 508h]
        push eax
        push 58895948h
        lea ecx, [ebp - 504h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 3d4h
        mov edx, dword ptr [ebp - 50ch]
        push edx
        lea eax, [ebp - 504h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp + eax - 504h]
        push ecx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 FA FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        mov edx, dword ptr [ebp - 50ch]
        push edx
        mov eax, dword ptr [ebp - 508h]
        push eax
        mov ecx, dword ptr [ebp - 514h]
        ; Exact mapped bytes E8 5A F9 1A 00: call 0x58669180
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 28 FD FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x584b9850
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        mov edx, dword ptr [ebp - 508h]
        push edx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 00 00 00: call 0x584b9860
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F6 77 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x77
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
