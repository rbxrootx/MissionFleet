// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CBA70 .. +0x27F bytes.
extern "C" __declspec(naked) void FUN_585cba70_585CBA70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 34h], 1
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 AA 5B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 78h
        ; Exact mapped bytes 75 09: jne 0x585cbabf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 6
        ; Exact mapped bytes EB 57: jmp 0x585cbb16
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 83 5B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -5ch
        ; Exact mapped bytes 75 09: jne 0x585cbae7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 4
        ; Exact mapped bytes EB 2F: jmp 0x585cbb16
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 5B 5B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -3bh
        ; Exact mapped bytes 75 09: jne 0x585cbb0f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 6
        ; Exact mapped bytes EB 07: jmp 0x585cbb16
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 3
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x585cbbec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 19 5B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 74 19: je 0x585cbb5c
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 FF 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 0C: jne 0x585cbb68
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585cbbec
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 DA 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 74 19: je 0x585cbb9b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 C0 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x585cbb9f
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 4F: jmp 0x585cbbec
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes EB 48: jmp 0x585cbbe7
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 A3 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 30h
        ; Exact mapped bytes 7C 25: jl 0x585cbbde
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 89 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 39h
        ; Exact mapped bytes 7F 0B: jg 0x585cbbde
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 09: jmp 0x585cbbe7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 05: jmp 0x585cbbec
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x585cbb1c
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x585cbce3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x585cbc0e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 62: jge 0x585cbc78
        __asm _emit 0x7d
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 2C 5A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        sub eax, 30h
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 2ch]
        sub ecx, 1
        push ecx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 0D D0 50 89 58: movsd xmm1, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 C4: movsd qword ptr [ebp - 0x3c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes E8 DA 5C EC FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5c
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 5D BC: fstp qword ptr [ebp - 0x44]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xbc
        ; Exact mapped bytes F2 0F 10 45 C4: movsd xmm0, qword ptr [ebp - 0x3c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes F2 0F 59 45 BC: mulsd xmm0, qword ptr [ebp - 0x44]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes F2 0F 2A 4D D0: cvtsi2sd xmm1, dword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 58 C8: addsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 2C D1: cvttsd2si edx, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd1
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 8D: jmp 0x585cbc05
        __asm _emit 0xeb
        __asm _emit 0x8d
        cmp dword ptr [ebp - 30h], 0ffffh
        ; Exact mapped bytes 7F 53: jg 0x585cbcd4
        __asm _emit 0x7f
        __asm _emit 0x53
        push 18h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 82 11 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        push 588ad9f8h
        push 18h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 4B 51 EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 45 FA FF: call 0x58570250
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        push 588ad9fch
        ; Exact mapped bytes E8 2F 63 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1F C7 FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585cbce3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 1E 48 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 63 53 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x53
        __asm _emit 0x26
        __asm _emit 0x00
        mov esp, ebp
    }
}
