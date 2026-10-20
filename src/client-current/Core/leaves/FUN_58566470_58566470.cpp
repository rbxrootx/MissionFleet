// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58566470 .. +0x320 bytes.
extern "C" __declspec(naked) void FUN_58566470_58566470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 138h], edx
        mov edi, dword ptr [ebp - 4]
        add edi, 18ch
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 18eh]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18ch]
        cmp eax, 5
        ; Exact mapped bytes 75 41: jne 0x58566501
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18dh]
        test edx, edx
        ; Exact mapped bytes 75 33: jne 0x58566501
        __asm _emit 0x75
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 1b1h
        ; Exact mapped bytes 74 1B: je 0x585664f2
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 8], 247h
        ; Exact mapped bytes 74 12: je 0x585664f2
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 248h
        ; Exact mapped bytes 74 09: je 0x585664f2
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 8], 367h
        ; Exact mapped bytes 75 0F: jne 0x58566501
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 25ch], 1
        ; Exact mapped bytes EB 0D: jmp 0x5856650e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 25ch], 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 18ch]
        cmp eax, 5
        ; Exact mapped bytes 75 2D: jne 0x5856654a
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 18dh]
        test edx, edx
        ; Exact mapped bytes 75 1F: jne 0x5856654a
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0a0h]
        cmp ecx, 0c1ch
        ; Exact mapped bytes 7C 0D: jl 0x5856654a
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 25ch], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d8h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 190h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 58 E5 F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D9 06 F2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3d8h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A3 F8 F1 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 22ah]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 154h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 158h], 55555555h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 03 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 6D: jne 0x58566646
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 1A: je 0x585665ff
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        push ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 59 11 00: call 0x5867bfc0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58566606
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 1B: jne 0x5856662d
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 314h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 158h], ecx
        ; Exact mapped bytes EB 19: jmp 0x58566646
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 3c8h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 158h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 DC FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 24 02 00 00: mov cx, word ptr [eax + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 0A 00 00: call 0x58567110
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 26 02 00 00: mov cx, word ptr [eax + 0x226]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA DF FF FF: call 0x58564660
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 F7 FF FF: call 0x58565e30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 88 4C 02 00 00: mov word ptr [eax + 0x24c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 5dch
        ; Exact mapped bytes 7E 0F: jle 0x585666bc
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], 3
        ; Exact mapped bytes EB 72: jmp 0x5856672e
        __asm _emit 0xeb
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 22ch]
        cmp eax, 3e8h
        ; Exact mapped bytes 7C 21: jl 0x585666ee
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 22ch]
        cmp edx, 5dch
        ; Exact mapped bytes 7F 0F: jg 0x585666ee
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], 2
        ; Exact mapped bytes EB 40: jmp 0x5856672e
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 22ch]
        cmp edx, 1f4h
        ; Exact mapped bytes 7E 21: jle 0x58566721
        __asm _emit 0x7e
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 22ch]
        cmp ecx, 3e8h
        ; Exact mapped bytes 7D 0F: jge 0x58566721
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5856672e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 254h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 258h], 15h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 243e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 06 F9 FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 15: je 0x5856677b
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 9eh]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 243e8h], eax
        ; Exact mapped bytes EB 0D: jmp 0x58566788
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 243e8h], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
