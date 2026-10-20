// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58708C30 .. +0x347 bytes.
extern "C" __declspec(naked) void FUN_58708c30_58708C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 0C 8A DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 80h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 7ch], 20h
        ; Exact mapped bytes 75 26: jne 0x58708c9b
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 78h], 1fh
        ; Exact mapped bytes 75 0C: jne 0x58708c8a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 78h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58708c99
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 78h], edx
        ; Exact mapped bytes EB 2C: jmp 0x58708cc7
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 7ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 78h], edx
        ; Exact mapped bytes 75 0C: jne 0x58708cb8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 78h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58708cc7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 78h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 78h], eax
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 77 89 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x58708e34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 64 89 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 8E 84 14 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 4A 89 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x89
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 77 E4 FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x77
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58708d2c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x58708e32
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov byte ptr [ebp - 2], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58708d46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 FF 88 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x58708e32
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 E4 88 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [eax + ecx]
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 75 2C: jne 0x58708daa
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x58708d9e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 C1 88 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, 1
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 0C: jne 0x58708daa
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58708e32
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 47: jle 0x58708df7
        __asm _emit 0x7e
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 95 88 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 30: jge 0x58708df7
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 7E 88 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [eax + ecx - 1]
        mov byte ptr [ebp - 2], dl
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 75 12: jne 0x58708df7
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, 20h
        ; Exact mapped bytes 75 09: jne 0x58708df7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 3B: jmp 0x58708e32
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 27h
        ; Exact mapped bytes 75 09: jne 0x58708e09
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 29: jmp 0x58708e32
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 09: jl 0x58708e1b
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7E 09: jle 0x58708e24
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 75 09: jne 0x58708e2d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 05: jmp 0x58708e32
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x58708d3d
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58708e3b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 44: je 0x58708e85
        __asm _emit 0x74
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 B4 76 DC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes E8 9F E3 DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 3e6h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 FF DC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE E2 DC FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 01 FC DC FF: call 0x584d8a80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58708f65
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 44: jne 0x58708ecf
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 6A 76 DC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes E8 55 E3 DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 3e5h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BF FE DC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 E2 DC FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B7 FB DC FF: call 0x584d8a80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x58708f65
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 2080h], 0
        ; Exact mapped bytes 75 38: jne 0x58708f13
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 6A 87 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        push 0
        push 0
        push 0ffffh
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 4A E7 FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 52: jmp 0x58708f65
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 BA D7 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xba
        __asm _emit 0xd7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x58708f65
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 23 87 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 BA D7 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xba
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E BB D7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbb
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        movzx edx, word ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 5B E7 FF: call 0x5857eaf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5b
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
