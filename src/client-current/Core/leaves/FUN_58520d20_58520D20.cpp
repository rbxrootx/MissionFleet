// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520D20 .. +0x1E1 bytes.
extern "C" __declspec(naked) void FUN_58520d20_58520D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B3 9A F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 6D A2 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58520d5e
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 0A A9 FE FF: call 0x5850b660
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x58520ef0
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DA AC FE FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x58520da4
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CE AC FE FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E4 A1 FE FF: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 73 24: jae 0x58520da4
        __asm _emit 0x73
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F7 46 FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 2fh], al
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 39 8F FE FF: call 0x58509cd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 2fh]
        mov byte ptr [eax], cl
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 4C 01 00 00: jmp 0x58520ef0
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 0A: jne 0x58520db7
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 3E 9A F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x58520ef0
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 FA FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 48: jne 0x58520e11
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A5 46 FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 30h], al
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        movzx edx, byte ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 51 E2 FF FF: call 0x5851f040
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x58520e01
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 08: jmp 0x58520e09
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 EA 99 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x58520ef0
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 20h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5F 46 FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 2eh], al
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 2dh]
        push eax
        lea ecx, [ebp - 2eh]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 40h
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 89 FE FF FF: call 0x58520ce0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0E: je 0x58520e6e
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 74 08: je 0x58520e6e
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 34h], 3
        ; Exact mapped bytes 74 4F: je 0x58520ebb
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes EB 7D: jmp 0x58520eeb
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 4ch]
        lea ecx, [ebp - 28h]
        sub eax, ecx
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 74 25: je 0x58520ea0
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        push 1
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 9B 9B 33 00: call 0x5885aa2c
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 74 07: je 0x58520ea0
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 52 99 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x58520ef0
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 3dh], 1
        lea ecx, [ebp - 2eh]
        cmp dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes 74 05: je 0x58520eb4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 3C: jmp 0x58520ef0
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes E8 37 99 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x58520ef0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 4ch]
        push eax
        movzx ecx, byte ptr [ebp - 2eh]
        push ecx
        ; Exact mapped bytes E8 74 E1 FF FF: call 0x5851f040
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x58520ede
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 08: jmp 0x58520ee6
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 0D 99 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes EB 05: jmp 0x58520ef0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 00 99 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 55 01 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
