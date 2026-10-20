// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586361B0 .. +0x38A bytes.
extern "C" __declspec(naked) void FUN_586361b0_586361B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 F9 71 ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586361dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 4C 03 00 00: jge 0x58636532
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 7C AA 18 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xaa
        __asm _emit 0x18
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 94h]
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x58636315
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18bh]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E D2 00 00 00: jle 0x586362f4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 18h], eax
        push 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A8 69 F1 FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x69
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 DE 79 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5F 34 F1 FF: call 0x585496c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D7 69 F1 FF: call 0x5854cc50
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x69
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 28h], eax
        push 1
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 89 0A F1 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 17ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18bh]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4E 36 F1 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 174h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BF 32 F1 FF: call 0x585495b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58636310
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 F7 0E EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 479h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 61 2A EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 18 02 00 00: jmp 0x5863652d
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0a0h]
        ; Exact mapped bytes 75 45: jne 0x5863636c
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 CB 78 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 E4 78 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x78
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
        ; Exact mapped bytes E8 5A 73 F4 FF: call 0x5857d6c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x73
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x5863652d
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 0c4h]
        ; Exact mapped bytes 0F 85 AB 01 00 00: jne 0x5863652d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 69 78 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + edx*4]
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
        ; Exact mapped bytes E8 C1 09 EC FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 40 78 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4 + 80h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x586363e2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 0a2h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x586363e9
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x58636534
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 0D 00 00: call 0x58637100
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 18dh]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x58636511
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
        ; Exact mapped bytes E8 A7 67 F1 FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x67
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 DD 77 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x77
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 5E 32 F1 FF: call 0x585496c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D6 67 F1 FF: call 0x5854cc50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x67
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 54h], edx
        push 0
        push 0
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 88 08 F1 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 50 67 F1 FF: call 0x5854cc00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x67
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 36 77 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x77
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4 + 100h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 4D 67 F1 FF: call 0x5854cc30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x67
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
        ; Exact mapped bytes E8 02 34 F1 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x34
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863652d
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 DA 0C EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 479h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 44 28 EA FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 FC FF FF: jmp 0x586361d3
        __asm _emit 0xe9
        __asm _emit 0xa1
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
