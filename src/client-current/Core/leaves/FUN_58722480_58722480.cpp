// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58722480 .. +0x5A1 bytes.
extern "C" __declspec(naked) void FUN_58722480_58722480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DF 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B9 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A6 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 93 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7D 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 67 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 54 3A D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 24 D6 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 90h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 90h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0dh
        ; Exact mapped bytes 0F 87 48 04 00 00: ja 0x587229c7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 58722a3ch]
        ; Exact mapped bytes FF 24 8D 24 2A 72 58: jmp dword ptr [ecx*4 + 0x58722a24]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x72
        __asm _emit 0x58
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5872262c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 93 D2 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4B 30 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 34h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A5 39 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0D 30 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 3ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 67 39 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4F: jmp 0x5872267b
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 01 D2 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 BC 2F 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 48h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 16 39 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 47 03 00 00: jmp 0x587229c7
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AD D1 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd1
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6B 2F 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 54h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C8 38 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F9 02 00 00: jmp 0x587229c7
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 2D 2F 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 5ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 8A 38 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F2 2E 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 64h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 4C 38 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 3F: je 0x5872278a
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 47h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 AD 2E 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 6ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 07 38 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A3 D0 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 46h
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 5E 2E 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 78h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 BB 37 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 46h
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 26 2E 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 80h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 83 37 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x587229c7
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 E2 2D 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 88h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 39 37 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x37
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 28h
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 9B 2D 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 90h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 EF 36 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 4B: je 0x587228f3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 47h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 4A 2D 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 98h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 9E 36 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 34 CF D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xcf
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 6B 36 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 15h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 46h
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D0 2C 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 74: jmp 0x587229c7
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A5 2C 09 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ach], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 FC 35 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 93 CE D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xce
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0b4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 CA 35 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 02: or ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
