// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A320 .. +0x330 bytes.
extern "C" __declspec(naked) void FUN_0042a320_0042A320() {
    __asm {
        sub esp, 18h
        push ebx
        push esi
        push edi
        push ebp
        mov edi, dword ptr [esp + 30h]
        cmp edi, 82h
        ; Exact mapped bytes 75 24: jne 0x42a357
        __asm _emit 0x75
        __asm _emit 0x24
        mov ebp, dword ptr [esp + 38h]
        push 6
        mov ebx, dword ptr [esp + 38h]
        push ebp
        mov esi, dword ptr [esp + 34h]
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 26 ED FF FF: call 0x429070
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        xor eax, eax
        mov esi, dword ptr [esp + 2ch]
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
        ; Exact mapped bytes 74 28: je 0x42a397
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        push ebx
        push edi
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 BD EA FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xea
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
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp edi, 86h
        ; Exact mapped bytes 77 35: ja 0x42a3d4
        __asm _emit 0x77
        __asm _emit 0x35
        cmp edi, 85h
        ; Exact mapped bytes 73 61: jae 0x42a408
        __asm _emit 0x73
        __asm _emit 0x61
        cmp edi, 0ch
        ; Exact mapped bytes 74 5C: je 0x42a408
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ebx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 38h]
        push ebp
        push ebx
        push edi
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 80 EA FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xea
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
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp edi, 138h
        ; Exact mapped bytes 77 16: ja 0x42a3f2
        __asm _emit 0x77
        __asm _emit 0x16
        cmp edi, 132h
        ; Exact mapped bytes 0F 83 3B 01 00 00: jae 0x42a523
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 110h
        ; Exact mapped bytes 74 73: je 0x42a463
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes EB BA: jmp 0x42a3ac
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp edi, 1943h
        ; Exact mapped bytes 72 B2: jb 0x42a3ac
        __asm _emit 0x72
        __asm _emit 0xb2
        cmp edi, 1944h
        ; Exact mapped bytes 0F 86 30 02 00 00: jbe 0x42a636
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x42a3ac
        __asm _emit 0xeb
        __asm _emit 0xa4
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 73 28: jae 0x42a43b
        __asm _emit 0x73
        __asm _emit 0x28
        push esi
        ; Exact mapped bytes FF 15 30 C5 43 00: call dword ptr [0x43c530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x42a43b
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ebp, dword ptr [esp + 38h]
        push 0
        mov ebx, dword ptr [esp + 38h]
        push ebp
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 3F F7 FF FF: call 0x429b70
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        push ebx
        push edi
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 F1 E9 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
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
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 6
        push esi
        ; Exact mapped bytes E8 D5 E9 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 1ch], eax
        add esp, 8
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 15: jb 0x42a492
        __asm _emit 0x72
        __asm _emit 0x15
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 10h], 0
        test al, 4
        ; Exact mapped bytes 75 08: jne 0x42a49a
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 1
        lea eax, [esp + 10h]
        push eax
        push 0
        push 11f0h
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 75 27: jne 0x42a4db
        __asm _emit 0x75
        __asm _emit 0x27
        push esi
        ; Exact mapped bytes E8 B6 F2 FF FF: call 0x429770
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 14h]
        push ebp
        push ebx
        push edi
        push esi
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 14h]
        push ebp
        push ebx
        push edi
        push esi
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 3D 20 14 45 00 5F 03: cmp word ptr [0x451420], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        mov edi, eax
        ; Exact mapped bytes 72 0D: jb 0x42a50c
        __asm _emit 0x72
        __asm _emit 0x0d
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test al, 4
        ; Exact mapped bytes 75 0B: jne 0x42a517
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0ffffh
        push esi
        ; Exact mapped bytes E8 A9 F4 FF FF: call 0x4299c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        lea eax, [esp + 18h]
        push 10h
        push eax
        push esi
        ; Exact mapped bytes FF 15 94 C3 43 00: call dword ptr [0x43c394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push ecx
        push 44d9f0h
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x42a57f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        lea eax, [edi + 0cbfh]
        push ebx
        push eax
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 E1 E8 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe8
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
        test eax, eax
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x42a61c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x42a624
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x42a61c
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x42a59a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x42a61d
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ffff0000h
        ; Exact mapped bytes 76 3A: jbe 0x42a5db
        __asm _emit 0x76
        __asm _emit 0x3a
        ; Exact mapped bytes 66 81 3D 20 14 45 00 0A 03: cmp word ptr [0x451420], 0x30a
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x03
        ; Exact mapped bytes 77 2F: ja 0x42a5db
        __asm _emit 0x77
        __asm _emit 0x2f
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        lea eax, [edi + 0cbfh]
        push ebx
        push eax
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 7A E8 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe8
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
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x42a61c
        __asm _emit 0x74
        __asm _emit 0x48
        cmp eax, 1
        ; Exact mapped bytes 75 4B: jne 0x42a624
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes EB 41: jmp 0x42a61c
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ebp, dword ptr [esp + 38h]
        mov ebx, dword ptr [esp + 34h]
        push ebp
        push ebx
        push edi
        push esi
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42a5f7
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 1
        ; Exact mapped bytes 75 2D: jne 0x42a624
        __asm _emit 0x75
        __asm _emit 0x2d
        push ebp
        lea eax, [edi + 0cbfh]
        push ebx
        push eax
        push esi
        push 6
        push esi
        ; Exact mapped bytes E8 37 E8 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe8
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
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42a61c
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x42a624
        __asm _emit 0x75
        __asm _emit 0x08
        push ebp
        push ebx
        push edi
        ; Exact mapped bytes E8 8C F4 FF FF: call 0x429ab0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 88 FD FF FF: je 0x42a3b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 38h]
        mov eax, 3eeh
        mov dword ptr [ebp], 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
