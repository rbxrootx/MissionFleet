// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849D240 .. +0x17A8 bytes.
extern "C" __declspec(naked) void FUN_5849d240_5849D240() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dbabh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4d4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 314h], ecx
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4c4h], 0ah
        ; Exact mapped bytes 0F 84 43 17 00 00: je 0x5849e9ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5849d31d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        cmp edx, 16h
        ; Exact mapped bytes 74 7A: je 0x5849d31d
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 478h], 0
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 48ch], 0
        ; Exact mapped bytes 74 5B: je 0x5849d31d
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 48ch]
        mov dword ptr [ebp - 320h], eax
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 74 26: je 0x5849d303
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 320h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 45ch], eax
        push 1
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes FF 95 A4 FB FF FF: call dword ptr [ebp - 0x45c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849d30d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a0h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 48ch], 0
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 47ch], 0
        ; Exact mapped bytes 74 7A: je 0x5849d3a6
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 47ch], 0
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 490h], 0
        ; Exact mapped bytes 74 5B: je 0x5849d3a6
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 490h]
        mov dword ptr [ebp - 324h], eax
        cmp dword ptr [ebp - 324h], 0
        ; Exact mapped bytes 74 26: je 0x5849d38c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 324h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes FF 95 5C FB FF FF: call dword ptr [ebp - 0x4a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849d396
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4a8h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 490h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 480h], 0
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 330h], eax
        cmp dword ptr [ebp - 330h], 1ah
        ; Exact mapped bytes 0F 87 FD 15 00 00: ja 0x5849e9ca
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 330h]
        movzx edx, byte ptr [ecx + 5849ea24h]
        ; Exact mapped bytes FF 24 95 E8 E9 49 58: jmp dword ptr [edx*4 + 0x5849e9e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 9A 06 00 00: je 0x5849da85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x5849d548
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 33ch]
        mov dword ptr [ebp - 358h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4ach]
        mov dword ptr [ebp - 35ch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 360h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 364h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 368h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 E6 EF FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FF 75 FE FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 36ch], eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 370h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 374h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 84 FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 81 FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov eax, dword ptr [ebp - 358h]
        push eax
        mov ecx, dword ptr [ebp - 35ch]
        push ecx
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 364h]
        push eax
        mov ecx, dword ptr [ebp - 368h]
        push ecx
        mov edx, dword ptr [ebp - 36ch]
        push edx
        mov eax, dword ptr [ebp - 370h]
        push eax
        mov ecx, dword ptr [ebp - 374h]
        push ecx
        mov edx, dword ptr [ebp - 378h]
        push edx
        mov eax, dword ptr [ebp - 37ch]
        push eax
        push 58894e08h
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 30h
        lea edx, [ebp - 210h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 380h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 384h], eax
        push 0
        lea ecx, [ebp - 4d8h]
        push ecx
        mov edx, dword ptr [ebp - 380h]
        push edx
        lea eax, [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 4
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x5849d696
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 3
        ; Exact mapped bytes 75 70: jne 0x5849d5dd
        __asm _emit 0x75
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 318h], 2
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 74 4C: je 0x5849d5d8
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 388h], edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 65 22 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push 23h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 48 2D 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4d4h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4d8h], 0ffffffffh
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x5849d691
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x5849d681
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 318h], 0
        ; Exact mapped bytes 7E 12: jle 0x5849d614
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 318h], 2
        ; Exact mapped bytes EB 10: jmp 0x5849d624
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c4h], 0
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 74 4C: je 0x5849d67f
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 38ch], eax
        push 0
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 BE 21 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        push 23h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 48 2D 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x48
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        ; Exact mapped bytes EB 10: jmp 0x5849d691
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x5849d716
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4c4h], 64h
        ; Exact mapped bytes 75 52: jne 0x5849d6f7
        __asm _emit 0x75
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4d4h], 0
        ; Exact mapped bytes 74 43: je 0x5849d6f7
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 31: jne 0x5849d6f7
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 390h], eax
        push 0
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 EB 13 00 00: call 0x5849ead0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4c4h], 0
        ; Exact mapped bytes EB 1F: jmp 0x5849d716
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], -1
        ; Exact mapped bytes 74 10: je 0x5849d716
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c4h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ecx + 320h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c8h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 458h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 468h], 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D E8 FC FF FF: mov word ptr [ebp - 0x318], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 85 E4 FC FF FF: mov word ptr [ebp - 0x31c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 470h], 0
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x5849d8d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 95 E8 FC FF FF: movsx edx, word ptr [ebp - 0x318]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b4h], edx
        ; Exact mapped bytes 0F BF 85 E4 FC FF FF: movsx eax, word ptr [ebp - 0x31c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4b0h], eax
        lea ecx, [ebp - 4b4h]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 68 12 00 00: call 0x5849ea40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 91 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x5849d8cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 0A 38 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x38
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 334h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 334h], 0
        ; Exact mapped bytes 74 7E: je 0x5849d891
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4a0h]
        mov dword ptr [ebp - 394h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 49ch]
        mov dword ptr [ebp - 398h], eax
        push 22h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 72 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 39ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 91 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3a0h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 394h]
        push ecx
        mov edx, dword ptr [ebp - 398h]
        push edx
        mov eax, dword ptr [ebp - 39ch]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        push ecx
        push 2
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 77 96 04 00: call 0x584e6f00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 338h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849d89b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 338h], 0
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [ebp - 3a4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 3a8h], eax
        push 102h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 E6 7C 31 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x5849da85
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 3ach], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 0C E4 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 90 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE E5 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], eax
        ; Exact mapped bytes 0F BF 95 E8 FC FF FF: movsx edx, word ptr [ebp - 0x318]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], edx
        ; Exact mapped bytes 0F BF 85 E4 FC FF FF: movsx eax, word ptr [ebp - 0x31c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 C5 70 FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 B9 65 04 00: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        imul eax, eax, 0ah
        mov dword ptr [ebp - 3b4h], eax
        mov ecx, dword ptr [ebp - 3b4h]
        push ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov edx, dword ptr [ebp - 354h]
        push edx
        push 0
        lea eax, [ebp - 4e0h]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 BA 11 00 00: call 0x5849eb40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 AE 10 00 00: call 0x5849ea40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 90 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x5849da85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        ; Exact mapped bytes E8 50 36 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 33ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes 74 7E: je 0x5849da4b
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4a0h]
        mov dword ptr [ebp - 3b8h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 49ch]
        mov dword ptr [ebp - 3bch], edx
        push 22h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 70 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 8F FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3c4h], eax
        push 1388h
        mov eax, dword ptr [ebp - 3b8h]
        push eax
        mov ecx, dword ptr [ebp - 3bch]
        push ecx
        mov edx, dword ptr [ebp - 3c0h]
        push edx
        mov eax, dword ptr [ebp - 3c4h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 BD 94 04 00: call 0x584e6f00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 340h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849da55
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 340h], 0
        mov ecx, dword ptr [ebp - 340h]
        mov dword ptr [ebp - 3c8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 3c8h]
        mov dword ptr [ebp - 3cch], edx
        push 102h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 2C 7B 31 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 40 0F 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 74 20: je 0x5849dab9
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 3d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 18 10 00 00: call 0x5849ead0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 4]
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4d8h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4d8h]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 64 08 00: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4d4h], eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4d4h]
        ; Exact mapped bytes E8 FF 6E FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 49ch], ecx
        mov dword ptr [eax + 4a0h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4c4h], 64h
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 7A 4C 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4c
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5849db5a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4d4h]
        mov dword ptr [ebp - 3d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 77 0F 00 00: call 0x5849ead0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6B 0E 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x5849dcbd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 33ch]
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4ach]
        mov dword ptr [ebp - 3dch], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4a8h]
        mov dword ptr [ebp - 3e0h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 3e4h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 3e8h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 72 E8 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B 6E FE FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 3ech], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 3f0h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 3f4h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 7D FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 7A FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        mov edx, dword ptr [ebp - 3d8h]
        push edx
        mov eax, dword ptr [ebp - 3dch]
        push eax
        mov ecx, dword ptr [ebp - 3e0h]
        push ecx
        mov edx, dword ptr [ebp - 3e4h]
        push edx
        mov eax, dword ptr [ebp - 3e8h]
        push eax
        mov ecx, dword ptr [ebp - 3ech]
        push ecx
        mov edx, dword ptr [ebp - 3f0h]
        push edx
        mov eax, dword ptr [ebp - 3f4h]
        push eax
        mov ecx, dword ptr [ebp - 3f8h]
        push ecx
        mov edx, dword ptr [ebp - 3fch]
        push edx
        push 58894e60h
        lea eax, [ebp - 310h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 30h
        lea ecx, [ebp - 310h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 400h], eax
        ; Exact mapped bytes 8B 15 70 20 96 58: mov edx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 404h], edx
        push 0
        lea eax, [ebp - 4d0h]
        push eax
        mov ecx, dword ptr [ebp - 400h]
        push ecx
        lea edx, [ebp - 310h]
        push edx
        mov eax, dword ptr [ebp - 404h]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4c4h], -1
        ; Exact mapped bytes 0F 84 95 02 00 00: je 0x5849df65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x5849dce7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x5849df65
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 75 05: jne 0x5849dcfe
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 67 02 00 00: jmp 0x5849df65
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 3
        ; Exact mapped bytes 74 16: je 0x5849dd26
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 3F 02 00 00: jne 0x5849df65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 2d2h]
        test edx, edx
        ; Exact mapped bytes 0F 8E 2A 02 00 00: jle 0x5849df65
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c8h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 458h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 00 02 00 00: je 0x5849df65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 4
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x5849ded5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 0F 8C 3F 01 00 00: jl 0x5849ded5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 344h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4c4h], 4
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4d4h], 0
        ; Exact mapped bytes 74 4C: je 0x5849de11
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4d4h]
        mov dword ptr [ebp - 408h], ecx
        push 0
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 2C 1A 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 23h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 40 2D 00: call 0x58771ea0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4d4h], 0
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 4]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4d8h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4d8h]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 61 08 00: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4d4h], eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 4d4h]
        ; Exact mapped bytes E8 A7 6B FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 49ch], ecx
        mov dword ptr [eax + 4a0h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 32 49 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x49
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x5849ded0
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 40ch], eax
        push 1
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 6F 19 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 8B FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4d4h], eax
        ; Exact mapped bytes 75 15: jne 0x5849ded0
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 83h
        push 23h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 3B 2D 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3b
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5849df65
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 4
        ; Exact mapped bytes 75 42: jne 0x5849df26
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 318h], 1
        ; Exact mapped bytes 75 33: jne 0x5849df26
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, word ptr [ecx + 4]
        mov dword ptr [ebp - 410h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4d8h]
        cmp ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes 75 10: jne 0x5849df24
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 468h], 1
        ; Exact mapped bytes EB 3F: jmp 0x5849df65
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 468h], 0
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 74 20: je 0x5849df65
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 414h], eax
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 AC 18 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 60 0A 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], ecx
        ; Exact mapped bytes 0F 84 89 03 00 00: je 0x5849e309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x5849e0dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 33ch]
        mov dword ptr [ebp - 418h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4ach]
        mov dword ptr [ebp - 41ch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4a8h]
        mov dword ptr [ebp - 420h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 424h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 428h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 51 E4 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A 6A FE FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 42ch], eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 430h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 434h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 79 FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 76 FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 43ch], eax
        mov eax, dword ptr [ebp - 418h]
        push eax
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov eax, dword ptr [ebp - 424h]
        push eax
        mov ecx, dword ptr [ebp - 428h]
        push ecx
        mov edx, dword ptr [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp - 430h]
        push eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        mov edx, dword ptr [ebp - 438h]
        push edx
        mov eax, dword ptr [ebp - 43ch]
        push eax
        push 58894ec0h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 30h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 440h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 444h], eax
        push 0
        lea ecx, [ebp - 4d4h]
        push ecx
        mov edx, dword ptr [ebp - 440h]
        push edx
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 444h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 4c4h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 458h], 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 05 DC FE FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 448h], edx
        mov dword ptr [ebp - 4bch], 0ffffff38h
        mov dword ptr [ebp - 4b8h], 0
        mov edx, dword ptr [ebp - 448h]
        push edx
        lea eax, [ebp - 4c4h]
        push eax
        lea ecx, [ebp - 4bch]
        push ecx
        ; Exact mapped bytes E8 F4 59 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 53 88 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 4c4h]
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 49ch], eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 23 DF FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 4c0h]
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 470h], 0
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x5849e309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x5849e309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 88 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF 67 FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 76 FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 87 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 78 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 4cch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 87 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 75 FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 76 FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 87 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA 77 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 4c8h], esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 76 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5849e309
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 79: jne 0x5849e2f9
        __asm _emit 0x75
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 87 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 74h], eax
        ; Exact mapped bytes 75 63: jne 0x5849e2f9
        __asm _emit 0x75
        __asm _emit 0x63
        push 26h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 67 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44ch], eax
        mov ecx, dword ptr [ebp - 44ch]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 FA DA 31 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xda
        __asm _emit 0x31
        __asm _emit 0x00
        push 26h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 67 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov edx, dword ptr [ebp - 344h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 454h], ecx
        push 0
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes FF 95 AC FB FF FF: call dword ptr [ebp - 0x454]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 53ch], 0
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 74 20: je 0x5849e338
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 458h], edx
        push 0
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 D9 14 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8D 06 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4c4h], 0
        ; Exact mapped bytes 74 1E: je 0x5849e36a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4c4h], 1
        ; Exact mapped bytes 74 0F: je 0x5849e36a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 64h
        ; Exact mapped bytes 75 48: jne 0x5849e3b2
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 338h]
        ; Exact mapped bytes 7D 2E: jge 0x5849e3b2
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 33ch]
        add ecx, 190h
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 320h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 344h], 64h
        ; Exact mapped bytes E9 13 06 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4c4h], 0
        ; Exact mapped bytes 74 1E: je 0x5849e3e4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 1
        ; Exact mapped bytes 74 0F: je 0x5849e3e4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4c4h], 64h
        ; Exact mapped bytes 75 48: jne 0x5849e42c
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 33ch]
        sub edx, 190h
        cmp edx, 2710h
        ; Exact mapped bytes 7E 2E: jle 0x5849e42c
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 33ch]
        sub ecx, 190h
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 320h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 344h], 0ffffff9ch
        ; Exact mapped bytes E9 99 05 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 33ch]
        add edx, 190h
        mov eax, dword ptr [ebp - 314h]
        cmp edx, dword ptr [eax + 338h]
        ; Exact mapped bytes 7D 2E: jge 0x5849e47f
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 33ch]
        add edx, 190h
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 320h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 344h], 0c8h
        ; Exact mapped bytes E9 46 05 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 33ch]
        sub eax, 190h
        cmp eax, 2710h
        ; Exact mapped bytes 7E 2E: jle 0x5849e4ca
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 33ch]
        sub edx, 190h
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 320h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 344h], 0ffffff38h
        ; Exact mapped bytes E9 FB 04 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 4c4h], 4
        ; Exact mapped bytes 0F 84 16 03 00 00: je 0x5849e7f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 2d2h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 01 03 00 00: jle 0x5849e7f8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 EB 02 00 00: jne 0x5849e7f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 E1 02 00 00: je 0x5849e7f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 4c4h], 4
        ; Exact mapped bytes 75 13: jne 0x5849e539
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 0F 84 BF 02 00 00: je 0x5849e7f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 478h], 1
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 47ch], 0
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 484h], eax
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BF 42 02: movsx eax, word ptr [edx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 488h], eax
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4c8h], 0
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 458h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 344h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 4c4h], 4
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 318h], 0
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 48ch], 0
        ; Exact mapped bytes 74 5B: je 0x5849e638
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 48ch]
        mov dword ptr [ebp - 328h], eax
        cmp dword ptr [ebp - 328h], 0
        ; Exact mapped bytes 74 26: je 0x5849e61e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 328h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 494h], eax
        push 1
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes FF 95 6C FB FF FF: call dword ptr [ebp - 0x494]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849e628
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 460h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 48ch], 0
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 490h], 0
        ; Exact mapped bytes 74 5B: je 0x5849e6a2
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 490h]
        mov dword ptr [ebp - 32ch], ecx
        cmp dword ptr [ebp - 32ch], 0
        ; Exact mapped bytes 74 26: je 0x5849e688
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 32ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 464h], ecx
        push 1
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes FF 95 9C FB FF FF: call dword ptr [ebp - 0x464]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 468h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849e692
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 468h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 490h], 0
        push 58h
        ; Exact mapped bytes E8 5B 29 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x29
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 348h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 348h], 0
        ; Exact mapped bytes 74 7C: je 0x5849e73e
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 488h]
        mov dword ptr [ebp - 46ch], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 484h]
        mov dword ptr [ebp - 470h], eax
        push 24h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 63 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 82 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 478h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        mov edx, dword ptr [ebp - 470h]
        push edx
        mov eax, dword ptr [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp - 478h]
        push ecx
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 DA 80 FE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849e748
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 34ch], 0
        mov edx, dword ptr [ebp - 34ch]
        mov dword ptr [ebp - 47ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 47ch]
        mov dword ptr [eax + 48ch], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 48ch]
        mov dword ptr [ebp - 480h], eax
        push 102h
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 21 6E 31 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 12 E8 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 82 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE E7 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 22: jne 0x5849e7d8
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 48ch]
        mov dword ptr [ebp - 484h], eax
        push 1
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 0B 77 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x5849e7f8
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 48ch]
        mov dword ptr [ebp - 488h], edx
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 E9 76 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 4c4h], 4
        ; Exact mapped bytes 75 42: jne 0x5849e84e
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 318h], 1
        ; Exact mapped bytes 75 33: jne 0x5849e84e
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 75 21: jne 0x5849e84e
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 74 12: je 0x5849e84e
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 468h], 1
        ; Exact mapped bytes EB 7C: jmp 0x5849e8ca
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 3
        ; Exact mapped bytes 75 6A: jne 0x5849e8ca
        __asm _emit 0x75
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 32h
        ; Exact mapped bytes 7D 51: jge 0x5849e8ca
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 2d2h]
        test eax, eax
        ; Exact mapped bytes 7E 40: jle 0x5849e8ca
        __asm _emit 0x7e
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 4c4h], 4
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 318h], 1
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 480h], 1
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 468h], 1
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x5849e9ca
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        ; Exact mapped bytes 0F BF 88 28 02 00 00: movsx ecx, word ptr [eax + 0x228]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x5849e98e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 49ch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 348h]
        mov dword ptr [ebp - 48ch], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 4fch]
        ; Exact mapped bytes E8 94 D7 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        sub eax, dword ptr [ecx + 8]
        mov dword ptr [ebp - 490h], eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4ach], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 498h], edx
        mov eax, dword ptr [ebp - 48ch]
        push eax
        mov ecx, dword ptr [ebp - 490h]
        push ecx
        mov edx, dword ptr [ebp - 4ach]
        push edx
        mov eax, dword ptr [ebp - 498h]
        push eax
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 A0 F6 2B 00: call 0x5875e010
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 8B 91 28 02 00 00: mov dx, word ptr [ecx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 89 90 28 02 00 00: mov word ptr [eax + 0x228], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x5849e9ca
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 468h], 1
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 F5 95 FF FF: call 0x58497fa0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5849e9ca
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 468h], 1
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 E7 92 FF FF: call 0x58497cb0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 6E 26 39 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x26
        __asm _emit 0x39
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
