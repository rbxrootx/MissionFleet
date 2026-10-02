// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534B00 .. +0x22B bytes.
extern "C" __declspec(naked) void FUN_58534b00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 06 02 00 00: je 0x58534d29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 2
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x58534c9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 0F 8E B2 00 00 00: jle 0x58534bef
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 52 F9 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        sub eax, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], eax
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x58534bda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 14: je 0x58534b7b
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 64h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 54: je 0x58534bd8
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 190h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        neg ecx
        add ecx, 12ch
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E9 8F 03 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x58534bea
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 05 F8 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x58534c9f
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x58534c9f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x58534c8f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 14: je 0x58534c30
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 64h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 54: je 0x58534c8d
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 190h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        neg ecx
        add ecx, 12ch
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 8F 03 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x58534c9f
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 04 F8 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58534cc0
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58534cc0
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x58534d29
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58534ce3
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58534cc9
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 09 F6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58534d07
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58534d29
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58534d27
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 09 F6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58534cc9
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
