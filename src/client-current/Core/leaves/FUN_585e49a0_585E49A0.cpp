// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E49A0 .. +0x1DE bytes.
extern "C" __declspec(naked) void FUN_585e49a0_585E49A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 88 CC EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcc
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
        ; Exact mapped bytes 75 09: jne 0x585e49e1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 7
        ; Exact mapped bytes EB 07: jmp 0x585e49e8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 3
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 5A CC EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 84 C7 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 86 68 01 00 00: jbe 0x585e4b70
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 3A CC EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcc
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
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x585e4b70
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 DC 83 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC E2 FE FF: call 0x585d2d10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, 1
        imul ecx, edx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x585e4a71
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 E2 FE FF: call 0x585d2d50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585e4a71
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 48 00 00: call 0x585e9360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 18h
        push 589604e0h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 0F 7E 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F E2 FE FF: call 0x585d2d30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 F5 7D 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7d
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 A4 CB EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 CE C6 26 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc6
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        add eax, 31h
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 75 C5 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc5
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 28 83 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 96 7D 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7d
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 3E CB EE FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, dword ptr [ebp - 40h]
        push eax
        mov eax, dword ptr [ebp - 44h]
        add eax, 30h
        push eax
        ; Exact mapped bytes E8 6E 7D 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7d
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 BE F8 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        push -1
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 48 00 00: call 0x585e9360
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 95 38 FE FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 C7 C4 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc4
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D6 C4 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc4
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
