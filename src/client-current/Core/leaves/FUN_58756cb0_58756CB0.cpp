// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756CB0 .. +0x2C1 bytes.
extern "C" __declspec(naked) void FUN_58756cb0_58756CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f96fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 130h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 75 07: jne 0x58756cf4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 62 02 00 00: jmp 0x58756f56
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 09 61 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 FC FF FF: call 0x58756930
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588b4f98h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 198h
        ; Exact mapped bytes E8 7E A2 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 1E: je 0x58756dbd
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 FB 95 02 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58756dc7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 138h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 2B: je 0x58756e1a
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 24 DD D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58756e1a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 B5 FB D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x58756e1a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 1
        push 100h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 E3 5F 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588b4fb8h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 198h
        ; Exact mapped bytes E8 70 A1 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 1E: je 0x58756ecb
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 ED 94 02 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58756ed5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 13ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 2B: je 0x58756f28
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 16 DC D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xdc
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58756f28
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 A7 FA D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x58756f28
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 1
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 0A: je 0x58756f3b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 05 00 00: call 0x58757450
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x58756f54
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 1C F7 FF FF: call 0x58756670
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E5 A0 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
