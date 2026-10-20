// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58709D20 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_58709d20_58709D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 1C 79 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x79
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
        test eax, eax
        ; Exact mapped bytes 0F 8E 15 02 00 00: jle 0x58709f58
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 FB 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x58709eb0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 E8 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 12 74 14 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 CE 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x78
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 66 E4 FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x66
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58709da8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x58709eae
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov byte ptr [ebp - 2], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58709dc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 83 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x78
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
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x58709eae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 68 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x78
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
        ; Exact mapped bytes 75 2C: jne 0x58709e26
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x58709e1a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 45 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x78
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
        ; Exact mapped bytes 75 0C: jne 0x58709e26
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58709eae
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 47: jle 0x58709e73
        __asm _emit 0x7e
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 19 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x78
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
        ; Exact mapped bytes 7D 30: jge 0x58709e73
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 02 78 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x78
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
        ; Exact mapped bytes 75 12: jne 0x58709e73
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 4D FE: movsx ecx, byte ptr [ebp - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xfe
        cmp ecx, 20h
        ; Exact mapped bytes 75 09: jne 0x58709e73
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 3B: jmp 0x58709eae
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 27h
        ; Exact mapped bytes 75 09: jne 0x58709e85
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 29: jmp 0x58709eae
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 09: jl 0x58709e97
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7E 09: jle 0x58709ea0
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 75 09: jne 0x58709ea9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 05: jmp 0x58709eae
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x58709db9
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x58709eb7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 29: je 0x58709ee6
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 38 66 DC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes E8 23 D3 DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 3e6h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8D EE DC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 72: jmp 0x58709f58
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 29: jne 0x58709f15
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 09 66 DC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x66
        __asm _emit 0xdc
        __asm _emit 0xff
        ; Exact mapped bytes E8 F4 D2 DC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 3e5h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5E EE DC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x58709f58
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 30 77 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 AA D7 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaa
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B AB D7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xab
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
        mov ecx, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes E8 99 4B E7 FF: call 0x5857eaf0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4b
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
