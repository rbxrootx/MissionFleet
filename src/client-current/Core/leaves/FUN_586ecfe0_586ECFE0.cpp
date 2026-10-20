// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ECFE0 .. +0x642 bytes.
extern "C" __declspec(naked) void FUN_586ecfe0_586ECFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 27 06 00 00: jne 0x586ed61a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b80h]
        ; Exact mapped bytes 0F 85 45 02 00 00: jne 0x586ed24a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 2E 02 00 00: jle 0x586ed245
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 0b75h]
        sub dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0b75h], dl
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        movzx edx, byte ptr [edx + ecx + 58902fc1h]
        test edx, edx
        ; Exact mapped bytes 74 7B: je 0x586ed0ca
        __asm _emit 0x74
        __asm _emit 0x7b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed061
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x586ed0ca
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8 + 8]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 36: je 0x586ed0c8
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8 + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 19 8E D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x586ed058
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        movzx ecx, byte ptr [ecx + eax + 58902fc0h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x586ed1f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed103
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D E6 00 00 00: jge 0x586ed1f3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x586ed1ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 8D D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 3A: jne 0x586ed1b0
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 84 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586ed1ee
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 38: jne 0x586ed1ee
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 18h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C3 83 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x586ed0fa
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b78h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed212
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1A: jge 0x586ed232
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B1 8C D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586ed209
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 FA FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 05 00 00: call 0x586ed760
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D0 03 00 00: jmp 0x586ed61a
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b84h]
        ; Exact mapped bytes 0F 85 EF 01 00 00: jne 0x586ed44b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 0b75h]
        add cl, 1
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 0b75h], cl
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        movzx ecx, byte ptr [ecx + eax + 58902fbfh]
        test ecx, ecx
        ; Exact mapped bytes 74 7B: je 0x586ed30f
        __asm _emit 0x74
        __asm _emit 0x7b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed2a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x586ed30f
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8 - 8]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 36: je 0x586ed30d
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8 - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D4 8B D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x586ed29d
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        movzx eax, byte ptr [eax + edx + 58902fc0h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x586ed3f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed348
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x586ed3f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 73: je 0x586ed3ef
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 30 8B D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 38: jne 0x586ed3ef
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 28h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C2 81 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x586ed33f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b78h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed413
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1A: jge 0x586ed433
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 8A D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8a
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586ed40a
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 F8 FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 03 00 00: call 0x586ed760
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x586ed61a
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b88h]
        ; Exact mapped bytes 0F 85 A1 01 00 00: jne 0x586ed5fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 64h]
        ; Exact mapped bytes E8 1F 84 DA FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x586ed4a4
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 7
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b75h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 589030e0h]
        mov dword ptr [edx + 0b78h], eax
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x586ed5fc
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ed4b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 25 01 00 00: jge 0x586ed5e5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x586ed5c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 5
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b75h]
        movzx edx, byte ptr [edx + ecx + 58902fc0h]
        test edx, edx
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x586ed5c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 97 89 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x89
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 3A: jne 0x586ed58a
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 34h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 29 80 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586ed5c8
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 75 38: jne 0x586ed5c8
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 38h], edx
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E9 7F 0C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 01 89 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x89
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C8 FE FF FF: jmp 0x586ed4ad
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 F6 FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b78h], 0
        ; Exact mapped bytes EB 1C: jmp 0x586ed61a
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b7ch]
        ; Exact mapped bytes 75 0E: jne 0x586ed61a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
