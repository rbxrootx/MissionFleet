// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861C7C0 .. +0x349 bytes.
extern "C" __declspec(naked) void FUN_5861c7c0_5861C7C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 23 82 E6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x82
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 C6 04 00: call 0x58668e20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 0F BF 45 F8: movsx eax, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf8
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5861c7fd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 06 03 00 00: jmp 0x5861cb03
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D F8: movsx ecx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 1
        ; Exact mapped bytes 74 0D: je 0x5861c813
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp edx, 2
        ; Exact mapped bytes 0F 85 F0 02 00 00: jne 0x5861cb03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 9F CD E9 FF: call 0x584b95c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 A1 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp eax, 0e7h
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x5861c8df
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 2
        ; Exact mapped bytes 75 49: jne 0x5861c88a
        __asm _emit 0x75
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 95 95 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5F D7 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4B A1 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa1
        __asm _emit 0xe6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 89 A9 04 00: call 0x58667210
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 50: jmp 0x5861c8da
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 3
        ; Exact mapped bytes 75 47: jne 0x5861c8da
        __asm _emit 0x75
        __asm _emit 0x47
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 95 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0D D7 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F9 A0 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xff
        add eax, 32h
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 37 A9 04 00: call 0x58667210
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5861c997
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 A0 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp eax, 2fbh
        ; Exact mapped bytes 0F 8E A5 00 00 00: jle 0x5861c997
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        test ecx, ecx
        ; Exact mapped bytes 75 4B: jne 0x5861c945
        __asm _emit 0x75
        __asm _emit 0x4b
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC 94 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 30h], eax
        push 2
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A6 D6 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 38h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 92 A0 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 0beh
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE A8 04 00: call 0x58667210
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 52: jmp 0x5861c997
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 1
        ; Exact mapped bytes 75 49: jne 0x5861c997
        __asm _emit 0x75
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 94 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 3ch], eax
        push 3
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 52 D6 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 44h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E A0 E6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 0beh
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 7A A8 04 00: call 0x58667210
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 F7 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp eax, 0a0h
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x5861ca4b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 3
        ; Exact mapped bytes 75 46: jne 0x5861c9f9
        __asm _emit 0x75
        __asm _emit 0x46
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 23 94 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x94
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 48h], eax
        push 2
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 ED D5 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 F6 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6A A8 04 00: call 0x58667260
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4D: jmp 0x5861ca46
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 1
        ; Exact mapped bytes 75 44: jne 0x5861ca46
        __asm _emit 0x75
        __asm _emit 0x44
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D4 93 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9E D5 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 5ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A F6 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1B A8 04 00: call 0x58667260
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5861cb03
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5D F6 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp eax, 242h
        ; Exact mapped bytes 0F 8E A5 00 00 00: jle 0x5861cb03
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, 2
        ; Exact mapped bytes 75 4B: jne 0x5861cab2
        __asm _emit 0x75
        __asm _emit 0x4b
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 93 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 60h], eax
        push 3
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 39 D5 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 68h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 15 F6 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 0a0h
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B1 A7 04 00: call 0x58667260
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 51: jmp 0x5861cb03
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        test ecx, ecx
        ; Exact mapped bytes 75 49: jne 0x5861cb03
        __asm _emit 0x75
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1C 93 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x93
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E6 D4 04 00: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 74h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 F5 E6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 0a0h
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 5E A7 04 00: call 0x58667260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
