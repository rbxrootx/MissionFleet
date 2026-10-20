// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585096E0 .. +0x420 bytes.
extern "C" __declspec(naked) void FUN_585096e0_585096E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880968h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 76 1F: jbe 0x58509730
        __asm _emit 0x76
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2bh
        ; Exact mapped bytes 74 0B: je 0x58509727
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 09: jne 0x58509730
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 1
        ; Exact mapped bytes EB 07: jmp 0x58509737
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 CB E4 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 0e00h
        cmp eax, 800h
        ; Exact mapped bytes 75 40: jne 0x58509791
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 44h]
        add edx, 2
        cmp edx, dword ptr [ebp + 24h]
        ; Exact mapped bytes 77 35: ja 0x58509791
        __asm _emit 0x77
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 20h]
        add eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 30h
        ; Exact mapped bytes 75 27: jne 0x58509791
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 20h]
        add edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 78h
        ; Exact mapped bytes 74 0F: je 0x58509788
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 20h]
        add ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 58h
        ; Exact mapped bytes 75 09: jne 0x58509791
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 2
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 B3 1B 00 00: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 64h]
        push eax
        ; Exact mapped bytes E8 3A C3 FF FF: call 0x58505af0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 75 DB FF FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 66 CB FF FF: call 0x58506340
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D5 87 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 20h]
        add edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 21 30 00 00: call 0x5850c820
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 41 1B 00 00: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 70h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 EB C4 FF FF: call 0x58505d10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 06 DB FF FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 79 1B 00 00: call 0x5850b3c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        push 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6B 87 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 7fh
        ; Exact mapped bytes 74 7A: je 0x585098dd
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 7E 70: jle 0x585098dd
        __asm _emit 0x7e
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EB 2C 00 00: call 0x5850c560
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 49h], al
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 7fh
        ; Exact mapped bytes 74 5A: je 0x585098dd
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 7E 50: jle 0x585098dd
        __asm _emit 0x7e
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 24h]
        sub eax, dword ptr [ebp - 44h]
        cmp edx, eax
        ; Exact mapped bytes 73 40: jae 0x585098dd
        __asm _emit 0x73
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 24h]
        sub eax, edx
        mov dword ptr [ebp + 24h], eax
        movzx ecx, byte ptr [ebp - 49h]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 24h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D2 1B 00 00: call 0x5850b490
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 14 01: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x01
        test edx, edx
        ; Exact mapped bytes 7E 09: jle 0x585098db
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 9B: jmp 0x58509878
        __asm _emit 0xeb
        __asm _emit 0x9b
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FB B0 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp + 24h], eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 A0 2F 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 7C 15: jl 0x58509911
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 7F 06: jg 0x58509904
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 76 0D: jbe 0x58509911
        __asm _emit 0x76
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 84 2F 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 77 09: ja 0x5850991a
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 0E: jmp 0x58509928
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 6E 2F 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 E0 E2 F7 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xff
        and eax, 1c0h
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 40h
        ; Exact mapped bytes 74 79: je 0x585099b7
        __asm _emit 0x74
        __asm _emit 0x79
        cmp dword ptr [ebp - 54h], 100h
        ; Exact mapped bytes 74 70: je 0x585099b7
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        movzx edx, byte ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 18 04 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 14h], edx
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 35 86 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7C 03 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], edx
        mov dword ptr [ebp + 14h], eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x58509a62
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 100h
        ; Exact mapped bytes 75 6D: jne 0x58509a2d
        __asm _emit 0x75
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F2 85 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 39 03 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 14h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        movzx ecx, byte ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6A 03 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 14h], edx
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 35: jmp 0x58509a62
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 85 85 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CC 02 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], edx
        mov dword ptr [ebp + 14h], eax
        mov ecx, dword ptr [ebp + 24h]
        sub ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4B 85 FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 92 02 00 00: call 0x58509d20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp + 10h], ecx
        mov dword ptr [ebp + 14h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 A8 2D 00 00: call 0x5850c850
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        push eax
        movzx ecx, byte ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BA 02 00 00: call 0x58509d80
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 5B 02 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4C 02 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 54 75 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x75
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
