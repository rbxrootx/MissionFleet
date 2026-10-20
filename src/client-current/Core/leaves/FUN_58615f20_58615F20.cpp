// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58615F20 .. +0x65B bytes.
extern "C" __declspec(naked) void FUN_58615f20_58615F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 33 06 00 00: je 0x58616579
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
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
        cmp edx, 2
        ; Exact mapped bytes 75 05: jne 0x58615f62
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 05 00 00: jmp 0x586164e9
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
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
        cmp edx, 1
        ; Exact mapped bytes 0F 85 8A 03 00 00: jne 0x58616307
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x58615f9d
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x586160b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x58616019
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x58616019
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x58616006
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x58616006
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x58615fe2
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58615ffe
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x58615ff1
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58615ff8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58616011
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58616028
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5861608c
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5861608c
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x58616079
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x58616079
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x58616055
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58616071
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x58616064
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5861606b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58616084
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5861609b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F F1 19 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x586161d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 76 F7 E9 FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x586160fa
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5F F0 E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 4C F0 E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x586161d0
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x586161d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x586161d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 10 EC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 8
        ; Exact mapped bytes 74 7D: je 0x586161b2
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 10 EC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 9
        ; Exact mapped bytes 74 66: je 0x586161b2
        __asm _emit 0x74
        __asm _emit 0x66
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 E9 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 30h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A E9 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 32 5C 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5c
        __asm _emit 0x1a
        __asm _emit 0x00
        push 30h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 E8 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 55 84: call dword ptr [ebp - 0x7c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x84
        nop
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
        mov eax, 200h
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
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x58616302
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 E0 E7 E6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x58616216
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 80h], edx
        push -1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 49 EF E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 84h], ecx
        push -1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 30 EF E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xef
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x58616302
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58616302
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x58616302
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 0F EC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        movzx edx, word ptr [eax + 84h]
        cmp edx, 8
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x586162e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 0F EC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 9
        ; Exact mapped bytes 74 78: je 0x586162e4
        __asm _emit 0x74
        __asm _emit 0x78
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 E8 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 30h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA E7 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 06 5B 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5b
        __asm _emit 0x1a
        __asm _emit 0x00
        push 30h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 E7 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
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
        mov eax, 200h
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
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x586164e9
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 C7 01 00 00: jne 0x586164e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x58616342
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58616457
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 14h], -8
        ; Exact mapped bytes 7E 58: jle 0x586163be
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 52: jge 0x586163be
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], -4
        ; Exact mapped bytes 7E 39: jle 0x586163ab
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 33: jge 0x586163ab
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x58616387
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586163a3
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x58616396
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5861639d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586163b6
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 0F: jmp 0x586163cd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 10h], -8
        ; Exact mapped bytes 7E 58: jle 0x58616431
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 52: jge 0x58616431
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 10h], -4
        ; Exact mapped bytes 7E 39: jle 0x5861641e
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 33: jge 0x5861641e
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x586163fa
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58616416
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x58616409
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 5ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58616410
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58616429
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58616440
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A ED 19 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xed
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 44: je 0x586164a4
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 55 E5 E6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe5
        __asm _emit 0xe6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x586164a4
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 94h], ecx
        push -1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 B8 EC E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 98h], eax
        push -1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 9F EC E9 FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 45: jmp 0x586164e9
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 75 37: jne 0x586164e9
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 29: jne 0x586164e9
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 FA E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfa
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5861650a
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5861650a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 60: je 0x58616579
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5861652d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x58616513
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DB F0 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58616551
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58616579
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x58616577
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B7 F0 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 9A: jmp 0x58616513
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
