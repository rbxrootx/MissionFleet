// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862B8F0 .. +0x375 bytes.
extern "C" __declspec(naked) void FUN_5862b8f0_5862B8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 200h
        ; Exact mapped bytes 0F 85 C1 02 00 00: jne 0x5862bbca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 90 E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x90
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 9F E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5862b98b
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes E8 4F 9F E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9f
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5862b989
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 82 A5 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 04 19 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        push 0
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862b9b8
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 F7 9E E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862b9b8
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 29 A5 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa5
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 90 E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 42 9F E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5862ba3a
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes E8 A0 9E E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5862ba38
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D3 A4 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 03 19 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        push 0
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862ba67
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 48 9E E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862ba67
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7A A4 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 8F E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 93 9E E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5862bae9
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 F1 9D E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5862bae7
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 24 A4 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 02 19 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        push 0
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862bb16
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 99 9D E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862bb16
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CB A3 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 8E E5 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E4 9D E5 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5862bb98
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 42 9D E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x5862bb96
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 75 A3 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 02 19 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 54h], edx
        push 0
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862bbc5
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 EA 9C E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862bbc5
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 1C A3 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x5862bc5f
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 20ah
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x5862bc5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7E 07: jle 0x5862bbfd
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a4h]
        ; Exact mapped bytes E8 85 9C E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 1C: jne 0x5862bc2f
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x5862bc24
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 01 00 00: call 0x5862bd60
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5862bc2d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 00 00 00: call 0x5862bd10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 30: jmp 0x5862bc5f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 53 9C E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1A: jne 0x5862bc5f
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0B: je 0x5862bc56
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 01 00 00: call 0x5862be30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5862bc5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 01 00 00: call 0x5862bde0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
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
