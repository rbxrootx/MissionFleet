// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869C2C0 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_5869c2c0_5869C2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x5869c410
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 93 70 E2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx + 8]
        xor edx, 55h
        mov dword ptr [ebp - 14h], edx
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + eax]
        push edx
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + eax]
        push edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + ecx]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA 2D E6 FF: call 0x584ff0f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF AD E3 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xad
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 04 E6 FF: call 0x584fc740
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AB 78 00 00: call 0x586a3bf0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 86 DE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE AA F1 FF: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xaa
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 06 70 E2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add edi, 0cch
        mov ecx, 60h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 05 00 00: call 0x5869c890
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + edx]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 78: jge 0x5869c410
        __asm _emit 0x7d
        __asm _emit 0x78
        push 34h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 86 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 03 FA 11 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0x11
        __asm _emit 0x00
        push 34h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 86 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes E8 0B AE E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xae
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 0c8h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C5 53 E4 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2cch], edx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 99 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x99
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
