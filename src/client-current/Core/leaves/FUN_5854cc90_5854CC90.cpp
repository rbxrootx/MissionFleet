// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854CC90 .. +0x2A2 bytes.
extern "C" __declspec(naked) void FUN_5854cc90_5854CC90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 13h
        ; Exact mapped bytes 0F 87 F7 01 00 00: ja 0x5854cea7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 34 CF 54 58: jmp dword ptr [ecx*4 + 0x5854cf34]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0xcf
        __asm _emit 0x54
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 A5 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 A5 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 1bbh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5F C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 1ch
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 41 C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B6 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 23 C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 05 C0 F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 2bdh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E4 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 2beh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C3 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 38 A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A5 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1A A4 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 11h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 87 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 490h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 66 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5854cea7
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DB A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 491h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 45 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 79: jmp 0x5854cea7
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes E8 BD A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        push 0
        push 49fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 27 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5B: jmp 0x5854cea7
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes E8 9F A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        push 0
        push 515h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 09 BF F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x5854cea7
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes E8 81 A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 EE BE F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x5854cea7
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 19: jmp 0x5854cea7
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 5D A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 7ah
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CA BE F8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c8h], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x5854ceda
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 27 A3 F8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A C6 02 00 00: mov word ptr [edx + 0x2c6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 C4 02 00 00: mov word ptr [ecx + 0x2c4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2b8h], 0ffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2b4h], 0ffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2c0h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2bch], 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
