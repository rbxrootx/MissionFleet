// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E8770 .. +0x9BE bytes.
extern "C" __declspec(naked) void FUN_584e8770_584E8770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 24: je 0x584e87a9
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 18h], edx
        push 418h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 98 88 34 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        movzx edx, byte ptr [ebp + 8]
        cmp edx, 1
        ; Exact mapped bytes 75 09: jne 0x584e87bb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 9
        ; Exact mapped bytes EB 1F: jmp 0x584e87da
        __asm _emit 0xeb
        __asm _emit 0x1f
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 09: jne 0x584e87cd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes EB 07: jmp 0x584e87d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 3
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, 418h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 4A 88 34 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 6ch], ecx
        imul edx, dword ptr [ebp - 14h], 418h
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes E8 F3 45 36 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x45
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 8], dl
        cmp byte ptr [ebp - 8], 1
        ; Exact mapped bytes 74 19: je 0x584e8845
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 84 55 03 00 00: je 0x584e8b8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 84 28 07 00 00: je 0x584e8f68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 08 00 00: jmp 0x584e9128
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a1b70h
        ; Exact mapped bytes E8 A1 97 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, 418h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        add eax, ecx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        push 400h
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 06 B9 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 418h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 38fh
        mov eax, 418h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 408h], 23ah
        push 588a1ba0h
        ; Exact mapped bytes E8 27 97 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 8C B8 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 588a1bd0h
        ; Exact mapped bytes E8 EF 96 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov edx, 418h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 55 B8 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 588a1c00h
        ; Exact mapped bytes E8 B8 96 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, 418h
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 1D B8 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 418h
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6ch]
        mov ecx, 8
        imul eax, ecx, 0
        mov dword ptr [edx + eax + 404h], 22dh
        mov ecx, 418h
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6ch]
        mov ecx, 8
        imul eax, ecx, 0
        mov dword ptr [edx + eax + 408h], 1fdh
        push 588a1c30h
        ; Exact mapped bytes E8 3E 96 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov ecx, 418h
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        add eax, ecx
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 400h
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 A3 B7 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 588a1c60h
        ; Exact mapped bytes E8 06 96 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        push 400h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 6B B7 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb7
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 22dh
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 408h], 1fdh
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        shl eax, 0
        mov dword ptr [ecx + eax + 404h], 0c8h
        mov ecx, 418h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6ch]
        mov ecx, 8
        shl ecx, 0
        mov dword ptr [edx + ecx + 408h], 118h
        push 588a1c90h
        ; Exact mapped bytes E8 4A 95 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov edx, 418h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 AF B6 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 588a1cc0h
        ; Exact mapped bytes E8 12 95 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov edx, 418h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        ; Exact mapped bytes E8 77 B6 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 404h], 2a8h
        mov edx, 418h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 254h
        push 588a1cf0h
        ; Exact mapped bytes E8 98 94 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes E8 FD B5 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 9D 05 00 00: jmp 0x584e9128
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a1d20h
        ; Exact mapped bytes E8 5B 94 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 C0 B5 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 404h], 38fh
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 23ah
        push 588a1d50h
        ; Exact mapped bytes E8 E1 93 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 74h]
        push eax
        ; Exact mapped bytes E8 46 B5 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb5
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 0
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 0
        push 588a1d80h
        ; Exact mapped bytes E8 67 93 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov edx, 418h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 CD B4 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 418h
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 0
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 0
        push 588a1db0h
        ; Exact mapped bytes E8 F0 92 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov edx, 418h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 4F B4 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 404h], 22dh
        mov edx, 418h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 1fdh
        mov edx, 418h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [edx + eax + 400h], 1
        push 588a1de0h
        ; Exact mapped bytes E8 57 92 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, 418h
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 88h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        ; Exact mapped bytes E8 B0 B3 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb3
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6ch]
        mov ecx, 8
        imul eax, ecx, 0
        mov dword ptr [edx + eax + 404h], 0
        mov ecx, 418h
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 408h], 0
        push 588a1e10h
        ; Exact mapped bytes E8 D1 91 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        add eax, ecx
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        push 400h
        mov edx, dword ptr [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 2A B3 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb3
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 22dh
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 408h], 1fdh
        mov eax, 418h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        shl eax, 0
        mov dword ptr [ecx + eax + 404h], 128h
        mov ecx, 418h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 6ch]
        mov ecx, 8
        shl ecx, 0
        mov dword ptr [edx + ecx + 408h], 118h
        push 588a1e40h
        ; Exact mapped bytes E8 09 91 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov edx, 418h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        ; Exact mapped bytes E8 62 B2 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb2
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 404h], 0
        mov edx, 418h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 0
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x584e9128
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a1e70h
        ; Exact mapped bytes E8 7E 90 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        add edx, eax
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes E8 D7 B1 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb1
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 404h], 38fh
        mov edx, 418h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 23ah
        push 588a1ea0h
        ; Exact mapped bytes E8 F8 8F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 0ach]
        push eax
        ; Exact mapped bytes E8 51 B1 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb1
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 418h
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 0
        mov eax, 418h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 0
        mov edx, 418h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ecx + edx + 400h], 1
        push 588a1ed0h
        ; Exact mapped bytes E8 59 8F 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov edx, 418h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, edx
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        push 400h
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes E8 B3 B0 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb0
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 418h
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        mov eax, 8
        imul edx, eax, 0
        mov dword ptr [ecx + edx + 404h], 0
        mov eax, 418h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 6ch]
        mov edx, 8
        imul ecx, edx, 0
        mov dword ptr [eax + ecx + 408h], 0
        mov edx, 418h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ecx + edx + 400h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
