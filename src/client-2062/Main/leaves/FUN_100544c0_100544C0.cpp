// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100544C0 .. +0x300 bytes.
extern "C" __declspec(naked) void FUN_100544c0_100544C0() {
    __asm {
        push -1
        push 1016ed4bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 94 02 00 00: je 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        push ebx
        inc eax
        lea edi, [esi + 320h]
        mov dword ptr [esi + 124h], eax
        mov ebx, 6
        mov eax, dword ptr [esi + 124h]
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 33: jne 0x10054546
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [edi]
        push 1
        ; Exact mapped bytes E8 64 A9 0A 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 4], 44ch
        ; Exact mapped bytes 7E 0A: jle 0x10054531
        __asm _emit 0x7e
        __asm _emit 0x0a
        push 0fffffe70h
        ; Exact mapped bytes E8 1F A8 0A 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 4], 0fffffed4h
        ; Exact mapped bytes 7D 0A: jge 0x10054546
        __asm _emit 0x7d
        __asm _emit 0x0a
        push 4b0h
        ; Exact mapped bytes E8 0A A8 0A 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 B4: jne 0x10054500
        __asm _emit 0x75
        __asm _emit 0xb4
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        pop ebx
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 55: je 0x100545b0
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 4F: je 0x100545b0
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 10 02 00 00: jne 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 174h], ebp
        ; Exact mapped bytes 0F 84 04 02 00 00: je 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        inc ecx
        mov eax, ecx
        mov dword ptr [esi + 170h], ecx
        cmp eax, 7dh
        ; Exact mapped bytes 0F 8E EC 01 00 00: jle 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 16 01 00 00: mov dx, word ptr [esi + 0x116]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov dword ptr [esi + 170h], ebp
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push edx
        ; Exact mapped bytes E8 D5 8D FF FF: call 0x1004d380
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CB 01 00 00: jmp 0x1005477b
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 74 2D: je 0x100545e7
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 110h]
        ; Exact mapped bytes 7E 10: jle 0x100545d2
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100545cd
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x100545e0
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x100545e0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100545dd
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x100545e0
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 79 AB 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2C: je 0x1005461d
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 110h]
        ; Exact mapped bytes 7E 0F: jle 0x10054608
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x10054604
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x10054616
        __asm _emit 0xeb
        __asm _emit 0x12
        add eax, edx
        ; Exact mapped bytes EB 0D: jmp 0x10054615
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x10054613
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x10054616
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 03 AB 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
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
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x10054731
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 16 01 00 00: mov dx, word ptr [esi + 0x116]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e2ffh
        or ah, 2
        push edx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 31 34 06 00: call 0x100b7aa0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 178h], 40000000h
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x1005477b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 2C 56 1C 10: cmp dword ptr [0x101c562c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 65: je 0x100546ec
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 39 2D E4 7D 1A 10: cmp dword ptr [0x101a7de4], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 38: je 0x100546c7
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 60h], ebp
        ; Exact mapped bytes 75 33: jne 0x100546c7
        __asm _emit 0x75
        __asm _emit 0x33
        push 30h
        ; Exact mapped bytes E8 05 81 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, ebp
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 10: je 0x100546ba
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A4 7D 1A 10: mov ecx, dword ptr [0x101a7da4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C8 03 0B 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100546bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        mov eax, dword ptr [esi + 60h]
        cmp eax, ebp
        ; Exact mapped bytes 74 1E: je 0x100546ec
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        push 1
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
        ; Exact mapped bytes 66 8B 86 16 01 00 00: mov ax, word ptr [esi + 0x116]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C0 01 00 00: call 0x100548c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 174h], 1
        mov dword ptr [esi + 170h], 7dh
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 20000h
        ; Exact mapped bytes E8 D1 30 06 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 4A: jmp 0x1005477b
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 43: jne 0x1005477b
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [esi + 60h]
        and eax, 0e5f8h
        or ah, 5
        cmp ecx, ebp
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 74 30: je 0x1005477b
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        cmp ecx, eax
        ; Exact mapped bytes 75 06: jne 0x10054763
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 2D 50 58 1C 10: mov dword ptr [0x101c5850], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 2D E4 7D 1A 10: cmp dword ptr [0x101a7de4], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 10: je 0x1005477b
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x10054778
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 2C: je 0x100547ae
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 1D: je 0x100547a9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp edi, ebp
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10054782
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
