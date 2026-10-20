// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B2970 .. +0x607 bytes.
extern "C" __declspec(naked) void FUN_584b2970_584B2970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF D2 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 20 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, 3
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 0F 87 CC 00 00 00: ja 0x584b2a85
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 85 78 2F 4B 58: jmp dword ptr [eax*4 + 0x584b2f78]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x4b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 D2 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 20 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 35eh]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 139fh
        ; Exact mapped bytes 7F 3A: jg 0x584b2a22
        __asm _emit 0x7f
        __asm _emit 0x3a
        cmp dword ptr [ebp - 18h], 139fh
        ; Exact mapped bytes 74 4E: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 18h], 0bd2h
        ; Exact mapped bytes 7F 1D: jg 0x584b2a17
        __asm _emit 0x7f
        __asm _emit 0x1d
        cmp dword ptr [ebp - 18h], 0bd2h
        ; Exact mapped bytes 74 3C: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 18h], 403h
        ; Exact mapped bytes 74 33: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 18h], 7d8h
        ; Exact mapped bytes 74 2A: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes EB 4A: jmp 0x584b2a61
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp dword ptr [ebp - 18h], 0fb1h
        ; Exact mapped bytes 74 1F: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes EB 3F: jmp 0x584b2a61
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp dword ptr [ebp - 18h], 1787h
        ; Exact mapped bytes 74 14: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 18h], 1b71h
        ; Exact mapped bytes 74 0B: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 18h], 1f58h
        ; Exact mapped bytes 74 02: je 0x584b2a3f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x584b2a61
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 AC 47 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 2719h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 16 63 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 08 05 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x584b2a85
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 88 47 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 0
        push 43ah
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 F2 62 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 E4 04 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 D2 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x584b2b0c
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 D1 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3A 1F FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 5D: je 0x584b2b0c
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 48h]
        movzx eax, word ptr [edx + 2]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 1ebh
        ; Exact mapped bytes 7F 1D: jg 0x584b2adf
        __asm _emit 0x7f
        __asm _emit 0x1d
        cmp dword ptr [ebp - 20h], 1ebh
        ; Exact mapped bytes 74 1F: je 0x584b2aea
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 20h], 0c8h
        ; Exact mapped bytes 74 16: je 0x584b2aea
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 20h], 1c4h
        ; Exact mapped bytes 74 0D: je 0x584b2aea
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 2D: jmp 0x584b2b0c
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 20h], 22eh
        ; Exact mapped bytes 74 02: je 0x584b2aea
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 22: jmp 0x584b2b0c
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 01 47 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 2719h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 6B 62 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 5D 04 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 D1 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0E: jne 0x584b2b2e
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 1E FD FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 22: jne 0x584b2b56
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 B7 46 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        push 0
        push 0
        push 0
        push 389h
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 21 62 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 13 04 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 82 1E FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 22: jne 0x584b2b94
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 79 46 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        push 0
        push 392h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E3 61 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 D5 03 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 44 1E FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 52: jne 0x584b2c02
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 28 1E FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 74 18: je 0x584b2be0
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 1E FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 75 22: jne 0x584b2c02
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 0B 46 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 0
        push 394h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 75 61 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 67 03 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 C5 05 96 58: movzx eax, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 0ffh
        ; Exact mapped bytes 0F 84 93 01 00 00: je 0x584b2da7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 0dh], 0
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 0F 8C 80 01 00 00: jl 0x584b2da7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 15 C5 05 96 58: movzx edx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x15
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 5
        ; Exact mapped bytes 0F 8D 70 01 00 00: jge 0x584b2da7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 05 C5 05 96 58: movzx eax, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [eax*4 + 589605ach]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF E6 2C 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe6
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x584b2da7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x584b2c70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 D0 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E 1D FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x584b2d2a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584b2cba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 2
        ; Exact mapped bytes 7D 65: jge 0x584b2d25
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 40 D0 FF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 4A: je 0x584b2d23
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 34h]
        movzx eax, byte ptr [edx]
        cmp eax, 0bh
        ; Exact mapped bytes 75 3F: jne 0x584b2d23
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 1F: jne 0x584b2d23
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 E7 44 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 2fh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 54 60 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8C: jmp 0x584b2cb1
        __asm _emit 0xeb
        __asm _emit 0x8c
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x584b2c67
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x584b2d3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 20h
        ; Exact mapped bytes 7D 3A: jge 0x584b2d7c
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C2 CD FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 23: je 0x584b2d7a
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 11 CF FF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov byte ptr [ebp - 0eh], cl
        movzx edx, byte ptr [ebp - 0eh]
        movzx eax, byte ptr [ebp - 0dh]
        cmp edx, eax
        ; Exact mapped bytes 7E 06: jle 0x584b2d7a
        __asm _emit 0x7e
        __asm _emit 0x06
        mov cl, byte ptr [ebp - 0eh]
        mov byte ptr [ebp - 0dh], cl
        ; Exact mapped bytes EB B7: jmp 0x584b2d33
        __asm _emit 0xeb
        __asm _emit 0xb7
        movzx edx, byte ptr [ebp - 0dh]
        cmp edx, 4fh
        ; Exact mapped bytes 7E 22: jle 0x584b2da7
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 66 44 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        push 0
        push 0
        push 0
        push 3b0h
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 D0 5F 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 91 E5 FF FF: call 0x584b1340
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584b2dbd
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], 8
        mov byte ptr [ebp - 0ch], 1
        mov byte ptr [ebp - 0bh], 2
        mov byte ptr [ebp - 0ah], 3
        mov byte ptr [ebp - 9], 4
        mov byte ptr [ebp - 8], 5
        mov byte ptr [ebp - 7], 8
        mov byte ptr [ebp - 6], 6
        mov byte ptr [ebp - 5], 7
        lea ecx, [ebp - 3dh]
        push ecx
        lea edx, [ebp - 19h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3C CD FF FF: call 0x584afb30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584b2e07
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 0F 8D 33 01 00 00: jge 0x584b2f46
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C5 1B FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 54 0D F4: movsx edx, byte ptr [ebp + ecx - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xf4
        cmp eax, edx
        ; Exact mapped bytes 0F 85 0B 01 00 00: jne 0x584b2f41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 19h]
        cmp eax, 4fh
        ; Exact mapped bytes 7E 22: jle 0x584b2e61
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 AC 43 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        push 0
        push 0
        push 0
        push 38bh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 16 5F 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 1B FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 8
        ; Exact mapped bytes 75 3B: jne 0x584b2eb4
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 1
        shl eax, 3
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, byte ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 7ch], edx
        cmp dword ptr [ebp - 7ch], 2
        ; Exact mapped bytes 7C 1F: jl 0x584b2eb4
        __asm _emit 0x7c
        __asm _emit 0x1f
        ; Exact mapped bytes E8 56 43 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        push 0
        push 0
        push 0
        push 3eh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C3 5E 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x584b2f69
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 24 1B FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 7
        ; Exact mapped bytes 74 18: je 0x584b2ee4
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 1B FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 6
        ; Exact mapped bytes 75 59: jne 0x584b2f3d
        __asm _emit 0x75
        __asm _emit 0x59
        mov ecx, 1
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, byte ptr [eax + edx + 198h]
        mov edx, 1
        imul eax, edx, 7
        mov edx, dword ptr [ebp - 24h]
        movzx eax, byte ptr [edx + eax + 198h]
        add ecx, eax
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp - 84h], 4
        ; Exact mapped bytes 7C 22: jl 0x584b2f3d
        __asm _emit 0x7c
        __asm _emit 0x22
        ; Exact mapped bytes E8 D0 42 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        push 0
        push 0
        push 0
        push 3dh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 37 5E 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 2C: jmp 0x584b2f69
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov al, 1
        ; Exact mapped bytes EB 28: jmp 0x584b2f69
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x584b2dfe
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A5 42 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        push 0
        push 0
        push 0
        push 38ah
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 09 5E 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DD E0 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
