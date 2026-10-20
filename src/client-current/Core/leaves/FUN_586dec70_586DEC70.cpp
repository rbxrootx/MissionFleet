// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DEC70 .. +0x844 bytes.
extern "C" __declspec(naked) void FUN_586dec70_586DEC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c0h
        push esi
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
        ; Exact mapped bytes 0F 84 1A 08 00 00: je 0x586df4b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x08
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
        ; Exact mapped bytes 74 1B: je 0x586decc9
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
        ; Exact mapped bytes 0F 85 7A 02 00 00: jne 0x586def43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x586dece9
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x586dedfe
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
        ; Exact mapped bytes 7E 58: jle 0x586ded65
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x586ded65
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x586ded52
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x586ded52
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x586ded2e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586ded4a
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x586ded3d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 07: jmp 0x586ded44
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586ded5d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 0F: jmp 0x586ded74
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x586dedd8
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x586dedd8
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x586dedc5
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x586dedc5
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x586deda1
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x586dedbd
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x586dedb0
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x586dedb7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0B: jmp 0x586dedd0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0F: jmp 0x586dede7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 63 0D 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 50h]
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x586def43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x586def43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x586deee2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov ecx, 200h
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 174h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 170h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 6A DB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 23h
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 6A DB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6a
        __asm _emit 0xdb
        __asm _emit 0xff
        sub eax, 80h
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BC D7 E8 FF: call 0x5856c680
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 64h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 EC FF FF: call 0x586ddb30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 61: jmp 0x586def43
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 4A: jne 0x586def43
        __asm _emit 0x75
        __asm _emit 0x4a
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
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
        ; Exact mapped bytes 0F 85 C3 04 00 00: jne 0x586df421
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 174h], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x586df074
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes E8 44 7A DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7a
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        sub ecx, eax
        ; Exact mapped bytes 79 09: jns 0x586def92
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x586def99
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes E8 13 7A DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7a
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 7E 09: jle 0x586defca
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 10h
        ; Exact mapped bytes EB 1B: jmp 0x586defe5
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 14h], -10h
        ; Exact mapped bytes 7D 09: jge 0x586defd9
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0fffffff0h
        ; Exact mapped bytes EB 06: jmp 0x586defdf
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 3D 62 0D 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x62
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes E8 AE 79 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x79
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 170h]
        ; Exact mapped bytes 75 57: jne 0x586df074
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 174h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 40 5E E5 FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 7E 2D: jle 0x586df074
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 180h]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 83 6E DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 6D 6E DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 178h], 0
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x586df249
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 188h]
        ; Exact mapped bytes E8 3E 5A E5 FF: call 0x58534ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5a
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x586df09b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x586df249
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c4h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2F 6E DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 8
        ; Exact mapped bytes 74 39: je 0x586df0f7
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 9
        ; Exact mapped bytes 74 2D: je 0x586df0f7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 00 6E DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4cch]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 EA 6D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 D3 6D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 150h]
        mov dword ptr [ebp - 74h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 BD 6D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 178h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b0h]
        mov dword ptr [ebp - 78h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 4A 6E DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4b4h]
        mov dword ptr [ebp - 7ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 34 6E DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b8h]
        mov dword ptr [ebp - 80h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1E 6E DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4bch]
        mov dword ptr [ebp - 84h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 02 6E DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6e
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 88h], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 36 6D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 8ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 11 6D DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 90h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 EC 6C DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4a4h]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 D0 6C DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B4 6C DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 9ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 98 6C DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ach], 0
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x586df421
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4b0h]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 57 DA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 95 66 DA FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x586df2ab
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 63 21 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB F8 FF FF: call 0x586deb70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x586df421
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b4h]
        mov dword ptr [ebp - 0ach], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 57 DA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x57
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 43 66 DA FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x586df322
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c4h]
        ; Exact mapped bytes E8 81 19 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x19
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c4h]
        ; Exact mapped bytes E8 F1 A3 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 9
        cmp esi, eax
        ; Exact mapped bytes 7D 17: jge 0x586df31d
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c4h]
        ; Exact mapped bytes E8 6C 20 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 F8 FF FF: call 0x586deb70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x586df421
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4b8h]
        mov dword ptr [ebp - 0b4h], edx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 56 DA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x56
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 CC 65 DA FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x65
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x586df38a
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 9A 20 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4cch]
        ; Exact mapped bytes E8 8C 20 0E 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 F6 FF FF: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC F7 FF FF: call 0x586deb70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x586df421
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4bch]
        mov dword ptr [ebp - 0bch], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 56 DA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x56
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 64 65 DA FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x65
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x586df414
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 A2 18 0E 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4c8h]
        ; Exact mapped bytes E8 12 A3 E4 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 6
        cmp esi, eax
        ; Exact mapped bytes 7D 2D: jge 0x586df412
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c8h]
        ; Exact mapped bytes E8 8D 1F 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        ; Exact mapped bytes E8 7F 1F 0E 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 F5 FF FF: call 0x586de990
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F F7 FF FF: call 0x586deb70
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x586df421
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ach], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586df442
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586df442
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 60: je 0x586df4b1
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x586df465
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x586df44b
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 61 DB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x61
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586df489
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586df4b1
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x586df4af
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7F 61 DB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x61
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 9A: jmp 0x586df44b
        __asm _emit 0xeb
        __asm _emit 0x9a
        pop esi
        mov esp, ebp
    }
}
