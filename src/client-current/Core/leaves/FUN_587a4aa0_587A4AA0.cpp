// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4AA0 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_587a4aa0_587A4AA0() {
    __asm {
        sub esp, 464h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 460h], eax
        push ebx
        mov ebx, dword ptr [esp + 474h]
        push esi
        mov esi, dword ptr [esp + 470h]
        push edi
        mov edi, dword ptr [esp + 478h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x587a4bed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 480h]
        cmp edx, 84h
        ; Exact mapped bytes 0F 82 11 01 00 00: jb 0x587a4bf8
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebx]
        movzx eax, byte ptr [ebx + 1]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [ebx + 2]
        shl ecx, 8
        add ecx, eax
        movzx eax, byte ptr [ebx + 3]
        shl ecx, 8
        add ecx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x587a4c03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebx + 8], 3
        ; Exact mapped bytes 76 09: jbe 0x587a4b1c
        __asm _emit 0x76
        __asm _emit 0x09
        test dl, 3
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x587a4c0e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 418h]
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 15 C0 FF FF: call 0x587a0b40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x587a4c19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        cmp edi, 51h
        ; Exact mapped bytes 0F 83 A6 00 00 00: jae 0x587a4be8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 480h]
        mov byte ptr [esp + edi + 418h], 0
        inc edi
        mov dword ptr [esp + 10h], eax
        lea eax, [esp + 0ch]
        push edi
        push eax
        push 69434350h
        push esi
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes E8 4D E5 FF FF: call 0x587a30c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x587a4c24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        add eax, edi
        push eax
        push 69434350h
        push esi
        ; Exact mapped bytes E8 D0 F1 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 25: je 0x587a4bbc
        __asm _emit 0x74
        __asm _emit 0x25
        test edi, edi
        ; Exact mapped bytes 74 21: je 0x587a4bbc
        __asm _emit 0x74
        __asm _emit 0x21
        push edi
        lea eax, [esp + 41ch]
        push eax
        push esi
        ; Exact mapped bytes E8 16 1D 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [esp + 428h]
        push eax
        push esi
        ; Exact mapped bytes E8 F7 A9 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        lea eax, [esp + 0ch]
        push eax
        push esi
        ; Exact mapped bytes E8 E9 F2 FF FF: call 0x587a3eb0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 43 F1 FF FF: call 0x587a3d10
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 478h]
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 6F C4 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 464h
        ret
        ; Exact mapped bytes E8 BC C5 08 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        push 588b8c4ch
        push esi
        ; Exact mapped bytes E8 88 A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8c68h
        push esi
        ; Exact mapped bytes E8 7D A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8c80h
        push esi
        ; Exact mapped bytes E8 72 A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8c98h
        push esi
        ; Exact mapped bytes E8 67 A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8ccch
        push esi
        ; Exact mapped bytes E8 5C A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 9ch]
        push esi
        ; Exact mapped bytes E8 50 A2 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
