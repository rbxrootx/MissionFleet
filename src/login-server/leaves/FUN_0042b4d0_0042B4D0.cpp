// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B4D0 .. +0x2AE bytes.
extern "C" __declspec(naked) void FUN_0042b4d0_0042B4D0() {
    __asm {
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ebp
        mov edi, dword ptr [esp + 60h]
        cmp edi, 82h
        ; Exact mapped bytes 75 24: jne 0x42b507
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esp + 68h]
        push 0
        mov ebx, dword ptr [esp + 68h]
        push eax
        mov esi, dword ptr [esp + 64h]
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 76 DB FF FF: call 0x429070
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        xor eax, eax
        mov esi, dword ptr [esp + 5ch]
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 5C C4 43 00: call dword ptr [0x43c45c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x42b549
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 68h]
        mov ebx, dword ptr [esp + 64h]
        push eax
        push ebx
        push edi
        push esi
        push 0
        push esi
        ; Exact mapped bytes E8 0D D9 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 2D 60 C4 43 00: mov ebp, dword ptr [0x43c460]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp edi, 0f1h
        mov eax, edi
        ; Exact mapped bytes 77 15: ja 0x42b568
        __asm _emit 0x77
        __asm _emit 0x15
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x42b676
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 7
        cmp eax, 8
        ; Exact mapped bytes 77 24: ja 0x42b585
        __asm _emit 0x77
        __asm _emit 0x24
        ; Exact mapped bytes FF 24 85 80 B7 42 00: jmp dword ptr [eax*4 + 0x42b780]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x00
        cmp eax, 0f3h
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x42b676
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1943h
        ; Exact mapped bytes 72 0B: jb 0x42b585
        __asm _emit 0x72
        __asm _emit 0x0b
        cmp eax, 1944h
        ; Exact mapped bytes 0F 86 E0 01 00 00: jbe 0x42b765
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        mov ebx, dword ptr [esp + 64h]
        push eax
        push ebx
        push edi
        push esi
        push 0
        push esi
        ; Exact mapped bytes E8 A7 D8 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 2D 60 C4 43 00: mov ebp, dword ptr [0x43c460]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, 16h
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x42b67b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 10: jne 0x42b5d8
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0f3h
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x42b67b
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 6
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x42b67b
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 0D: je 0x42b606
        __asm _emit 0x74
        __asm _emit 0x0d
        and al, 1fh
        cmp al, 7
        ; Exact mapped bytes 75 07: jne 0x42b606
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, 22h
        ; Exact mapped bytes EB 75: jmp 0x42b67b
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ebp, 16h
        ; Exact mapped bytes EB 6E: jmp 0x42b67b
        __asm _emit 0xeb
        __asm _emit 0x6e
        push 0
        push 0
        push 0f2h
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        mov ebx, dword ptr [esp + 64h]
        mov ebp, ebx
        test ebp, ebp
        ; Exact mapped bytes 75 10: jne 0x42b639
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [esp + 18h]
        ; Exact mapped bytes 8B 2D AC C3 43 00: mov ebp, dword ptr [0x43c3ac]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xac
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebp, eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 11: je 0x42b65a
        __asm _emit 0x74
        __asm _emit 0x11
        and edi, 8
        or edi, 6
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 29 F9 FF FF: call 0x42af80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 75 0C: jne 0x42b66a
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 A8 C3 43 00: call dword ptr [0x43c3a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, 4
        push 0
        push 0
        push 0f2h
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 E2 FE FF FF: je 0x42b585
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 7
        ; Exact mapped bytes 74 0F: je 0x42b6b7
        __asm _emit 0x74
        __asm _emit 0x0f
        and eax, 0efffffffh
        push eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        mov ebx, dword ptr [esp + 64h]
        push eax
        push ebx
        push edi
        push esi
        push 0
        push esi
        ; Exact mapped bytes E8 75 D7 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        cmp edi, 7
        ; Exact mapped bytes 74 18: je 0x42b6f6
        __asm _emit 0x74
        __asm _emit 0x18
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        or eax, 10000000h
        push eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 DC C4 43 00: call dword ptr [0x43c4dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        push 0f2h
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        cmp edi, 0f3h
        ; Exact mapped bytes 74 08: je 0x42b718
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edi, 0f1h
        ; Exact mapped bytes 75 06: jne 0x42b71e
        __asm _emit 0x75
        __asm _emit 0x06
        cmp ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 39: je 0x42b757
        __asm _emit 0x74
        __asm _emit 0x39
        push esi
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x42b757
        __asm _emit 0x74
        __asm _emit 0x2c
        xor ebx, dword ptr [esp + 10h]
        test bl, 3
        ; Exact mapped bytes 74 03: je 0x42b737
        __asm _emit 0x74
        __asm _emit 0x03
        or ebp, 4
        push esi
        and ebx, 8
        push edi
        or ebx, ebp
        ; Exact mapped bytes FF 15 6C C5 43 00: call dword ptr [0x43c56c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 34 F8 FF FF: call 0x42af80
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push edi
        push esi
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov dword ptr [eax], 1
        mov eax, 3e8h
        add esp, 48h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
