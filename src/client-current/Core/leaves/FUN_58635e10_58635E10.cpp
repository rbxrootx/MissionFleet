// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58635E10 .. +0x392 bytes.
extern "C" __declspec(naked) void FUN_58635e10_58635E10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 99 75 ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58635e3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 54 03 00 00: jge 0x5863619a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 1C AE 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xae
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0ach]
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x58635f75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x58635f54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 94 7D ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 15 38 F1 FF: call 0x585496c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D 6D F1 FF: call 0x5854cc50
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 24h], ecx
        push 2
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 07 6D F1 FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 28h], eax
        push 2
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C1 36 F1 FF: call 0x585495b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 13 0E F1 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 180h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18ch]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D8 39 F1 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 174h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58635f70
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 97 12 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 479h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 01 2E EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 20 02 00 00: jmp 0x58636195
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0b8h]
        ; Exact mapped bytes 75 49: jne 0x58635fd0
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 6B 7C ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4 + 180h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 80 7C ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 76 F4 FF: call 0x5857d690
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x76
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x58636195
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 0d0h]
        ; Exact mapped bytes 0F 85 AF 01 00 00: jne 0x58636195
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 05 7C ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + edx*4 + 180h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 0D EC FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 D8 7B ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4 + 200h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x5863604a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 0a2h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x58636051
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x5863619c
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 10 00 00: call 0x58637100
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18dh]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x58636179
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 174h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 44h], edx
        push 2
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3F 6B F1 FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 75 7B ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F6 35 F1 FF: call 0x585496c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x35
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6E 6B F1 FF: call 0x5854cc50
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 54h], edx
        push 1
        push 0
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 20 0C F1 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E8 6A F1 FF: call 0x5854cc00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 CE 7A ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x7a
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4 + 280h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E5 6A F1 FF: call 0x5854cc30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18dh]
        push eax
        push 0bh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 9A 37 F1 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58636195
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 72 10 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 479h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 DC 2B EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 99 FC FF FF: jmp 0x58635e33
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
