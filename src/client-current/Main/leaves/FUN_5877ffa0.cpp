// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877FFA0 .. +0x37A bytes.
extern "C" __declspec(naked) void FUN_5877ffa0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 6C 03 00 00: je 0x5878031b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 66 83 B9 F0 05 01 00 0F: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0f
        push edi
        ; Exact mapped bytes 0F 85 36 03 00 00: jne 0x587802fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push ebp
        push edx
        push eax
        ; Exact mapped bytes E8 3B 5E 06 00: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        mov eax, dword ptr [esi + 0b0h]
        lea ebp, [ebx + 1]
        lea edi, [ebx + 8]
        ; Exact mapped bytes 74 33: je 0x58780018
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        lea ecx, [esi + 68h]
        ; Exact mapped bytes EB 08: jmp 0x58780000
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, 2
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebp
        ; Exact mapped bytes 75 F3: jne 0x58780005
        __asm _emit 0x75
        __asm _emit 0xf3
        sub edi, ebp
        ; Exact mapped bytes 75 EA: jne 0x58780000
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 35: jmp 0x5878004d
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        lea ecx, [esi + 68h]
        mov edx, 2
        mov eax, dword ptr [ecx]
        mov ebx, 0fffeh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, ebp
        ; Exact mapped bytes 75 EE: jne 0x58780035
        __asm _emit 0x75
        __asm _emit 0xee
        sub edi, ebp
        ; Exact mapped bytes 75 E5: jne 0x58780030
        __asm _emit 0x75
        __asm _emit 0xe5
        xor ebx, ebx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        movzx ecx, byte ptr [edx + 354h]
        mov eax, dword ptr [esi + 0b8h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 32 01 00 00: jne 0x5878019d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0c0h]
        sub edx, 35ch
        push edx
        mov edx, dword ptr [esi + 0bch]
        sub eax, 3e8h
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 19 5C 06 00: call 0x587e5cb0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        cmp byte ptr [esi + 0c4h], bl
        ; Exact mapped bytes 0F 85 84 01 00 00: jne 0x58780227
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 15: jle 0x587800c6
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587800c6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x587800c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b0h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x587800fd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
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
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0beh
        ; Exact mapped bytes 7E 16: jle 0x58780124
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58780124
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes EB 02: jmp 0x58780126
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [ecx + 2c0h]
        mov ecx, dword ptr [ecx + edx*4 + 5a0h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x5878016e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        cmp byte ptr [esi + 0cdh], bl
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x58780227
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 21c4ch]
        mov edx, dword ptr [esi + 0a8h]
        add dword ptr [eax + 918h], edx
        mov byte ptr [esi + 0cdh], bl
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58780227
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58780227
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0c4h], bl
        ; Exact mapped bytes 75 79: jne 0x58780227
        __asm _emit 0x75
        __asm _emit 0x79
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 15: jle 0x587801d1
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x587801d1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 280h
        ; Exact mapped bytes EB 02: jmp 0x587801d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0b0h]
        push eax
        ; Exact mapped bytes E8 41 47 FB FF: call 0x58734920
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0bfh
        ; Exact mapped bytes 7E 16: jle 0x58780206
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58780206
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 2fch]
        ; Exact mapped bytes EB 02: jmp 0x58780208
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c8h]
        push eax
        mov eax, dword ptr [edx + 2c0h]
        mov ecx, dword ptr [eax + ecx*4 + 5a0h]
        ; Exact mapped bytes E8 99 14 FB FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp byte ptr [esi + 0ceh], bl
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x587802fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 2C C4 98 58: mov edi, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        cmp dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes 75 08: jne 0x58780249
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        sub eax, dword ptr [esi + 0d0h]
        cmp eax, 0ah
        ; Exact mapped bytes 73 22: jae 0x58780278
        __asm _emit 0x73
        __asm _emit 0x22
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c8h]
        mov eax, dword ptr [edx + 2c0h]
        mov eax, dword ptr [eax + ecx*4 + 5b8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x587802fc
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bb8h
        ; Exact mapped bytes 72 30: jb 0x587802af
        __asm _emit 0x72
        __asm _emit 0x30
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 2c0h]
        mov ecx, dword ptr [esi + 0c8h]
        mov eax, dword ptr [eax + ecx*4 + 5b8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov byte ptr [esi + 0ceh], bl
        mov dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes EB 4D: jmp 0x587802fc
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp eax, 7d0h
        ; Exact mapped bytes 72 1E: jb 0x587802d4
        __asm _emit 0x72
        __asm _emit 0x1e
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [eax + 2c0h]
        mov eax, dword ptr [ecx + edx*4 + 5b8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes EB 28: jmp 0x587802fc
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp eax, 3e8h
        ; Exact mapped bytes 72 21: jb 0x587802fc
        __asm _emit 0x72
        __asm _emit 0x21
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [eax + 2c0h]
        mov eax, dword ptr [ecx + edx*4 + 5b8h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        pop ebp
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 15: je 0x58780319
        __asm _emit 0x74
        __asm _emit 0x15
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x5878031d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        cmp edi, ebx
        ; Exact mapped bytes 75 EB: jne 0x58780304
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
    }
}
