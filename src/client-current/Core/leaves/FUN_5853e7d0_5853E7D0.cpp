// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853E7D0 .. +0x315 bytes.
extern "C" __declspec(naked) void FUN_5853e7d0_5853E7D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 1
        ; Exact mapped bytes 75 0B: jne 0x5853e808
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x5853e986
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x5853e833
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 74 2A: je 0x5853e852
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 74 63: je 0x5853e891
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5853e8cd
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 588a7e58h
        push 588a7e64h
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5853e92a
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 61 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 6F F5 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E 61 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 61 F4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 0d6h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x5853e92a
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D 6F F5 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 61 F4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [eax + ecx + 0d6h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 5D: jmp 0x5853e92a
        __asm _emit 0xeb
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4D E7 F4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D8 60 F4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        add eax, 0dah
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 270h]
        shl ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 2ch]
        movzx eax, word ptr [edx]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x5853e962
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D2 77 00 00: call 0x58546120
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 24h]
        imul edx, dword ptr [ebp + 0ch], 3e8h
        sub eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 24: jmp 0x5853e986
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 60 F4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A6 77 00 00: call 0x58546120
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 0ch], 3e8h
        sub eax, ecx
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 78 02 00 00: movsx eax, word ptr [edx + 0x278]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x5853eaa6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 7C 25: jl 0x5853e9ca
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ecx, 4
        imul edx, ecx, 2ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 30h], ecx
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 19 77 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x77
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853e9f3
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, 4
        imul eax, edx, 2ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 34h], edx
        push 0eeh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F4 76 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 25: jl 0x5853ea1e
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, 4
        imul ecx, eax, 2dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 38h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C5 76 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853ea47
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, 4
        imul edx, ecx, 2dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 3ch], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A0 76 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7F 25: jg 0x5853ea7d
        __asm _emit 0x7f
        __asm _emit 0x25
        mov eax, 4
        imul ecx, eax, 2eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 40h], eax
        push 0eeeeeeh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 66 76 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5853eaa6
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, 4
        imul edx, ecx, 2eh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 44h], ecx
        push 0eeh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 41 76 F4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 3
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x5853eac5
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7E 0D F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5853eadc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 65 0D F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
