// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736CC0 .. +0x38C bytes.
extern "C" __declspec(naked) void FUN_58736cc0_58736CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 62 03 00 00: je 0x58737037
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 C6 D8 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add edi, 220h
        mov ecx, 60h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 F2 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 50h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FC F1 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        xor ecx, 55555555h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 278h]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 D2 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 2E 02 00 00: mov ax, word ptr [edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 ED 43 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 2E 02 00 00: mov ax, word ptr [edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        cmp dword ptr [edx + eax + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D C4 00 00 00: jge 0x58736ea4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 12dh
        push edx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 DC D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xdc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F1 F0 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0c6h
        push edx
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 DC D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xdc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 92 F0 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x58736f63
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0e1h
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C DC D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xdc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2D F0 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 2E 02 00 00: mov cx, word ptr [eax + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 274h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 0afh
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD DB D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CE EF D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xef
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 27ch]
        xor edx, 55555555h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 278h]
        xor ecx, 55555555h
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 70 D0 DC FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 278h]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C7 41 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 78h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 27ch]
        xor edx, 55555555h
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 9E 41 08 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 2E 02 00 00: mov ax, word ptr [edx + 0x22e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 0B: shr ax, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 27 88 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ach
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 6C F0 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x58737044
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
