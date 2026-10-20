// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F3220 .. +0x12C2 bytes.
extern "C" __declspec(naked) void FUN_585f3220_585F3220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3e8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 338h], ecx
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 84 80 12 00 00: je 0x585f44d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 BF F7 FF FF: call 0x585f2a20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 74 1E: je 0x585f329a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 85 DB 03 00 00: jne 0x585f3675
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585f3358
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7E 4A: jle 0x585f3310
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 2ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 18: jg 0x585f32f5
        __asm _emit 0x7f
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 BE 22 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585f330e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 2ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 A3 22 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x585f3358
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 5ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 18: jg 0x585f333f
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 74 22 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585f3358
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 59 22 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x22
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585f3416
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 4A: jle 0x585f33ce
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 18: jg 0x585f33b3
        __asm _emit 0x7f
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 90 21 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585f33cc
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 75 21 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x585f3416
        __asm _emit 0xeb
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 18: jg 0x585f33fd
        __asm _emit 0x7f
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 46 21 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585f3416
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 28h]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 2B 21 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 47 02 00 00: jne 0x585f3675
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 2F 02 00 00: jne 0x585f3675
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x585f35d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
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
        mov eax, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 338h]
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
        mov eax, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 338h]
        movzx edx, word ptr [ecx + 204h]
        cmp edx, 8
        ; Exact mapped bytes 74 12: je 0x585f34c4
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 338h]
        movzx ecx, word ptr [eax + 204h]
        cmp ecx, 9
        ; Exact mapped bytes 75 1F: jne 0x585f34e3
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 34 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x34
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 9A E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9a
        __asm _emit 0xe9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 BE FB FF FF: call 0x585f30a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 AD 0E 00: call 0x586de270
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov al, byte ptr [edx + 1b1h]
        and al, 7fh
        movzx ecx, al
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 16 00 00: call 0x585f4bc0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        movzx eax, word ptr [edx + 1b6h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 C2 F8 FF: call 0x5857f730
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 338h]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x585f35cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588adab4h
        ; Exact mapped bytes E8 A8 EA F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3b8h], eax
        push 0ffh
        mov eax, dword ptr [ebp - 3b8h]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 CD 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        push 588adad4h
        ; Exact mapped bytes E8 7E EA F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3dch], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 3dch]
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE CD 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        push 588adaf4h
        ; Exact mapped bytes E8 54 EA F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3e0h], eax
        push 0ffh
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 CD 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        push 588adab2h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 CD 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x585f3675
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x585f3675
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 83 F3 FF FF: call 0x585f2980
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 338h]
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
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 338h]
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
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 338h]
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
        mov edx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x585f3736
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x585f3736
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 338h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, dword ptr [ecx + 60h]
        ; Exact mapped bytes 75 0A: jne 0x585f36d8
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F8 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 55: je 0x585f3736
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 35ch], ecx
        cmp dword ptr [ebp - 35ch], 0
        ; Exact mapped bytes 74 26: je 0x585f371f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 35ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes FF 95 1C FC FF FF: call dword ptr [ebp - 0x3e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585f3729
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 388h], 0
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 338h]
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
        ; Exact mapped bytes 0F 85 7E 0C 00 00: jne 0x585f43d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 87 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        ; Exact mapped bytes EB 11: jmp 0x585f3778
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 BE 89 E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        cmp dword ptr [ebp - 348h], 0
        ; Exact mapped bytes 74 16: je 0x585f3797
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 348h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 348h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB D0: jmp 0x585f3767
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 0F 85 A3 02 00 00: jne 0x585f3a4a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        cmp dword ptr [edx + 68h], 40000000h
        ; Exact mapped bytes 0F 85 7F 02 00 00: jne 0x585f3a39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 F5 11 E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x11
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        cmp eax, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes 75 23: jne 0x585f37fc
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 46 1F EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        cmp eax, dword ptr [ecx + 0ech]
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x585f39e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 B3 11 E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 0e8h]
        sub edx, eax
        mov dword ptr [ebp - 340h], edx
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 FE 1E EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1e
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 0ech]
        sub edx, eax
        mov dword ptr [ebp - 33ch], edx
        cmp dword ptr [ebp - 340h], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585f38db
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 340h], 8
        ; Exact mapped bytes 7D 7F: jge 0x585f38db
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 340h], -4
        ; Exact mapped bytes 7E 57: jle 0x585f38bc
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 340h], 4
        ; Exact mapped bytes 7D 4E: jge 0x585f38bc
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 340h], 0
        ; Exact mapped bytes 7D 0C: jge 0x585f3883
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 364h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585f38ae
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 340h], 0
        ; Exact mapped bytes 7E 0C: jle 0x585f3898
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 360h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585f38a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 360h], 0
        mov eax, dword ptr [ebp - 360h]
        mov dword ptr [ebp - 364h], eax
        mov ecx, dword ptr [ebp - 364h]
        mov dword ptr [ebp - 368h], ecx
        ; Exact mapped bytes EB 11: jmp 0x585f38cd
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 340h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 368h], eax
        mov edx, dword ptr [ebp - 368h]
        mov dword ptr [ebp - 36ch], edx
        ; Exact mapped bytes EB 15: jmp 0x585f38f0
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 340h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 36ch], eax
        mov eax, dword ptr [ebp - 36ch]
        mov dword ptr [ebp - 340h], eax
        cmp dword ptr [ebp - 33ch], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585f3991
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 33ch], 8
        ; Exact mapped bytes 7D 7F: jge 0x585f3991
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 33ch], -4
        ; Exact mapped bytes 7E 57: jle 0x585f3972
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 33ch], 4
        ; Exact mapped bytes 7D 4E: jge 0x585f3972
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes 7D 0C: jge 0x585f3939
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 374h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585f3964
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes 7E 0C: jle 0x585f394e
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 370h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585f3958
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 370h], 0
        mov ecx, dword ptr [ebp - 370h]
        mov dword ptr [ebp - 374h], ecx
        mov edx, dword ptr [ebp - 374h]
        mov dword ptr [ebp - 378h], edx
        ; Exact mapped bytes EB 11: jmp 0x585f3983
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 33ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 378h], eax
        mov eax, dword ptr [ebp - 378h]
        mov dword ptr [ebp - 37ch], eax
        ; Exact mapped bytes EB 15: jmp 0x585f39a6
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 33ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 37ch]
        mov dword ptr [ebp - 33ch], ecx
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 38ch], eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 B3 14 FF FF: call 0x585e4e90
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x585f3a37
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 CF 0F E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        cmp eax, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes 74 1F: je 0x585f3a1e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 118h]
        ; Exact mapped bytes E8 20 1D EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        cmp eax, dword ptr [ecx + 0ech]
        ; Exact mapped bytes 75 19: jne 0x585f3a37
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 68h], 0
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 0F FF FF: call 0x585e4960
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x585f3a45
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 4C F4 FF FF: call 0x585f2e90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x585f3b3b
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        cmp dword ptr [eax + 6ch], 40000000h
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x585f3b3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 0a8h]
        add edx, 1
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 0a8h], edx
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x585f3b0e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 0a8h]
        cmp ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 7C 67: jl 0x585f3b0c
        __asm _emit 0x7c
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 0a4h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 0a4h], eax
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 390h], ecx
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 46 BD EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbd
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 F5 F6 10 00: call 0x58703200
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x585f3b3b
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 2E E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 86 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 AA FC FF FF: mov word ptr [ebp - 0x356], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 356h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 B0 F8 FF: call 0x5857ebd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 36 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 34ch]
        sub ecx, 4
        mov dword ptr [ebp - 34ch], ecx
        cmp dword ptr [ebp - 34ch], 0ch
        ; Exact mapped bytes 0F 87 FA 00 00 00: ja 0x585f3c69
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes FF 24 95 E4 44 5F 58: jmp dword ptr [edx*4 + 0x585f44e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 338h]
        add eax, 2cch
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 5D C0 FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x585f3c69
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        add ecx, 2d4h
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 3F C0 FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x585f3c69
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        add edx, 2d0h
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 21 C0 FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x585f3c69
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        add eax, 2d8h
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 04 C0 FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7A: jmp 0x585f3c69
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 338h]
        add ecx, 2e4h
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 E9 BF FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5F: jmp 0x585f3c69
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 338h]
        add edx, 2e8h
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 CE BF FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 44: jmp 0x585f3c69
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 338h]
        movzx ecx, word ptr [eax + 1b8h]
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x585f3c4f
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 338h]
        add edx, 2e0h
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 A2 BF FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 18: jmp 0x585f3c69
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 338h]
        add eax, 2ech
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 88 BF FF FF: call 0x585efbf0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 2D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 E6 FF FF: call 0x585f22f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 05 00 00: je 0x585f41a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 35 EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0ch
        ; Exact mapped bytes 0F 84 02 05 00 00: je 0x585f41a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 87 E6 FF FF: call 0x585f2330
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x585f3d18
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 52 E6 FF FF: call 0x585f2310
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x585f3d18
        __asm _emit 0x75
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 A3 E0 FF FF: call 0x585f1d70
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x585f3d18
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 FE BE EA FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbe
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x585f3d16
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 09 EE F2 FF: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xee
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x585f3d16
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 2b0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 2b0h], eax
        ; Exact mapped bytes EB 40: jmp 0x585f3d58
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 2f8h], 0
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 2b0h], 0
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 300h], 190h
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 308h], 0c8h
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax + 2b0h]
        cmp edx, dword ptr [ecx + 308h]
        ; Exact mapped bytes 0F 86 E9 02 00 00: jbe 0x585f405f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        cmp dword ptr [eax + 2f8h], 0
        ; Exact mapped bytes 0F 85 D6 02 00 00: jne 0x585f405f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 2fch], 1
        mov edx, dword ptr [ebp - 338h]
        cmp dword ptr [edx + 300h], 0
        ; Exact mapped bytes 0F 8E 1A 02 00 00: jle 0x585f3fc6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        mov eax, dword ptr [eax + 300h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 DE 01 00 00: jne 0x585f3fa6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 300h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 394h], eax
        push 588adb14h
        ; Exact mapped bytes E8 04 E2 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 398h], eax
        mov edx, dword ptr [ebp - 394h]
        push edx
        mov eax, dword ptr [ebp - 398h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0ffff00h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 C5 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        mov eax, dword ptr [eax + 300h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 39ch], eax
        push 588adb48h
        ; Exact mapped bytes E8 A2 E1 F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe1
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3a0h], eax
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov eax, dword ptr [ebp - 3a0h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 350h], 0
        push 30h
        push 0
        lea edx, [ebp - 334h]
        push edx
        ; Exact mapped bytes E8 81 8F 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8f
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea eax, [ebp - 334h]
        push eax
        ; Exact mapped bytes E8 EB 89 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 CC D2 25 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 350h], eax
        mov edx, dword ptr [ebp - 350h]
        add edx, 31h
        mov dword ptr [ebp - 350h], edx
        push 100h
        push 0
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes E8 31 8F 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8f
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea ecx, [ebp - 334h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes E8 99 89 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 7A D2 25 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        lea edx, [ebp - 1d4h]
        push edx
        ; Exact mapped bytes E8 73 89 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 350h]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        push 800h
        push 2
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E CA F7 FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 0B E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3a4h], edx
        mov eax, dword ptr [ebp - 3a4h]
        push eax
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 4D 7E 1C 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7e
        __asm _emit 0x1c
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 0B E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 380h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 3ach], eax
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes FF 95 54 FC FF FF: call dword ptr [ebp - 0x3ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 300h]
        sub edx, 1
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 300h], edx
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x585f405f
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 09 BC EA FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585f3ffb
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 308h], 64h
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 300h], 0ffffff9ch
        mov ecx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [ecx + 174h]
        ; Exact mapped bytes E8 F4 EA F2 FF: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585f4030
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 308h], 96h
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 300h], 0ffffff06h
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 3b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 91 1D E9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 338h]
        mov dword ptr [eax + 2f8h], 1
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 2f8h], 0
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x585f41a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        cmp dword ptr [edx + 300h], 0ffffff06h
        ; Exact mapped bytes 7D 79: jge 0x585f40fd
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 6B EA F2 FF: call 0x58522b00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x585f40fd
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 300h], 96h
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 2f8h], 0
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 3b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 08 1D E9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 3d0h], eax
        push 3
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 59 CA 10 00: call 0x58700b50
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xca
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585f4185
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 300h], 0
        ; Exact mapped bytes 75 35: jne 0x585f4141
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 C3 BA EA FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x585f4141
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 3bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 10 CA 10 00: call 0x58700b50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xca
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 338h]
        cmp dword ptr [edx + 300h], -64h
        ; Exact mapped bytes 75 35: jne 0x585f4185
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 7F BA EA FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xba
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x585f4185
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 3c0h], edx
        push 2
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 CC C9 10 00: call 0x58700b50
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc9
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 338h]
        mov ecx, dword ptr [eax + 300h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 338h]
        mov dword ptr [edx + 300h], ecx
        mov eax, dword ptr [ebp - 338h]
        cmp dword ptr [eax + 2c4h], 0
        ; Exact mapped bytes 0F 84 1D 02 00 00: je 0x585f43d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 2c8h], 0
        ; Exact mapped bytes 0F 8E 13 01 00 00: jle 0x585f42d9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 2c8h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x585f42b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 2c8h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 3c4h], eax
        push 588adb7ch
        ; Exact mapped bytes E8 EA DD F2 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3c8h], eax
        mov edx, dword ptr [ebp - 3c4h]
        push edx
        mov eax, dword ptr [ebp - 3c8h]
        push eax
        lea ecx, [ebp - 304h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 7E E9 FF: call 0x5848c110
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 D5 1C 00: call 0x587c17b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x00
        push 0ffff00h
        lea edx, [ebp - 304h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA C0 0E 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 08 E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3cch], eax
        mov ecx, dword ptr [ebp - 3cch]
        push ecx
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 3A 7B 1C 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7b
        __asm _emit 0x1c
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 07 E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        mov edx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes FF 95 2C FC FF FF: call dword ptr [ebp - 0x3d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 2c8h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 2c8h], eax
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x585f43d0
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 26 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x26
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 E0 FF FF: call 0x585f22f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x585f43d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 338h]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 FC BE FF FF: call 0x585f0200
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 2E EE FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        mov dword ptr [ebp - 354h], eax
        mov ecx, dword ptr [ebp - 354h]
        sub ecx, 4
        mov dword ptr [ebp - 354h], ecx
        cmp dword ptr [ebp - 354h], 0ch
        ; Exact mapped bytes 0F 87 97 00 00 00: ja 0x585f43d0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 354h]
        ; Exact mapped bytes FF 24 95 18 45 5F 58: jmp dword ptr [edx*4 + 0x585f4518]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0x45
        __asm _emit 0x5f
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 92 F8 FF: call 0x5857d5b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7C: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 A1 F8 FF: call 0x5857e540
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6E: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 92 F8 FF: call 0x5857d5f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 89 F8 FF: call 0x5857cc80
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 52: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 A6 F8 FF: call 0x5857ea00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 44: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 94 F8 FF: call 0x5857d820
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB AB F8 FF: call 0x5857ef60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xab
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD A7 F8 FF: call 0x5857eb90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 85 F8 FF: call 0x5857c8f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0C: jmp 0x585f43d0
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 A1 F8 FF: call 0x5857e5b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x585f440f
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 338h]
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
        cmp edx, 0dh
        ; Exact mapped bytes 75 23: jne 0x585f440f
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 338h]
        cmp dword ptr [eax + 274h], 64h
        ; Exact mapped bytes 75 14: jne 0x585f440f
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 338h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 338h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x585f4439
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0D: ja 0x585f4439
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 344h], eax
        cmp dword ptr [ebp - 344h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585f44d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 344h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0C: ja 0x585f446f
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 344h], 0
        ; Exact mapped bytes EB D9: jmp 0x585f4448
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 96 11 EA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 338h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x585f449f
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 344h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 344h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x585f44d6
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x585f44d1
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 66 11 EA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x11
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 344h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 344h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 3d8h]
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x585f4448
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 70 CB 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcb
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
    }
}
