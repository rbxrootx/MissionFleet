// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585ED460 .. +0x265 bytes.
extern "C" __declspec(naked) void FUN_585ed460_585ED460() {
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
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 95 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 FB E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B8: mov word ptr [ebp - 0x48], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb8
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 B2 41 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 65h
        ; Exact mapped bytes 75 09: jne 0x585ed4b7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 6
        ; Exact mapped bytes EB 07: jmp 0x585ed4be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 3
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 21ebch], 3
        ; Exact mapped bytes 74 17: je 0x585ed4e1
        __asm _emit 0x74
        __asm _emit 0x17
        push 588ad594h
        ; Exact mapped bytes E8 1C 4B F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 90 73 FF FF: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 61 41 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 8B 3C 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3c
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 86 3E 01 00 00: jbe 0x585ed63f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 41 41 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 54 08 FF: movsx edx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xff
        cmp edx, 20h
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x585ed63f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 E3 F8 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 50 F3 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 FF 40 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 29 3C 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3c
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        add eax, 31h
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 D0 3A 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3a
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 83 F8 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 F1 F2 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 99 40 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, dword ptr [ebp - 40h]
        push eax
        mov eax, dword ptr [ebp - 44h]
        add eax, 30h
        push eax
        ; Exact mapped bytes E8 C9 F2 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf2
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        movzx eax, word ptr [ebp - 48h]
        push eax
        push 3
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 33 F8 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 93 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x93
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 F9 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B6: mov word ptr [ebp - 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb6
        movzx ecx, word ptr [ebp - 4ah]
        push ecx
        push 3
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 7E FF FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        push 588ad5b8h
        ; Exact mapped bytes E8 D8 49 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 1
        push 3
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C8 AD FD FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 FA 39 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 78: jmp 0x585ed6b7
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 03 40 EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x40
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 74 1A: je 0x585ed674
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 E8 3F EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 44 10 FF: movsx eax, byte ptr [eax + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x585ed6b7
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 93 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x93
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A F9 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 B4: mov word ptr [ebp - 0x4c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb4
        movzx ecx, word ptr [ebp - 4ch]
        push ecx
        push 3
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 7D FF FF: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        push 588ad5d4h
        ; Exact mapped bytes E8 4A 49 F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        push eax
        push 1
        push 3
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3A AD FD FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8F 39 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
