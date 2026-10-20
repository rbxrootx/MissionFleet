// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FF8B0 .. +0x2D4 bytes.
extern "C" __declspec(naked) void FUN_586ff8b0_586FF8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        ; Exact mapped bytes E8 C9 5F D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x586ff8e3
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 B4 5F D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x586ff915
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 19ch]
        ; Exact mapped bytes E8 9F 5F D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 84 02 00 00: jne 0x586ffb80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 86 5F D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 6B 02 00 00: je 0x586ffb80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 19ch]
        ; Exact mapped bytes E8 6D 5F D9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x586ffaf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 72 05 00: call 0x58756b80
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B0 01 00 00: je 0x586ffaf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ch
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x586ff9f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 25 EF FF: call 0x585f1f20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x586ff9f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC EC E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xec
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 66 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x66
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 190h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ff9cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586ff9f2
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a8h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 65 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x65
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586ff9c6
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x586ffaf1
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 50 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A4 C3 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 50 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        push 7
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 50 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5C C3 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 50 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9eh]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 EE E7 FF: call 0x5857e910
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D2 64 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x64
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 190h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 194h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x586ffb80
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 10: jne 0x586ffb15
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E EB E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x586ffb37
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A EE E7 FF: call 0x5857e940
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 190h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 194h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 11 64 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x64
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
