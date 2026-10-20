// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864F990 .. +0xDCC bytes.
extern "C" __declspec(naked) void FUN_5864f990_5864F990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ech
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 57 0A 00 00: jne 0x5865040a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 0F 85 B8 01 00 00: jne 0x5864fb80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 AD D2 F1 FF: call 0x5856cc80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + 2dch], 0
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 1ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 DE 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 1dch], eax
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 BF 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 1e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 A0 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 154h]
        ; Exact mapped bytes E8 3E 5E E4 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5e
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5864fa79
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 1e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 68 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 178h]
        ; Exact mapped bytes E8 06 5E E4 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5e
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x5864fab1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 1e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 30 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 3
        ; Exact mapped bytes 75 60: jne 0x5864fb1d
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 100h], ecx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 04 63 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 104h], eax
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 E5 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 108h], edx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C6 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5E: jmp 0x5864fb7b
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 10ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A4 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 85 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 114h], edx
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 66 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 85 08 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1d0h]
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x5864fce1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 30 D2 F1 FF: call 0x5856cdd0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + 2dch], 1
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 118h], ecx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 11 62 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 11ch], eax
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 F2 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 120h], edx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 D3 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 154h]
        ; Exact mapped bytes E8 71 5C E4 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5c
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x5864fc46
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 124h], eax
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 9B 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 178h]
        ; Exact mapped bytes E8 39 5C E4 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5c
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x5864fc7e
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 128h], ecx
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 63 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 12ch], eax
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 43 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 250h]
        mov dword ptr [ebp - 130h], edx
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 24 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 254h]
        mov dword ptr [ebp - 134h], ecx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 05 61 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 24 07 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0dch]
        ; Exact mapped bytes 75 43: jne 0x5864fd35
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 13ch], eax
        push 0
        push 0f232h
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes FF 95 C4 FE FF FF: call dword ptr [ebp - 0x13c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 06 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 210h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5864fdd1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 144h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 53 0E 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0B 18 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 18 0E 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 D0 17 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x17
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 35 21 00 00: call 0x58651f00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 34 06 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 214h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5864fe6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 214h]
        ; Exact mapped bytes E8 B7 0D 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 6F 17 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 15ch], ecx
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 214h]
        ; Exact mapped bytes E8 7C 0D 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 158h], eax
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 34 17 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x17
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 99 20 00 00: call 0x58651f00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 98 05 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 218h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5864ff09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 218h]
        ; Exact mapped bytes E8 1B 0D 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 D3 16 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 218h]
        ; Exact mapped bytes E8 E0 0C 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0c
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 98 16 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 FD 1F 00 00: call 0x58651f00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FC 04 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 24ch]
        ; Exact mapped bytes 75 50: jne 0x5864ff6a
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 0e8h]
        mov byte ptr [ecx + 2dah], 1
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 174h], ecx
        push 0
        push 0f231h
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9B 04 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x5865009b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 234h]
        ; Exact mapped bytes E8 50 A2 E5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0xe5
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
        ; Exact mapped bytes 0F 8E F7 00 00 00: jle 0x58650096
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 234h]
        ; Exact mapped bytes E8 30 A2 E5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa2
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 54 10 00 00: call 0x58651010
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x58650096
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 EB 0B 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0b
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 71 09 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 4D 09 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 29 09 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + edx + 1dch]
        mov dword ptr [ebp - 188h], ecx
        mov ecx, dword ptr [ebp - 0e8h]
        add ecx, 21ch
        ; Exact mapped bytes E8 CE 81 E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 06 B1 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 5B 10 00 00: call 0x586510f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A 03 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 254h]
        ; Exact mapped bytes 75 50: jne 0x586500fc
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 0e8h]
        mov byte ptr [edx + 2dah], 2
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 190h], edx
        push 1
        push 0f231h
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes FF 95 70 FE FF FF: call dword ptr [ebp - 0x190]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 134h]
        ; Exact mapped bytes 75 27: jne 0x58650134
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 DE 70 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x70
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        push 0
        push 0
        push 0
        push 130h
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 92 16 E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D1 02 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 154h]
        ; Exact mapped bytes 75 5C: jne 0x586501a1
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 3
        ; Exact mapped bytes 75 4B: jne 0x5865019c
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 0e8h]
        mov byte ptr [eax + 2dah], 4
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 198h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 19ch], eax
        push 1
        push 0f231h
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 2ech]
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x586502bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 F7 00 00 00: jbe 0x586502ba
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov byte ptr [ecx + 2fch], 1
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + 2f4h], 0
        mov dword ptr [ebp - 0f4h], 0
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 C1 67 E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x67
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 197h
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 9B BE E3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 7dh
        mov dword ptr [ebp - 0f0h], eax
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 1a0h], ecx
        ; Exact mapped bytes 8B 15 20 06 96 58: mov edx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 5E 97 F3 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 1cch], ecx
        push 588af4cch
        ; Exact mapped bytes E8 92 1D ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], edx
        lea eax, [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 F6 93 F3 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ecx + 2e8h]
        mov eax, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 2e8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x58650405
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 2f0h]
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x58650405
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x586503e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        mov byte ptr [ecx + 2fch], 2
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + 2f8h], 0
        mov dword ptr [ebp - 0fch], 0
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 A0 66 E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x66
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 197h
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 7A BD E3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 7dh
        mov dword ptr [ebp - 0f8h], eax
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 1b0h], ecx
        ; Exact mapped bytes 8B 15 20 06 96 58: mov edx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 3D 96 F3 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2e8h]
        mov dword ptr [ebp - 1bch], ecx
        push 588af4f0h
        ; Exact mapped bytes E8 71 1C ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 300h]
        mov dword ptr [ebp - 1b8h], eax
        lea ecx, [ebp - 0fch]
        push ecx
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        push ecx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 CF 92 F3 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 2e8h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 2e8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x58650405
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 08 6E E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 0
        push 0
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 6C 89 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 03 00 00: jmp 0x5865074a
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 F9 01 00 00: jne 0x58650610
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE 6B E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x58650593
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e8h]
        movzx edx, byte ptr [ecx + 2dah]
        cmp edx, 1
        ; Exact mapped bytes 75 65: jne 0x586504a2
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 234h]
        ; Exact mapped bytes E8 92 9D E5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 6B E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 08 FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 9ch]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 0b4h]
        push eax
        ; Exact mapped bytes 8B 0D 34 05 96 58: mov ecx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 C8 F2 FF: call 0x5857cd30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc8
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x58650591
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e8h]
        movzx ecx, byte ptr [eax + 2dah]
        cmp ecx, 2
        ; Exact mapped bytes 75 61: jne 0x58650515
        __asm _emit 0x75
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [edx + 234h]
        ; Exact mapped bytes E8 1B 9D E5 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9d
        __asm _emit 0xe5
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 0e4h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 6A E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B 08 FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 0e4h]
        push edx
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE CE F2 FF: call 0x5857d400
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xce
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7C: jmp 0x58650591
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 0e8h]
        movzx eax, byte ptr [edx + 2dah]
        cmp eax, 3
        ; Exact mapped bytes 75 2D: jne 0x58650554
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 6A E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E7 07 FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 1c4h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F CE F2 FF: call 0x5857d3a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xce
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x58650591
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 0e8h]
        movzx eax, byte ptr [edx + 2dah]
        cmp eax, 4
        ; Exact mapped bytes 75 2B: jne 0x58650591
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 6A E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A8 07 FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 CB F2 FF: call 0x5857d0b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x5865060b
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes 75 6D: jne 0x5865060b
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 0d4h]
        ; Exact mapped bytes E8 01 52 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x52
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0e8h]
        sub eax, dword ptr [ecx + 2f8h]
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 79 24: jns 0x586505e7
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes E8 28 6C E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        push 0
        push 0
        push 0
        push 481h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 8C 87 E8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x5865060b
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2f8h]
        push ecx
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 E9 F2 FF: call 0x5857efa0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x5865074a
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f235h
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x5865074a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 E0 C7 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc7
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0e8h]
        movzx edx, byte ptr [ecx + 2fch]
        cmp edx, 1
        ; Exact mapped bytes 75 7C: jne 0x586506c1
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 2f4h], ecx
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 2f4h]
        push eax
        push 588af514h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx + 2e8h]
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 2e8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E8 56 6B E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 0
        push 0
        lea ecx, [ebp - 84h]
        push ecx
        push 142h
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 05 11 E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x5865074a
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0e8h]
        movzx eax, byte ptr [edx + 2fch]
        cmp eax, 2
        ; Exact mapped bytes 75 77: jne 0x5865074a
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 0e8h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 2f8h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2f8h]
        push ecx
        push 588af518h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 0e8h]
        mov ecx, dword ptr [eax + 2e8h]
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 2e8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E8 C8 6A E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        push 0
        push 0
        lea eax, [ebp - 84h]
        push eax
        push 143h
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 77 10 E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x10
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 FA 08 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x08
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
