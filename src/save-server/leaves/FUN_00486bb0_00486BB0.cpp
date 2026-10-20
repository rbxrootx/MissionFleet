// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486BB0 .. +0x2AE bytes.
extern "C" __declspec(naked) void FUN_00486bb0_00486BB0() {
    __asm {
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ebp
        mov edi, dword ptr [esp + 60h]
        cmp edi, 82h
        ; Exact mapped bytes 75 24: jne 0x486be7
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
        ; Exact mapped bytes E8 66 DA FF FF: call 0x484640
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xda
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
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x486c29
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
        ; Exact mapped bytes E8 FD D7 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 2D 40 BF 68 00: mov ebp, dword ptr [0x68bf40]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
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
        ; Exact mapped bytes 77 15: ja 0x486c48
        __asm _emit 0x77
        __asm _emit 0x15
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x486d56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 7
        cmp eax, 8
        ; Exact mapped bytes 77 24: ja 0x486c65
        __asm _emit 0x77
        __asm _emit 0x24
        ; Exact mapped bytes FF 24 85 60 6E 48 00: jmp dword ptr [eax*4 + 0x486e60]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x6e
        __asm _emit 0x48
        __asm _emit 0x00
        cmp eax, 0f3h
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x486d56
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1943h
        ; Exact mapped bytes 72 0B: jb 0x486c65
        __asm _emit 0x72
        __asm _emit 0x0b
        cmp eax, 1944h
        ; Exact mapped bytes 0F 86 E0 01 00 00: jbe 0x486e45
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
        ; Exact mapped bytes E8 97 D7 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 2D 40 BF 68 00: mov ebp, dword ptr [0x68bf40]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
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
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x486d5b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and al, 1fh
        cmp al, 9
        ; Exact mapped bytes 75 10: jne 0x486cb8
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        push 0
        push 0f3h
        push esi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x486d5b
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 6
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x486d5b
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 0D: je 0x486ce6
        __asm _emit 0x74
        __asm _emit 0x0d
        and al, 1fh
        cmp al, 7
        ; Exact mapped bytes 75 07: jne 0x486ce6
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebp, 22h
        ; Exact mapped bytes EB 75: jmp 0x486d5b
        __asm _emit 0xeb
        __asm _emit 0x75
        mov ebp, 16h
        ; Exact mapped bytes EB 6E: jmp 0x486d5b
        __asm _emit 0xeb
        __asm _emit 0x6e
        push 0
        push 0
        push 0f2h
        push esi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        mov ebx, dword ptr [esp + 64h]
        mov ebp, ebx
        test ebp, ebp
        ; Exact mapped bytes 75 10: jne 0x486d19
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [esp + 18h]
        ; Exact mapped bytes 8B 2D 14 BE 68 00: mov ebp, dword ptr [0x68be14]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebp, eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 11: je 0x486d3a
        __asm _emit 0x74
        __asm _emit 0x11
        and edi, 8
        or edi, 6
        push edi
        push ebp
        push esi
        ; Exact mapped bytes E8 29 F9 FF FF: call 0x486660
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test ebx, ebx
        ; Exact mapped bytes 75 0C: jne 0x486d4a
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [esp + 18h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 10 BE 68 00: call dword ptr [0x68be10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbe
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 E2 FE FF FF: je 0x486c65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 7
        ; Exact mapped bytes 74 0F: je 0x486d97
        __asm _emit 0x74
        __asm _emit 0x0f
        and eax, 0efffffffh
        push eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [esp + 68h]
        mov ebx, dword ptr [esp + 64h]
        push eax
        push ebx
        push edi
        push esi
        push 0
        push esi
        ; Exact mapped bytes E8 65 D6 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        cmp edi, 7
        ; Exact mapped bytes 74 18: je 0x486dd6
        __asm _emit 0x74
        __asm _emit 0x18
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        or eax, 10000000h
        push eax
        push -10h
        push esi
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 0
        push 0f2h
        push esi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        cmp edi, 0f3h
        ; Exact mapped bytes 74 08: je 0x486df8
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edi, 0f1h
        ; Exact mapped bytes 75 06: jne 0x486dfe
        __asm _emit 0x75
        __asm _emit 0x06
        cmp ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 39: je 0x486e37
        __asm _emit 0x74
        __asm _emit 0x39
        push esi
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x486e37
        __asm _emit 0x74
        __asm _emit 0x2c
        xor ebx, dword ptr [esp + 10h]
        test bl, 3
        ; Exact mapped bytes 74 03: je 0x486e17
        __asm _emit 0x74
        __asm _emit 0x03
        or ebp, 4
        push esi
        and ebx, 8
        push edi
        or ebx, ebp
        ; Exact mapped bytes FF 15 FC BC 68 00: call dword ptr [0x68bcfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 34 F8 FF FF: call 0x486660
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push edi
        push esi
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
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
