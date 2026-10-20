// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521690 .. +0x276 bytes.
extern "C" __declspec(naked) void FUN_58521690_58521690() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888181dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 58h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC 9C FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x585216f9
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D0 9C FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 66 98 FE FF: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 73 1B: jae 0x585216f9
        __asm _emit 0x73
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8A 7B FE FF: call 0x58509270
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [eax]
        movzx ecx, al
        push ecx
        ; Exact mapped bytes E8 8F 3D FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x585218fc
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 0A: jne 0x5852170c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 E9 90 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 F0 01 00 00: jmp 0x585218fc
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4C F1 FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 3C: jne 0x5852175a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        lea eax, [ebp - 2dh]
        push eax
        ; Exact mapped bytes E8 C2 D8 FF FF: call 0x5851eff0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5852174a
        __asm _emit 0x74
        __asm _emit 0x12
        movzx edx, byte ptr [ebp - 2dh]
        push edx
        ; Exact mapped bytes E8 3E 3D FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 08: jmp 0x58521752
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 A1 90 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x585218fc
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7E 5B FA FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        ; Exact mapped bytes E8 5E 89 33 00: call 0x5885a0d3
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], -1
        ; Exact mapped bytes 75 1F: jne 0x585217a0
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 6A 90 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 98 85 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x585218fc
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 44h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F3 A2 FE FF: call 0x5850baa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 54h], ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 81 45 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 17 32 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x32
        __asm _emit 0xf6
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 4ch], esi
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6A 45 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        lea edx, [ebp - 58h]
        push edx
        lea eax, [ebp - 2eh]
        push eax
        lea ecx, [ebp - 2fh]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 A0 F3 FF FF: call 0x58520ba0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 15: je 0x5852181e
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 38h], 1
        ; Exact mapped bytes 74 0F: je 0x5852181e
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 38h], 3
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x585218a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x585218cb
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2fh]
        cmp dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 74 68: je 0x5852188e
        __asm _emit 0x74
        __asm _emit 0x68
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 12 45 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A8 31 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x31
        __asm _emit 0xf6
        __asm _emit 0xff
        add esi, eax
        sub esi, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 34h], esi
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 7E 24: jle 0x5852186a
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        ; Exact mapped bytes E8 F3 94 33 00: call 0x5885ad58
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x94
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB D6: jmp 0x58521840
        __asm _emit 0xeb
        __asm _emit 0xd6
        movzx eax, byte ptr [ebp - 2fh]
        push eax
        ; Exact mapped bytes E8 0C 3C FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A7 84 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes EB 6E: jmp 0x585218fc
        __asm _emit 0xeb
        __asm _emit 0x6e
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AA 44 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, eax
        push ecx
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CA 97 FE FF: call 0x5850b070
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585218e7
        __asm _emit 0xeb
        __asm _emit 0x3e
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7F F2 FF FF: call 0x58520b30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 10: movsx edx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x10
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6A 84 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 31: jmp 0x585218fc
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes E8 20 8F F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4E 84 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes EB 15: jmp 0x585218fc
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes E9 7D FE FF FF: jmp 0x58521769
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 35 84 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
