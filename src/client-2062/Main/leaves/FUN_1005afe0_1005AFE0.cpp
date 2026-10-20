// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005AFE0 .. +0x1320 bytes.
extern "C" __declspec(naked) void FUN_1005afe0_1005AFE0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 E1 12 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        mov ebx, 0fh
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        mov ebp, 1
        ; Exact mapped bytes 74 0A: je 0x1005b013
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 29 02 00 00: jne 0x1005b23c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x1005b047
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x1005b030
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1005b02b
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x1005b040
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x1005b03f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1005b03c
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x1005b040
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 19 41 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x1005b07b
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x1005b064
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1005b05f
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x1005b074
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x1005b073
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1005b070
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x1005b074
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 A5 40 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x1005b23c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x1005b23c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x1005b1aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 05: je 0x1005b0bd
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [esi + 60h], edi
        ; Exact mapped bytes 75 3F: jne 0x1005b101
        __asm _emit 0x75
        __asm _emit 0x3f
        mov al, byte ptr [esi + 0ce8h]
        and eax, ebx
        cmp eax, 4
        ; Exact mapped bytes 77 2C: ja 0x1005b0fb
        __asm _emit 0x77
        __asm _emit 0x2c
        ; Exact mapped bytes FF 24 85 00 C3 05 10: jmp dword ptr [eax*4 + 0x1005c300]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x10
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 23: jmp 0x1005b101
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 68h]
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes EB 1B: jmp 0x1005b101
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 6ch]
        ; Exact mapped bytes EB 13: jmp 0x1005b0fe
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0E: jmp 0x1005b101
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes EB 06: jmp 0x1005b101
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [esi + 60h], edx
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 2C 56 1C 10: mov eax, dword ptr [0x101c562c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, edi
        ; Exact mapped bytes 74 24: je 0x1005b136
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi + 60h]
        cmp eax, edi
        ; Exact mapped bytes 74 1D: je 0x1005b136
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        push ebp
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes 8B 15 F8 58 1C 10: mov edx, dword ptr [0x101c58f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d4ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0d4ch]
        cmp dword ptr [ecx + 0a4h], edi
        ; Exact mapped bytes 74 05: je 0x1005b166
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 FA C5 FE FF: call 0x10047760
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 30000h
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 81 C6 05 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 120h]
        and eax, 0f00000h
        cmp eax, 100000h
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x1005b23c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 220000h
        ; Exact mapped bytes E8 6B 0F 06 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x1005b23c
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x1005b23c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0fff8h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, edi
        ; Exact mapped bytes 74 1A: je 0x1005b1df
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 50 58 1C 10: mov eax, dword ptr [0x101c5850]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp eax, ecx
        ; Exact mapped bytes 75 06: jne 0x1005b1dc
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 3D 50 58 1C 10: mov dword ptr [0x101c5850], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esi + 60h], edi
        mov ecx, dword ptr [esi + 0d50h]
        push 17dh
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 DD 3A 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d50h]
        push 17dh
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], edx
        mov ecx, dword ptr [esi + 0d48h]
        mov eax, dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 B7 3A 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d48h]
        ; Exact mapped bytes E8 3C C5 FE FF: call 0x10047760
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e5ffh
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 44 1B 00 00: call 0x1005cd80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 3F 10 00 00: jne 0x1005c28d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d78h], 2000h
        ; Exact mapped bytes 0F 85 07 0F 00 00: jne 0x1005c165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d84h]
        cmp ecx, edi
        ; Exact mapped bytes 0F 85 5A 0C 00 00: jne 0x1005bec6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d88h], edi
        ; Exact mapped bytes 0F 85 4E 0C 00 00: jne 0x1005bec6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d80h], edi
        ; Exact mapped bytes 0F 84 A5 0A 00 00: je 0x1005bd29
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 330h]
        add eax, 4
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 31 3A 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [esi + 330h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1005b2dd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 330h]
        push 100h
        ; Exact mapped bytes E8 33 3E 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 330h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 334h]
        push edx
        ; Exact mapped bytes E8 BE 39 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 334h]
        mov eax, dword ptr [eax + 50h]
        cmp eax, edi
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1005b350
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 334h]
        push 100h
        ; Exact mapped bytes E8 C0 3D 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 334h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 338h]
        push edx
        ; Exact mapped bytes E8 4B 39 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ecx, dword ptr [esi + 338h]
        mov eax, dword ptr [eax + 54h]
        cmp eax, edi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b3c3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 338h]
        push 100h
        ; Exact mapped bytes E8 4D 3D 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 338h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 33ch]
        push edx
        ; Exact mapped bytes E8 D8 38 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, dword ptr [esi + 33ch]
        mov eax, dword ptr [eax + 54h]
        cmp eax, edi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b436
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 33ch]
        push 100h
        ; Exact mapped bytes E8 DA 3C 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 328h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 440h]
        push edx
        ; Exact mapped bytes E8 65 38 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 328h]
        mov ecx, dword ptr [esi + 440h]
        mov eax, dword ptr [eax + 54h]
        cmp eax, edi
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b4a9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 440h]
        push 100h
        ; Exact mapped bytes E8 67 3C 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 440h]
        lea edi, [esi + 3c0h]
        mov ebp, 20h
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi - 118h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 EB 37 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 118h]
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b51f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [edi - 198h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [edi - 80h]
        push edx
        ; Exact mapped bytes E8 93 37 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi - 198h]
        mov ecx, dword ptr [edi - 80h]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b578
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi - 80h]
        add edi, 4
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        dec ebp
        ; Exact mapped bytes 0F 85 45 FF FF FF: jne 0x1005b4ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 1C 93 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 1
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 F2 01 00 00: jne 0x1005b799
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 544h]
        add eax, 4
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esi + 444h]
        push edx
        ; Exact mapped bytes E8 0E 37 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 544h]
        mov ecx, dword ptr [esi + 444h]
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b600
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 444h]
        push 100h
        ; Exact mapped bytes E8 10 3B 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 444h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 444h]
        mov dword ptr [ecx + 50h], ebx
        mov eax, dword ptr [esi + 550h]
        mov ecx, dword ptr [esi + 448h]
        add eax, 4
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 92 36 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 550h]
        mov eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 448h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b67c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 448h]
        push 100h
        ; Exact mapped bytes E8 94 3A 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 448h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 448h]
        mov dword ptr [ecx + 50h], ebx
        mov eax, dword ptr [esi + 548h]
        mov ecx, dword ptr [esi + 44ch]
        add eax, 4
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 16 36 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 548h]
        mov eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 44ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b6f8
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 44ch]
        push 100h
        ; Exact mapped bytes E8 18 3A 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 44ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 44ch]
        mov dword ptr [ecx + 50h], ebx
        mov eax, dword ptr [esi + 54ch]
        mov ecx, dword ptr [esi + 450h]
        add eax, 4
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 9A 35 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54ch]
        mov eax, dword ptr [ecx + 54h]
        mov ecx, dword ptr [esi + 450h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1005b774
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 450h]
        push 100h
        ; Exact mapped bytes E8 9C 39 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 450h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 450h]
        mov dword ptr [ecx + 50h], ebx
        ; Exact mapped bytes EB 59: jmp 0x1005b7f2
        __asm _emit 0xeb
        __asm _emit 0x59
        mov cl, byte ptr [esi + 454h]
        xor eax, eax
        test cl, cl
        ; Exact mapped bytes 76 1A: jbe 0x1005b7bf
        __asm _emit 0x76
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 458h]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        xor ecx, ecx
        mov cl, byte ptr [esi + 454h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C E6: jl 0x1005b7a5
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov cl, byte ptr [esi + 455h]
        xor eax, eax
        test cl, cl
        ; Exact mapped bytes 76 1A: jbe 0x1005b7e5
        __asm _emit 0x76
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 45ch]
        mov ecx, dword ptr [edx + eax*4]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        xor ecx, ecx
        mov cl, byte ptr [esi + 455h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C E6: jl 0x1005b7cb
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov ecx, dword ptr [esi + 0a4h]
        push 0
        ; Exact mapped bytes E8 2E 39 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d80h]
        cmp eax, 0ffffh
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x1005b8f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 58 1C 10: mov edx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, esi
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 0C 2C 00 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [esi + 0d84h], 190h
        mov dword ptr [esi + 0d88h], 10eh
        mov edi, dword ptr [esi + 330h]
        mov dword ptr [esi + 0d80h], 0
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        test ecx, ecx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005b857
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 49 37 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b864
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9C 36 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov edi, dword ptr [esi + 334h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b889
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 17 37 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b896
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 6A 36 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 9ch]
        mov edi, dword ptr [esi + 338h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005b8bb
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E5 36 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b8c8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 38 36 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        mov edi, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        test ecx, ecx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x1005ba4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x1005ba45
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 0F 8E 5D 01 00 00: jle 0x1005ba5b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x1005b90a
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0d7ch]
        ; Exact mapped bytes EB 4F: jmp 0x1005b959
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 9B 8F FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        mov cl, ah
        mov eax, dword ptr [edi + 0b70h]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x1005b957
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edi, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B BF 48 03 00 00: mov di, word ptr [edi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EF 0D: shr di, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 75 0A: jne 0x1005b949
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 0a0h]
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x1005b955
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005b929
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 02: jmp 0x1005b957
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov eax, edx
        test eax, eax
        mov dword ptr [esi + 0d0ch], eax
        ; Exact mapped bytes 0F 84 4E 02 00 00: je 0x1005bbb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B1 2A 00 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d80h]
        mov eax, dword ptr [esi + 94h]
        dec edi
        mov dword ptr [esi + 0d84h], 190h
        mov dword ptr [esi + 0d88h], 10eh
        mov dword ptr [esi + 0d80h], edi
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        mov edi, dword ptr [esi + 330h]
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b9b5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 EB 35 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b9c2
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 3E 35 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 98h]
        mov edi, dword ptr [esi + 334h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 05 32 00: add ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005b9e7
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 B9 35 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005b9f4
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 0C 35 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov edi, dword ptr [esi + 338h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 C2 32: add dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x32
        test ecx, ecx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005ba19
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 87 35 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005ba26
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 DA 34 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov edi, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 32: add cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005ba4b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 55 35 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x1005bbb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x1005bbaf
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x1005ba67
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0d7ch]
        ; Exact mapped bytes EB 4F: jmp 0x1005bab6
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3E 8E FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        xor edx, edx
        mov cl, ah
        mov eax, dword ptr [edi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x1005bab4
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edi, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B BF 48 03 00 00: mov di, word ptr [edi + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EF 0D: shr di, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B F9: cmp di, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 75 0A: jne 0x1005baa6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, dword ptr [eax + 0a0h]
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x1005bab2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x1005ba86
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 02: jmp 0x1005bab4
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, eax
        mov eax, edx
        test eax, eax
        mov dword ptr [esi + 0d0ch], eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x1005bbb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 54 29 00 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d80h]
        mov dword ptr [esi + 0d84h], 0fffffe70h
        inc edx
        mov dword ptr [esi + 0d88h], 0fffffef2h
        mov edi, dword ptr [esi + 330h]
        mov dword ptr [esi + 0d80h], edx
        mov edx, dword ptr [esi + 94h]
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 2D 32 00: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005bb12
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 8E 34 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005bb1f
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E1 33 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov edi, dword ptr [esi + 334h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 83 EA 32: sub dx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x32
        test ecx, ecx
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005bb44
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 5C 34 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005bb51
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AF 33 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov edi, dword ptr [esi + 338h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 E9 32: sub cx, 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x32
        ; Exact mapped bytes 66 89 4F 26: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005bb76
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 2A 34 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005bb83
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 7D 33 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a0h]
        mov edi, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 2D 32 00: sub ax, 0x32
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1005bba8
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F8 33 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005bbb5
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 4B 33 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d88h]
        mov edx, dword ptr [esi + 0d84h]
        neg ecx
        neg edx
        push ecx
        mov ecx, dword ptr [esi + 94h]
        push edx
        ; Exact mapped bytes E8 5E 32 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0
        ; Exact mapped bytes E8 41 35 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d88h]
        mov ecx, dword ptr [esi + 0d84h]
        neg eax
        neg ecx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes E8 34 32 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0
        ; Exact mapped bytes E8 17 35 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d88h]
        mov eax, dword ptr [esi + 0d84h]
        mov ecx, dword ptr [esi + 9ch]
        neg edx
        neg eax
        push edx
        push eax
        ; Exact mapped bytes E8 0A 32 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0
        ; Exact mapped bytes E8 ED 34 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d88h]
        mov edx, dword ptr [esi + 0d84h]
        neg ecx
        neg edx
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        push edx
        ; Exact mapped bytes E8 E0 31 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 C3 34 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 48 8C FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 7E: jne 0x1005bceb
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 0d88h]
        mov ecx, dword ptr [esi + 0d84h]
        neg eax
        neg ecx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 544h]
        ; Exact mapped bytes E8 A6 31 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 544h]
        push 0
        ; Exact mapped bytes E8 89 34 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d88h]
        mov eax, dword ptr [esi + 0d84h]
        mov ecx, dword ptr [esi + 548h]
        neg edx
        neg eax
        push edx
        push eax
        ; Exact mapped bytes E8 7C 31 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 548h]
        push 0
        ; Exact mapped bytes E8 5F 34 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d88h]
        mov edx, dword ptr [esi + 0d84h]
        neg ecx
        neg edx
        push ecx
        mov ecx, dword ptr [esi + 54ch]
        push edx
        ; Exact mapped bytes E8 52 31 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54ch]
        push 0
        ; Exact mapped bytes E8 35 34 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d48h]
        push 0
        mov ecx, esi
        mov eax, dword ptr [eax + 0e0h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E8 7C 12 00 00: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 464h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1005bd12
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 05 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E9 AC 05 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d18h]
        ; Exact mapped bytes E8 0C 70 FC FF: call 0x10022d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d0ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 DE 26 00 00: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d5ch]
        mov dl, byte ptr [ecx + 24h]
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 05: je 0x1005bd57
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 330h]
        mov edi, 0fff0h
        mov edx, 20h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 334h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 338h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 440h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        lea eax, [esi + 340h]
        mov ecx, dword ptr [eax + 80h]
        add eax, 4
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 E9: jne 0x1005bd99
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [esi + 444h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 44ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 450h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 450h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 448h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d4ch]
        mov edx, dword ptr [ecx + 98h]
        mov al, byte ptr [edx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 12: jne 0x1005be09
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 0d48h]
        mov eax, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes EB 22: jmp 0x1005be2b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 0d50h]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 74 04: je 0x1005be1e
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 4
        ; Exact mapped bytes 75 05: jne 0x1005be23
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 55 11 00 00: call 0x1005cf80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 464h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1005be39
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x1005be47
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov dword ptr [esi + 0d78h], 0
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 54 8A FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 70 04 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 454h]
        xor eax, eax
        test cl, cl
        ; Exact mapped bytes 76 1A: jbe 0x1005be8b
        __asm _emit 0x76
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 458h]
        xor edx, edx
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        mov dl, byte ptr [esi + 454h]
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x1005be71
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov cl, byte ptr [esi + 455h]
        xor eax, eax
        test cl, cl
        ; Exact mapped bytes 76 1A: jbe 0x1005beb1
        __asm _emit 0x76
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 45ch]
        xor edx, edx
        mov ecx, dword ptr [ecx + eax*4]
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        mov dl, byte ptr [esi + 455h]
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x1005be97
        __asm _emit 0x7c
        __asm _emit 0xe6
        mov ecx, dword ptr [esi + 0a4h]
        push 80h
        ; Exact mapped bytes E8 5F 32 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 04 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d88h]
        cmp ecx, -8
        ; Exact mapped bytes 7E 2E: jle 0x1005beff
        __asm _emit 0x7e
        __asm _emit 0x2e
        cmp ecx, 8
        ; Exact mapped bytes 7D 29: jge 0x1005beff
        __asm _emit 0x7d
        __asm _emit 0x29
        cmp ecx, -4
        ; Exact mapped bytes 7E 19: jle 0x1005bef4
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp ecx, 4
        ; Exact mapped bytes 7D 14: jge 0x1005bef4
        __asm _emit 0x7d
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x1005bee9
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebp, 0ffffffffh
        ; Exact mapped bytes EB 23: jmp 0x1005bf0c
        __asm _emit 0xeb
        __asm _emit 0x23
        xor eax, eax
        test ecx, ecx
        setg al
        mov ebp, eax
        ; Exact mapped bytes EB 18: jmp 0x1005bf0c
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, ecx
        cdq
        sub eax, edx
        mov ebp, eax
        sar ebp, 1
        ; Exact mapped bytes EB 0D: jmp 0x1005bf0c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov ebp, eax
        sar ebp, 2
        cmp edi, -8
        ; Exact mapped bytes 7E 2E: jle 0x1005bf3f
        __asm _emit 0x7e
        __asm _emit 0x2e
        cmp edi, 8
        ; Exact mapped bytes 7D 29: jge 0x1005bf3f
        __asm _emit 0x7d
        __asm _emit 0x29
        cmp edi, -4
        ; Exact mapped bytes 7E 19: jle 0x1005bf34
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp edi, 4
        ; Exact mapped bytes 7D 14: jge 0x1005bf34
        __asm _emit 0x7d
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x1005bf29
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 23: jmp 0x1005bf4c
        __asm _emit 0xeb
        __asm _emit 0x23
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 18: jmp 0x1005bf4c
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, edi
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0D: jmp 0x1005bf4c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        sub ecx, ebp
        push edi
        mov dword ptr [esi + 0d84h], ecx
        mov edx, dword ptr [esi + 0d88h]
        sub edx, edi
        push ebp
        mov dword ptr [esi + 0d88h], edx
        mov ecx, dword ptr [esi + 330h]
        ; Exact mapped bytes E8 C1 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        push edi
        push ebp
        ; Exact mapped bytes E8 B4 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 338h]
        push edi
        push ebp
        ; Exact mapped bytes E8 A7 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 33ch]
        push edi
        push ebp
        ; Exact mapped bytes E8 9A 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push edi
        push ebp
        ; Exact mapped bytes E8 8D 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push edi
        push ebp
        ; Exact mapped bytes E8 80 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push edi
        push ebp
        ; Exact mapped bytes E8 73 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push edi
        push ebp
        ; Exact mapped bytes E8 66 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DB 88 FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 27: jne 0x1005c002
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 544h]
        push edi
        push ebp
        ; Exact mapped bytes E8 48 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 548h]
        push edi
        push ebp
        ; Exact mapped bytes E8 3B 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54ch]
        push edi
        push ebp
        ; Exact mapped bytes E8 2E 2E 0A 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d88h]
        mov ecx, dword ptr [esi + 0d84h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0d18h]
        ; Exact mapped bytes E8 85 6C FC FF: call 0x10022ca0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 330h]
        mov ebp, dword ptr [ecx + 28h]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 A9 02 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, 10h
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x1005c0c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub ebp, 10h
        mov edi, 100h
        push ebp
        sub edi, ebp
        ; Exact mapped bytes E8 DB 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        push ebp
        ; Exact mapped bytes E8 CF 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 338h]
        push ebp
        ; Exact mapped bytes E8 C3 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 33ch]
        push ebp
        ; Exact mapped bytes E8 B7 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push edi
        ; Exact mapped bytes E8 AB 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push edi
        ; Exact mapped bytes E8 9F 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push edi
        ; Exact mapped bytes E8 93 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push edi
        ; Exact mapped bytes E8 87 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 544h]
        push edi
        ; Exact mapped bytes E8 7B 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 548h]
        push edi
        ; Exact mapped bytes E8 6F 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54ch]
        push edi
        ; Exact mapped bytes E8 63 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 57 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 334h]
        push 0
        ; Exact mapped bytes E8 4A 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 338h]
        push 0
        ; Exact mapped bytes E8 3D 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 33ch]
        push 0
        ; Exact mapped bytes E8 30 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 100h
        ; Exact mapped bytes E8 20 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 100h
        ; Exact mapped bytes E8 10 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 100h
        ; Exact mapped bytes E8 00 30 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 100h
        ; Exact mapped bytes E8 F0 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 544h]
        push 100h
        ; Exact mapped bytes E8 E0 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 548h]
        push 100h
        ; Exact mapped bytes E8 D0 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54ch]
        push 100h
        ; Exact mapped bytes E8 C0 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 70 01 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0ch]
        mov ecx, dword ptr [esi + 9ch]
        cmp eax, edi
        mov edi, dword ptr [ecx + 28h]
        ; Exact mapped bytes 75 65: jne 0x1005c1dd
        __asm _emit 0x75
        __asm _emit 0x65
        test edi, edi
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 10h
        ; Exact mapped bytes 7E 1A: jle 0x1005c19f
        __asm _emit 0x7e
        __asm _emit 0x1a
        sub edi, 10h
        push edi
        ; Exact mapped bytes E8 92 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push edi
        ; Exact mapped bytes E8 86 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 01 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 7A 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 6D 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x1005c2d5
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 100h
        ; Exact mapped bytes 74 32: je 0x1005c217
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, 100h
        sub edx, edi
        cmp edx, 10h
        ; Exact mapped bytes 7E 0C: jle 0x1005c1fd
        __asm _emit 0x7e
        __asm _emit 0x0c
        add edi, 10h
        push edi
        ; Exact mapped bytes E8 26 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes EB 0F: jmp 0x1005c20c
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 100h
        ; Exact mapped bytes E8 19 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 100h
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 09 2F 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 04: jne 0x1005c227
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 338h]
        test byte ptr [ecx + 24h], 1
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 28h]
        test edi, edi
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x1005c2d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 10h
        ; Exact mapped bytes 7E 17: jle 0x1005c25e
        __asm _emit 0x7e
        __asm _emit 0x17
        sub edi, 10h
        push edi
        ; Exact mapped bytes E8 D0 2E 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 33ch]
        push edi
        ; Exact mapped bytes E8 C4 2E 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x1005c2d5
        __asm _emit 0xeb
        __asm _emit 0x77
        push 0
        ; Exact mapped bytes E8 BB 2E 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 338h]
        mov edi, 0fff0h
        push 0
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 33ch]
        ; Exact mapped bytes E8 9F 2E 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes EB 48: jmp 0x1005c2d5
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 66 3D 00 0D: cmp ax, 0xd00
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 75 42: jne 0x1005c2d5
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [esi + 0d74h], 64h
        ; Exact mapped bytes 75 39: jne 0x1005c2d5
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [esi + 0d6ch]
        push -1
        push eax
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0d6ch]
        push ecx
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 12ch
        ; Exact mapped bytes E8 38 63 08 00: call 0x100e2600
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 89 3D C0 56 1C 10: mov dword ptr [0x101c56c0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x1005c2fb
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 10: je 0x1005c2f6
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1005c2dc
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
