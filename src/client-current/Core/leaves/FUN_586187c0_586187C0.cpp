// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586187C0 .. +0x4C2 bytes.
extern "C" __declspec(naked) void FUN_586187c0_586187C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 0F 84 80 04 00 00: je 0x58618c76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 74 1E: je 0x5861882e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 0F 85 7F 02 00 00: jne 0x58618aad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x586188ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7E 4A: jle 0x586188a4
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 2ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 18: jg 0x58618889
        __asm _emit 0x7f
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2A CD 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x586188a2
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 2ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0F CD 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcd
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586188ec
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 5ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 18: jg 0x586188d3
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E0 CC 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x586188ec
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 C5 CC 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xcc
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x586189aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 4A: jle 0x58618962
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 18: jg 0x58618947
        __asm _emit 0x7f
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 FC CB 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58618960
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E1 CB 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x586189aa
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 18: jg 0x58618991
        __asm _emit 0x7f
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 B2 CB 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x586189aa
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 28h]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 97 CB 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcb
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x58618aa8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x58618aa8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 75 3E: jne 0x58618a32
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 88h]
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
        mov eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 88h]
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
        mov eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 76: jmp 0x58618aa8
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 75 5C: jne 0x58618aa8
        __asm _emit 0x75
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 88h]
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
        mov eax, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 88h]
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
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 88h]
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
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x58618baf
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
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
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x58618baf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        cmp dword ptr [eax + 0ach], 1
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x58618baf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes 0F 86 B2 00 00 00: jbe 0x58618ba3
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0b4h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0b4h], eax
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0C 0C 00 00: call 0x58619730
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ecx + 0b4h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 63: jne 0x58618ba1
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0b4h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        push eax
        push 588ae3d0h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 90h], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 13 D5 E6 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0C: jmp 0x58618baf
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 B2 F5 FF FF: call 0x58618160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 88h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x58618bd9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0D: ja 0x58618bd9
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58618c76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0C: ja 0x58618c0f
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB D9: jmp 0x58618be8
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 F6 C9 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x58618c3f
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x58618c76
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x58618c71
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C6 C9 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x58618be8
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D0 83 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x83
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
    }
}
