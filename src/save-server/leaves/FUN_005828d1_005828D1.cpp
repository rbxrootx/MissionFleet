// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005828D1 .. +0xA89 bytes.
extern "C" __declspec(naked) void FUN_005828d1_005828D1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eba7h
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
        sub esp, 0b4h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0a8h], ecx
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 0a8h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 17: jne 0x582936
        __asm _emit 0x75
        __asm _emit 0x17
        push 6788ech
        push 678928h
        ; Exact mapped bytes E8 E7 DC F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdc
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 0B 0A 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 7D 2F EE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2f
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0D: je 0x582959
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 10h], 0fffffffdh
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        and eax, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x58299c
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 77 14: ja 0x582989
        __asm _emit 0x77
        __asm _emit 0x14
        push 0beh
        push 6788ach
        ; Exact mapped bytes E8 BC 63 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x582989
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x58296f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 34h], 1
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 3B 05 00 00: je 0x582ee1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c6h
        push 6788ach
        mov eax, dword ptr [ebp - 38h]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 17 97 F4 FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 75 14: jne 0x5829e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c7h
        push 6788ach
        ; Exact mapped bytes E8 5D 63 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5829e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5829ce
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 38h]
        shl ecx, 4
        push ecx
        push 0
        mov edx, dword ptr [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 BA 2E EE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, 1
        shl ecx, 4
        mov edx, dword ptr [ebp - 74h]
        add edx, ecx
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 70h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B2 04 00 00: je 0x582ee1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 74h]
        cmp edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 73 14: jae 0x582a4b
        __asm _emit 0x73
        __asm _emit 0x14
        push 0d1h
        push 6788ach
        ; Exact mapped bytes E8 FA 62 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x582a4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x582a2f
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes 66 0F B6 11: movzx dx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 74h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x582a8d
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 81 E1 BF FF: and cx, 0xffbf
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xbf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        or ch, 40h
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 74h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 4002h
        ; Exact mapped bytes 7F 39: jg 0x582ae0
        __asm _emit 0x7f
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ach], 4002h
        ; Exact mapped bytes 0F 84 8D 02 00 00: je 0x582d44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ach]
        sub edx, 2
        mov dword ptr [ebp - 0ach], edx
        cmp dword ptr [ebp - 0ach], 0fh
        ; Exact mapped bytes 0F 87 D4 03 00 00: ja 0x582ea7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 24 85 5A 33 58 00: jmp dword ptr [eax*4 + 0x58335a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x58
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ach]
        sub ecx, 4003h
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0eh
        ; Exact mapped bytes 0F 87 A8 03 00 00: ja 0x582ea7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 24 95 9A 33 58 00: jmp dword ptr [edx*4 + 0x58339a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x9a
        __asm _emit 0x33
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp + 1ch]
        mov al, byte ptr [edx - 4]
        mov byte ptr [ecx + 8], al
        ; Exact mapped bytes E9 A4 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 8B 48 FC: mov cx, word ptr [eax - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0xfc
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        ; Exact mapped bytes E9 88 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 6E 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 8
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, 8
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes D9 5A 08: fstp dword ptr [edx + 8]
        __asm _emit 0xd9
        __asm _emit 0x5a
        __asm _emit 0x08
        ; Exact mapped bytes E9 52 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 8
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, 8
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes DD 5A 08: fstp qword ptr [edx + 8]
        __asm _emit 0xdd
        __asm _emit 0x5a
        __asm _emit 0x08
        ; Exact mapped bytes E9 36 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 8
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        sub ecx, 8
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 74h]
        ; Exact mapped bytes DD 5A 08: fstp qword ptr [edx + 8]
        __asm _emit 0xdd
        __asm _emit 0x5a
        __asm _emit 0x08
        ; Exact mapped bytes E9 1A 03 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [edx + 8], eax
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes E9 F8 02 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 8], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 0E: je 0x582c08
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x582c08
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 D4 02 F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x582c37
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes EB 3F: jmp 0x582c76
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 4A 33 EE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], esp
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        ; Exact mapped bytes E8 80 A9 EC FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        ; Exact mapped bytes FF 15 F4 BA 68 00: call dword ptr [0x68baf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 8], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 0E: je 0x582c9d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x582c9d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 3F 02 F2 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 02 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        neg edx
        sbb edx, edx
        mov eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 66 89 50 08: mov word ptr [eax + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 CD 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx - 4]
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E9 52 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x582eca
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        neg ecx
        sbb ecx, ecx
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 51: jmp 0x582eca
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 3A: jmp 0x582eca
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 23: jmp 0x582eca
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x582ec4
        __asm _emit 0x74
        __asm _emit 0x14
        push 141h
        push 6788ach
        ; Exact mapped bytes E8 81 5E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x582ec4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x582ea7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 74h]
        sub eax, 10h
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        mov dword ptr [ebp - 70h], ecx
        ; Exact mapped bytes E9 3F FB FF FF: jmp 0x582a20
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], 0
        lea edx, [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 B7 71 ED FF: call 0x45a0a8
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x582f03
        __asm _emit 0x74
        __asm _emit 0x06
        lea ecx, [ebp - 68h]
        mov dword ptr [ebp - 54h], ecx
        push 20h
        push 0
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 B0 29 EE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x29
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 50h], 0ffffffffh
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        push 0
        push 640d20h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 79: je 0x582fd2
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 38h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 40h]
        lea edx, [ecx + eax - 10h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x582fd2
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 84h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 0b8h], cl
        cmp byte ptr [ebp - 0b8h], 8
        ; Exact mapped bytes 74 0B: je 0x582fa5
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp byte ptr [ebp - 0b8h], 0eh
        ; Exact mapped bytes 74 02: je 0x582fa5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x582fb2
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        sub eax, 10h
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 84h]
        add ecx, 1
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB A3: jmp 0x582f75
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        ; Exact mapped bytes E8 C2 94 F4 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x94
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 8D 85 01 00 00: jge 0x583179
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4ch], 80020009h
        ; Exact mapped bytes 74 09: je 0x583010
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 EA 8E FC FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 07: je 0x58301d
        __asm _emit 0x74
        __asm _emit 0x07
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        push 181h
        push 6788ach
        push 24h
        ; Exact mapped bytes E8 D1 90 F4 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 1C: je 0x583060
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 4D D0: mov cx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        push ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 7F F0 FF FF: call 0x5820d7
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58306a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 9ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 30h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 14: je 0x5830b5
        __asm _emit 0x74
        __asm _emit 0x14
        push 182h
        push 6788ach
        ; Exact mapped bytes E8 90 5C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5830b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x583089
        __asm _emit 0x75
        __asm _emit 0xce
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1C: je 0x5830dd
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 25 9B F4 FF: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1C: je 0x5830ff
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 10h
        ; Exact mapped bytes E8 03 9B F4 FF: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1C: je 0x583121
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 18h
        ; Exact mapped bytes E8 E1 9A F4 FF: call 0x4ccbf8
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0a4h], eax
        push 650ab0h
        lea ecx, [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes E8 CA 27 EE FF: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x583173
        __asm _emit 0x74
        __asm _emit 0x14
        push 197h
        push 6788ach
        ; Exact mapped bytes E8 D2 5B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x583173
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x583156
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x583341
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        cmp edx, 0ch
        ; Exact mapped bytes 74 7B: je 0x583213
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        push eax
        push 0
        lea ecx, [ebp - 68h]
        push ecx
        lea edx, [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 FC BA 68 00: call dword ptr [0x68bafc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 7D 28: jge 0x5831e4
        __asm _emit 0x7d
        __asm _emit 0x28
        push 67892ch
        push 678960h
        ; Exact mapped bytes E8 4A D4 F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 68h]
        push eax
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        ; Exact mapped bytes E8 16 8D FC FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 68h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 14: je 0x58320d
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a6h
        push 6788ach
        ; Exact mapped bytes E8 38 5B FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58320d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x5831e4
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffffh
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 0c0h]
        sub eax, 2
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0fh
        ; Exact mapped bytes 0F 87 E0 00 00 00: ja 0x58331e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 24 8D D6 33 58 00: jmp dword ptr [ecx*4 + 0x5833d6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x33
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov al, byte ptr [ebp - 60h]
        mov byte ptr [edx], al
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 55 A0: mov dx, word ptr [ebp - 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa0
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx], eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x583341
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 99 2D FC FF: call 0x546060
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 6E: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 64: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 5A: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 0F BF 55 A0: movsx edx, word ptr [ebp - 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xa0
        neg edx
        sbb edx, edx
        neg edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 49: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 2D: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 23: jmp 0x583341
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58333b
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d6h
        push 6788ach
        ; Exact mapped bytes E8 0A 5A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58333b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x58331e
        __asm _emit 0x75
        __asm _emit 0xdd
        lea esp, [ebp - 0cch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
