// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B92C0 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_584b92c0_584B92C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e799h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 50h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 60h
        ; Exact mapped bytes E8 45 EF FC FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 6ch
        ; Exact mapped bytes E8 38 EF FC FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 73: jne 0x584b937f
        __asm _emit 0x75
        __asm _emit 0x73
        push 0ca4h
        ; Exact mapped bytes E8 EE 7C 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7c
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 21: je 0x584b934a
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 1f4h
        push 2bch
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BB 70 16 00: call 0x58620400
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b9351
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 60h
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A7 EE FC FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x584b9465
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 60h
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EC EC FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584b93a6
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 DB E6 FC FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 14h]
        add edx, 60h
        mov dword ptr [ebp - 38h], edx
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D5 ED FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C E6 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x584b93ed
        __asm _emit 0x74
        __asm _emit 0x22
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6D E6 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 06 02 00 00: call 0x584b95e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x584b93eb
        __asm _emit 0x74
        __asm _emit 0x0d
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5A E6 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB AA: jmp 0x584b9397
        __asm _emit 0xeb
        __asm _emit 0xaa
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 72: jne 0x584b9465
        __asm _emit 0x75
        __asm _emit 0x72
        push 0ca4h
        ; Exact mapped bytes E8 07 7C 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7c
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 25: je 0x584b9435
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c3h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D0 6F 16 00: call 0x58620400
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b943c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 60h
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 BC ED FC FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 56: je 0x584b94c1
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 6ch
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 6ch
        mov dword ptr [ebp - 44h], edx
        lea eax, [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F7 EB FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 0E 0C 00 00: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 FD FF FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 75 0E: jne 0x584b94c1
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov eax, dword ptr [ebp - 10h]
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
