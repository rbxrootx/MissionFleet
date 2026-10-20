// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58649070 .. +0x8F3 bytes.
extern "C" __declspec(naked) void FUN_58649070_58649070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 74 1B: je 0x586490af
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 0F 85 AF 08 00 00: jne 0x5864995e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 264h]
        mov dword ptr [ebp - 2ch], ecx
        push 588af21ch
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 96 CF E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcf
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
        cmp edx, 6
        ; Exact mapped bytes 75 4F: jne 0x58649166
        __asm _emit 0x75
        __asm _emit 0x4f
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58649129
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 74 37: je 0x58649166
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 19ch]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 97 CD E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1b0h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7D CD E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58649120
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 3
        ; Exact mapped bytes 75 4F: jne 0x586491c1
        __asm _emit 0x75
        __asm _emit 0x4f
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58649184
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 74 37: je 0x586491c1
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 19ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3C CD E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 22 CD E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcd
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5864917b
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 69 66 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x66
        __asm _emit 0xe5
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
        cmp edx, 6
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x58649288
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 44h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 42 66 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x66
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CC CC E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B6 CC E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 00 66 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x66
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EA 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D4 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 5ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 BE 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58649323
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A2 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2C CC E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xcc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 68h], ecx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 16 CC E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcc
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 27ch]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 60 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 280h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 4A 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 34 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1E 65 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 20ch]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D FF E6 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 79 FE FF: call 0x58630d40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 34 1E 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        ; Exact mapped bytes E8 4E 75 17 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 244h]
        ; Exact mapped bytes E8 40 75 17 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 248h]
        ; Exact mapped bytes E8 32 75 17 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586493a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 74 43: je 0x586493ea
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586493b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 29: jge 0x586493e8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 218h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 5B 64 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x64
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x586493b0
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes EB AE: jmp 0x58649398
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586493fc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20ch]
        ; Exact mapped bytes E8 9D C3 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc3
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 84 7E 02 00 00: je 0x5864969a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 FE E6 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 14 F7 01 00: call 0x58668b50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 F9 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 75 3B: jne 0x58649489
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 90h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7B 00 E7 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 777777h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 9A 70 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 39: jmp 0x586494c2
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 98h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 40 00 E7 FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 0ffffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 5F 70 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 26 F9 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 0F 87 44 01 00 00: ja 0x5864961e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 85 64 99 64 58: jmp dword ptr [eax*4 + 0x58649964]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0a0h], edx
        push 588af220h
        ; Exact mapped bytes E8 F3 8A ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        push 777777h
        push 0
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 01 70 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x5864961e
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0a8h], edx
        push 588af240h
        ; Exact mapped bytes E8 B2 8A ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 C0 6F 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5864961e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0b0h], edx
        push 588af264h
        ; Exact mapped bytes E8 71 8A ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 7F 6F 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7A: jmp 0x5864961e
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0b8h], edx
        push 588af288h
        ; Exact mapped bytes E8 33 8A ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 41 6F 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x5864961e
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 0c0h], edx
        push 588af2ach
        ; Exact mapped bytes E8 F5 89 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 03 6F 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA F7 FF FF: call 0x58648df0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 75 29: jne 0x58649656
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 0c4h], eax
        push 0ffffffh
        push -1
        push 588af21dh
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 CD 6E 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3F: jmp 0x58649695
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 0cch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 00 F4 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 0ffffffh
        push 0
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 94 6E 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 59 FD FF FF: jmp 0x586493f3
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CF 1A 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        ; Exact mapped bytes E8 70 EB E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xeb
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x586497ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        mov dword ptr [ebp - 0d4h], ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 8A E9 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x5864970b
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea eax, [ebp - 10ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 76 E3 E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe3
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        mov dword ptr [ebp - 0d8h], ecx
        lea edx, [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 64 EA E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 9B E2 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x586497ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 0e0h], edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E9 E2 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0dch], eax
        push 83add7h
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A8 6D 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 0e4h], eax
        push 0ffffffh
        push -1
        push 588af21eh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 82 6D 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 0e8h], edx
        push 0ffffffh
        push -1
        push 588af21fh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 5C 6D 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6d
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x586496f9
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        ; Exact mapped bytes E8 68 17 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x586498d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 190h
        mov dword ptr [ebp - 0ech], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 83 E8 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 12: jmp 0x58649812
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0
        lea edx, [ebp - 114h]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 FF D3 FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 190h
        mov dword ptr [ebp - 0f0h], eax
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 5E E9 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 95 E1 E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe1
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x586498d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 0f8h], ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E3 E1 E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe1
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 2dh
        mov dword ptr [ebp - 0f4h], eax
        push 83add7h
        push 0
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 A1 6C 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 0fch], ecx
        push 0ffffffh
        push -1
        push 588af262h
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 7B 6C 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 100h], eax
        push 0ffffffh
        push -1
        push 588af263h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 55 6C 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x58649800
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 F5 FF FF: call 0x58648e10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 20ch]
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24ch
        ; Exact mapped bytes E8 42 E9 E3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 190h
        ; Exact mapped bytes E8 32 16 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        mov dword ptr [ebp - 104h], esi
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 68 18 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 32ch], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 309h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1e4h], 0
        push 58960530h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 34 F3 FF: call 0x5857cd60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
