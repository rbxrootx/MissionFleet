// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586167C0 .. +0x45C bytes.
extern "C" __declspec(naked) void FUN_586167c0_586167C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
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
        ; Exact mapped bytes 0F 84 37 04 00 00: je 0x58616c1a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x04
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
        ; Exact mapped bytes 75 05: jne 0x586167ff
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 03 00 00: jmp 0x58616b90
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x03
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
        ; Exact mapped bytes 0F 85 E1 01 00 00: jne 0x586169fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x5861683a
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5861694f
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
        ; Exact mapped bytes 7E 58: jle 0x586168b6
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x586168b6
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x586168a3
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x586168a3
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x5861687f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5861689b
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x5861688e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58616895
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586168ae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0F: jmp 0x586168c5
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
        ; Exact mapped bytes 7E 58: jle 0x58616929
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x58616929
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x58616916
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x58616916
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x586168f2
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5861690e
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x58616901
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58616908
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58616921
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58616938
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
        ; Exact mapped bytes E8 82 E8 19 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x586169f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x586169f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 E1 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
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
        ; Exact mapped bytes E8 E3 E0 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 0B 54 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x54
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
        ; Exact mapped bytes E8 BE E0 E6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 6ch], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
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
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x58616b90
        __asm _emit 0xe9
        __asm _emit 0x95
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
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x58616b90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x58616a36
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58616b4b
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
        ; Exact mapped bytes 7E 58: jle 0x58616ab2
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 52: jge 0x58616ab2
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], -4
        ; Exact mapped bytes 7E 39: jle 0x58616a9f
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 33: jge 0x58616a9f
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x58616a7b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58616a97
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x58616a8a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 07: jmp 0x58616a91
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58616aaa
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58616ac1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 10h], -8
        ; Exact mapped bytes 7E 58: jle 0x58616b25
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 52: jge 0x58616b25
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 10h], -4
        ; Exact mapped bytes 7E 39: jle 0x58616b12
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 33: jge 0x58616b12
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x58616aee
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58616b0a
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x58616afd
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 1
        ; Exact mapped bytes EB 07: jmp 0x58616b04
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x58616b1d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58616b34
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 E6 19 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 75 37: jne 0x58616b90
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 29: jne 0x58616b90
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
        ; Exact mapped bytes E8 01 F4 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58616bb1
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58616bb1
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5A: je 0x58616c1a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58616bd4
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x58616bba
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 EA E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58616bf8
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
        ; Exact mapped bytes EB 24: jmp 0x58616c1a
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58616c18
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 10 EA E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB A0: jmp 0x58616bba
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
