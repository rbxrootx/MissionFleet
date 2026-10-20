// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D23C0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_585d23c0_585D23C0() {
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
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 68 F2 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 6ch
        ; Exact mapped bytes 75 09: jne 0x585d2401
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 5
        ; Exact mapped bytes EB 07: jmp 0x585d2408
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 3
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 21ebch], 2
        ; Exact mapped bytes 74 17: je 0x585d242b
        __asm _emit 0x74
        __asm _emit 0x17
        push 588ad538h
        ; Exact mapped bytes E8 D2 FB F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 46 24 01 00: call 0x585e4870
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 17 F2 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 41 ED 27 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xed
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F 86 22 01 00 00: jbe 0x585d256d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 F7 F1 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 54 08 FF: movsx edx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xff
        cmp edx, 20h
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x585d256d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 99 A9 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa9
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 06 A4 27 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa4
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 B5 F1 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 DF EC 27 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        add eax, 31h
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 86 EB 25 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xeb
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 39 A9 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 A7 A3 27 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa3
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 4F F1 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, dword ptr [ebp - 40h]
        push eax
        mov eax, dword ptr [ebp - 44h]
        add eax, 30h
        push eax
        ; Exact mapped bytes E8 7F A3 27 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa3
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 E4 F9 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe4
        __asm _emit 0xf9
        __asm _emit 0xff
        push 8
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 2F 01 00: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        push 588ad55ch
        ; Exact mapped bytes E8 AA FA F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        push eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9A 5E FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 CC EA 25 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 5F: jmp 0x585d25cc
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 D5 F0 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 54 08 FF: movsx edx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xff
        cmp edx, 20h
        ; Exact mapped bytes 74 1A: je 0x585d25a2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 BA F0 EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 54 08 FF: movsx edx, byte ptr [eax + ecx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 75 2A: jne 0x585d25cc
        __asm _emit 0x75
        __asm _emit 0x2a
        push 8
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 2E 01 00: call 0x585e5490
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        push 588ad578h
        ; Exact mapped bytes E8 35 FA F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        push eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 25 5E FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7A EA 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
