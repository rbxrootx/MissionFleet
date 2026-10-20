// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584570 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_58584570_58584570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1db8h]
        ; Exact mapped bytes E8 39 24 F0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58584597
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 7B F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x58584784
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 79 F0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C B6 F1 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb6
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 01 00 00: je 0x5858477f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x5858468f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 8A F2 FF: call 0x584ad020
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x5858467f
        __asm _emit 0x74
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x58584644
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ecx], 0bh
        ; Exact mapped bytes 75 0B: jne 0x58584644
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 99 1D 00: call 0x5875df70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x99
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 BC F2 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x5858467f
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 7A F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1db8h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5D 7C F7 FF: call 0x584fc2d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x5858467f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x58584784
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 05: jne 0x5858468a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x58584784
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x5858477f
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 23 F0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 7A F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7a
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 38h]
        imul edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 34h]
        imul eax, dword ptr [ebp - 34h]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x5858477f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 40 C9 2C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 A8 CB 2A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcb
        __asm _emit 0x2a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 D6 FC F5 FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 0
        push -1
        push 2
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 88 F2 FF: call 0x584ad020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5858477f
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 BB F2 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5858477f
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 55 79 F0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1db8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5A 7B F7 FF: call 0x584fc2d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 02: jne 0x5858477f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58584784
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x5858458c
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
