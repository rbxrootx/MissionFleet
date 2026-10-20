// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ADEF0 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_586adef0_586ADEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 C5 01 00 00: jne 0x586ae0d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 0F 85 9D 01 00 00: jne 0x586ae0ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 04 96 58: mov esi, dword ptr [0x589604fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, 55555555h
        mov edx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 7C 78 DE FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x78
        __asm _emit 0xde
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 82 53 01 00 00: jb 0x586ae08f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 8], al
        push 15h
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 B3 EE 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xee
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 E5 36 E2 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x36
        __asm _emit 0xe2
        __asm _emit 0xff
        push eax
        push 15h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 09 62 10 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x62
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1dh], 0
        mov dword ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x586adf97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 74 4B: je 0x586adff1
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 28h]
        mov cl, byte ptr [ebp + eax - 1ch]
        mov byte ptr [ebp - 1dh], cl
        ; Exact mapped bytes 0F BE 55 E3: movsx edx, byte ptr [ebp - 0x1d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xe3
        cmp edx, 20h
        ; Exact mapped bytes 74 09: je 0x586adfc2
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 E3: movsx eax, byte ptr [ebp - 0x1d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xe3
        cmp eax, 27h
        ; Exact mapped bytes 75 09: jne 0x586adfcb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 26: jmp 0x586adff1
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 0F BE 4D E3: movsx ecx, byte ptr [ebp - 0x1d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xe3
        cmp ecx, 1
        ; Exact mapped bytes 7C 09: jl 0x586adfdd
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 E3: movsx edx, byte ptr [ebp - 0x1d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xe3
        cmp edx, 1fh
        ; Exact mapped bytes 7E 09: jle 0x586adfe6
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 45 E3: movsx eax, byte ptr [ebp - 0x1d]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xe3
        cmp eax, 7fh
        ; Exact mapped bytes 75 09: jne 0x586adfef
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 02: jmp 0x586adff1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9D: jmp 0x586adf8e
        __asm _emit 0xeb
        __asm _emit 0x9d
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 86 31 1A 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 77 07: ja 0x586ae008
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 56: je 0x586ae064
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 4D: je 0x586ae064
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 9E 69 DD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x69
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 52 31 1A 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x31
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        push 0
        mov edx, dword ptr [ebp - 30h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        push 8001c10ah
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 E9 17 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 7D DD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7d
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x586ae08d
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E8 87 91 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 0a6ch
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F1 AC E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 29: jmp 0x586ae0b8
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E8 5C 91 E2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 0a6bh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C6 AC E2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 19: jmp 0x586ae0d3
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 0E: jne 0x586ae0d3
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 70 2F 18 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
