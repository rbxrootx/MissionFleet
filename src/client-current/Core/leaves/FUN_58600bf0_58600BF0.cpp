// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58600BF0 .. +0xC96 bytes.
extern "C" __declspec(naked) void FUN_58600bf0_58600BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 1d0h], ecx
        mov eax, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 428h]
        mov dword ptr [ebp - 298h], ecx
        push 1
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 9E 51 E8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [edx + 6e0h], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        shr ecx, 1eh
        and ecx, 1
        ; Exact mapped bytes 74 22: je 0x58600c82
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 8b0h]
        mov dword ptr [ebp - 1f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 61 52 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x52
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x58600ca2
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 8b0h]
        mov dword ptr [ebp - 1f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 3F 52 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x52
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x58600d72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 410h]
        mov dword ptr [ebp - 1fch], eax
        push 1
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 0F 52 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x52
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 414h]
        mov dword ptr [ebp - 200h], edx
        push 1
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 F0 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 418h]
        mov dword ptr [ebp - 204h], ecx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 D1 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 420h]
        mov dword ptr [ebp - 208h], eax
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 B2 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 424h]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 93 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 41ch]
        mov dword ptr [ebp - 210h], ecx
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 74 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FA 03 00 00: jmp 0x5860116c
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x58600e42
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 410h]
        mov dword ptr [ebp - 214h], edx
        push 1
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 3F 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 414h]
        mov dword ptr [ebp - 218h], ecx
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 20 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 418h]
        mov dword ptr [ebp - 21ch], eax
        push 1
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 01 51 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 420h]
        mov dword ptr [ebp - 220h], edx
        push 0
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 E2 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 424h]
        mov dword ptr [ebp - 224h], ecx
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 C3 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 41ch]
        mov dword ptr [ebp - 228h], eax
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 A4 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2A 03 00 00: jmp 0x5860116c
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 0ch]
        test edx, edx
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x58600f11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 410h]
        mov dword ptr [ebp - 22ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 70 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 414h]
        mov dword ptr [ebp - 230h], eax
        push 0
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 51 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 418h]
        mov dword ptr [ebp - 234h], edx
        push 0
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 32 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 420h]
        mov dword ptr [ebp - 238h], ecx
        push 1
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 13 50 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 424h]
        mov dword ptr [ebp - 23ch], eax
        push 0
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 F4 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 41ch]
        mov dword ptr [ebp - 240h], edx
        push 0
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 D5 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5B 02 00 00: jmp 0x5860116c
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 0ch]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x58600fe1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 410h]
        mov dword ptr [ebp - 244h], eax
        push 1
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 A0 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 414h]
        mov dword ptr [ebp - 248h], edx
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 81 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 418h]
        mov dword ptr [ebp - 24ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 62 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 420h]
        mov dword ptr [ebp - 250h], eax
        push 1
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 43 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 424h]
        mov dword ptr [ebp - 254h], edx
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 24 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 41ch]
        mov dword ptr [ebp - 258h], ecx
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 05 4F E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x5860116c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 0ch]
        cmp eax, 64h
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x586010b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 410h]
        mov dword ptr [ebp - 25ch], edx
        push 1
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 D0 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 414h]
        mov dword ptr [ebp - 260h], ecx
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 B1 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 418h]
        mov dword ptr [ebp - 264h], eax
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 92 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 420h]
        mov dword ptr [ebp - 268h], edx
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 73 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 424h]
        mov dword ptr [ebp - 26ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 54 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 41ch]
        mov dword ptr [ebp - 270h], eax
        push 1
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 35 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x5860116c
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 410h]
        mov dword ptr [ebp - 274h], edx
        push 0
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 10 4E E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 414h]
        mov dword ptr [ebp - 278h], ecx
        push 0
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 F1 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 418h]
        mov dword ptr [ebp - 27ch], eax
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 D2 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 420h]
        mov dword ptr [ebp - 280h], edx
        push 0
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 B3 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 424h]
        mov dword ptr [ebp - 284h], ecx
        push 0
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 94 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 41ch]
        mov dword ptr [ebp - 288h], eax
        push 0
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 75 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 47 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58601201
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 47 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 71: je 0x58601201
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 47 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 74 61: je 0x58601201
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 47 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x58601201
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 1fh
        and edx, 1
        ; Exact mapped bytes 74 22: je 0x586011df
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 8b4h]
        mov dword ptr [ebp - 28ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 04 4D E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x586011ff
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1d0h]
        mov eax, dword ptr [edx + 8b4h]
        mov dword ptr [ebp - 290h], eax
        push 0
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 E2 4C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x58601221
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 8b4h]
        mov dword ptr [ebp - 294h], edx
        push 0
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 C0 4C E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        and ecx, 0ffh
        ; Exact mapped bytes 66 89 0D 2A 05 96 58: mov word ptr [0x5896052a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        sub ecx, edx
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [edx + 8dch], ecx
        ; Exact mapped bytes A1 FC 04 96 58: mov eax, dword ptr [0x589604fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov eax, dword ptr [ebp - 1d0h]
        mov dword ptr [eax + 8e0h], edx
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        xor edx, 55555555h
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 FB 0D 00: call 0x586e0e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        xor ecx, 55555555h
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 0D 0E 00: call 0x586e2090
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 E9 EA FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 57 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x57
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B B1 E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        mov dword ptr [ebp - 1e4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586012e6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1e4h]
        add edx, 1
        mov dword ptr [ebp - 1e4h], edx
        cmp dword ptr [ebp - 1e4h], 20h
        ; Exact mapped bytes 7D 67: jge 0x58601356
        __asm _emit 0x7d
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 1e4h]
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + eax*4 + 2f4h]
        mov dword ptr [ebp - 29ch], edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 F6 E7 EA FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 8E 59 13 00: call 0x58736cc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 BC 15 FD FF: call 0x585d2900
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, al
        push eax
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 ED 8D FF FF: call 0x585fa140
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 81: jmp 0x586012d7
        __asm _emit 0xeb
        __asm _emit 0x81
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        shr edx, 8
        and edx, 1
        ; Exact mapped bytes 74 29: je 0x5860138d
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 50 EF FF: call 0x584f63f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov eax, dword ptr [ebp - 2a0h]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 05 18 00: call 0x58781950
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 79 03 00 00: jmp 0x58601706
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 A4 FF FF: call 0x585fb820
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 72h
        mov esi, eax
        lea edi, [ebp - 1cch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE A7 FF FF: call 0x585fbb70
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x5860156f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586013d8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1d4h]
        add edx, 1
        mov dword ptr [ebp - 1d4h], edx
        cmp dword ptr [ebp - 1d4h], 20h
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x586014a5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 19 E7 EA FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x586014a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 FF E6 EA FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        imul edx, dword ptr [ebp - 1d4h], 6
        lea eax, [ebp + edx - 186h]
        mov ecx, 2
        shl ecx, 1
        movzx edx, word ptr [eax + ecx]
        xor edx, 55h
        mov dword ptr [ebp - 2a4h], edx
        imul eax, dword ptr [ebp - 1d4h], 6
        lea ecx, [ebp + eax - 186h]
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [ecx + edx]
        xor eax, 55h
        mov dword ptr [ebp - 2a8h], eax
        mov ecx, 2
        imul edx, ecx, 0
        imul eax, dword ptr [ebp - 1d4h], 6
        lea ecx, [ebp + eax - 186h]
        movzx edx, word ptr [ecx + edx]
        xor edx, 55h
        mov dword ptr [ebp - 2ach], edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 2ach]
        push edx
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 51 DC EF FF: call 0x584ff0f0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xdc
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x586013c9
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 00 3C EA FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3c
        __asm _emit 0xea
        __asm _emit 0xff
        xor eax, 55555555h
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 9A 35 E8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2b4h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586014ea
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1d4h]
        add edx, 1
        mov dword ptr [ebp - 1d4h], edx
        cmp dword ptr [ebp - 1d4h], 20h
        ; Exact mapped bytes 7D 77: jge 0x5860156a
        __asm _emit 0x7d
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 1d4h]
        lea ecx, [ebp + eax*2 - 1c7h]
        mov edx, 1
        imul eax, edx, 0
        ; Exact mapped bytes 66 0F B6 0C 01: movzx cx, byte ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 1d4h]
        mov eax, dword ptr [ebp - 1d8h]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        imul eax, eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 1d4h]
        lea edx, [ebp + ecx*2 - 1c7h]
        mov eax, 1
        shl eax, 0
        ; Exact mapped bytes 66 0F B6 0C 02: movzx cx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 1d4h]
        mov eax, dword ptr [ebp - 1d8h]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x586014db
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 01 00 00: jmp 0x58601706
        __asm _emit 0xe9
        __asm _emit 0x97
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
        ; Exact mapped bytes E8 36 41 E9 FF: call 0x584956b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx ecx, al
        and ecx, 80h
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x5860166b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x58601666
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1e8h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x58601666
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 B2 34 E8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2d8h], edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 9E 34 E8 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2d8h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [ebp - 1dch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586015e6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1dch]
        add edx, 1
        mov dword ptr [ebp - 1dch], edx
        cmp dword ptr [ebp - 1dch], 20h
        ; Exact mapped bytes 7D 77: jge 0x58601666
        __asm _emit 0x7d
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 1dch]
        lea ecx, [ebp + eax*2 - 1c7h]
        mov edx, 1
        imul eax, edx, 0
        ; Exact mapped bytes 66 0F B6 0C 01: movzx cx, byte ptr [ecx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 1dch]
        mov eax, dword ptr [ebp - 1d8h]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        imul eax, eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 1dch]
        lea edx, [ebp + ecx*2 - 1c7h]
        mov eax, 1
        shl eax, 0
        ; Exact mapped bytes 66 0F B6 0C 02: movzx cx, byte ptr [edx + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 1dch]
        mov eax, dword ptr [ebp - 1d8h]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        shl eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x586015d7
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58601706
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1e0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58601686
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 1e0h]
        add ecx, 1
        mov dword ptr [ebp - 1e0h], ecx
        cmp dword ptr [ebp - 1e0h], 20h
        ; Exact mapped bytes 7D 77: jge 0x58601706
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 1e0h]
        lea eax, [ebp + edx*2 - 1c7h]
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 66 0F B6 04 10: movzx ax, byte ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 1e0h]
        mov edx, dword ptr [ebp - 1d8h]
        lea ecx, [edx + ecx*4 + 0c6ch]
        mov edx, 2
        imul edx, edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1e0h]
        lea ecx, [ebp + eax*2 - 1c7h]
        mov edx, 1
        shl edx, 0
        ; Exact mapped bytes 66 0F B6 04 11: movzx ax, byte ptr [ecx + edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 1e0h]
        mov edx, dword ptr [ebp - 1d8h]
        lea ecx, [edx + ecx*4 + 0c6ch]
        mov edx, 2
        shl edx, 0
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x58601677
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 9F 39 EA FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x39
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58601717
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0C: jmp 0x58601723
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E C3 0C 00: call 0x586cda30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc3
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 C8 FF FF: call 0x585fdfd0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 A1 FF FF: call 0x585fb8c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x58601760
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 AD 5A ED FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        push 0
        push 0
        push 0
        push 41ah
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 11 76 ED FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [eax + 8ach]
        ; Exact mapped bytes E8 0F 33 EE FF: call 0x584e4a80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x58601874
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 32 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2c4h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2c0h], edx
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 12 A6 1B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa6
        __asm _emit 0x1b
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 32 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov ecx, dword ptr [ebp - 1ech]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes FF 95 38 FD FF FF: call dword ptr [ebp - 0x2c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov ecx, dword ptr [ecx + 8ach]
        ; Exact mapped bytes E8 8F 6D ED FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        push 34h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 32 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2cch], edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 9E A5 1B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa5
        __asm _emit 0x1b
        __asm _emit 0x00
        push 34h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 32 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov ecx, dword ptr [ebp - 1f0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes FF 95 2C FD FF FF: call dword ptr [ebp - 0x2d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [ecx + 8ach]
        mov eax, dword ptr [ebp - 1d0h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 8ach]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D0 F7 22 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0x22
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
