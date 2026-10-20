// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58777070 .. +0xE34 bytes.
extern "C" __declspec(naked) void FUN_58777070_58777070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1b8h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 3C 01 00 00: mov word ptr [eax + 0x13c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 20h], 0
        xor edx, edx
        ; Exact mapped bytes 0F 84 F3 06 00 00: je 0x587777a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 28h], edx
        push 0
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 DA D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xda
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 44 EE D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8E EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 78 EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 62 EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4C EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 36 EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 20 EE D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5D ED D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 4ch], ecx
        push 0f2h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 D9 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 85 ED D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 54h], ecx
        push 3
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F D9 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 60 ED D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 42h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 11h
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 2E E4 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 59h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 11h
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 0C E4 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 42h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 11h
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EA E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 11h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C8 E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 32h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A2 E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 80 E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 96h
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5B E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4bh
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 64h
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 30 E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4bh
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 96h
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 02 E3 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 62h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4eh
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 E0 E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 80h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 62h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 80h
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 BC E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 87h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 3ch
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 92 E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0b0h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 3ch
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 67 E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 94h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4eh
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 33 E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0a2h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4eh
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 00 E2 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 85h
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 CA E1 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 0a2h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 85h
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 94 E1 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0d2h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 37h
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 6A E1 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 118h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 37h
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3F E1 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 0eah
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 93h
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 12 E1 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0f6h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 93h
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 E5 E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 129h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 93h
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 B7 E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 136h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 93h
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8A E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 136h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 89h
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 5D E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 149h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0b4h
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 2F E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 149h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 92h
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 02 E0 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0aah
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 D7 DF 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B D4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 E3 F5 D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114h]
        mov dword ptr [ebp - 0d0h], eax
        push 1ch
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 D4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 AF F5 D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 0d8h], eax
        push 1dh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 D4 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 7B F5 D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 0e0h], eax
        push 1bh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF D3 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 47 F5 D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 149h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 61h
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 DC DE 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0e8h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 131h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 2dh
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 B4 DE 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0f6h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 8D DE 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 E3 FF FF: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FD 06 00 00: jmp 0x58777e9e
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ah
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 1ch], 0ah
        mov dword ptr [ebp - 20h], 0ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 0f0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B7 E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 0f4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 9B E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 0f8h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 7F E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 0fch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 63 E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 100h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 47 E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 104h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 2B E7 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 10ch], edx
        push 17h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 D2 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 91 E6 D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 28 E6 D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 118h], ecx
        push 15h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F D2 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 47 E6 D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 120h], ecx
        push 16h
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E D2 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 16 E6 D0 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 41h
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E3 DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 57h
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 C0 DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 12ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 41h
        push edx
        push 10h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 9D DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 11h
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 2eh
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 75 DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2eh
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 4D DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 31h
        push ecx
        push 65h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 2A DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 31h
        push ecx
        push 9fh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 04 DC 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 140h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 48h
        push eax
        push 65h
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 D8 DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c8h]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 48h
        push ecx
        push 9fh
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 A9 DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 70h
        push ecx
        push 51h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 86 DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 70h
        push ecx
        push 83h
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 60 DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7dh
        push ecx
        push 45h
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 3D DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a5h
        push ecx
        push 45h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 17 DB 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 158h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 89h
        push eax
        push 51h
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 E9 DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e0h]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 96h
        push ecx
        push 51h
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 BA DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 160h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 89h
        push eax
        push 79h
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 8C DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e8h]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 96h
        push ecx
        push 79h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 5D DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c4h
        push ecx
        push 36h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 37 DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        push ecx
        push 36h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 11 DA 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d7h
        push ecx
        push 8eh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 E8 D9 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e3h
        push ecx
        push 8eh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 BF D9 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 117h
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 87h
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 91 D9 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 17ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 123h
        push edx
        push 80h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 68 D9 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 180h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 123h
        push edx
        push 8ah
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 3F D9 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 188h], ecx
        push 6
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 CD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 4B EF D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xef
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 190h], ecx
        push 4
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F CD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 17 EF D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 198h], ecx
        push 8
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B CD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 E3 EE D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 1a0h], ecx
        push 7
        ; Exact mapped bytes 8B 0D 9C 06 96 58: mov ecx, dword ptr [0x5896069c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 CD D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 AF EE D0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 13eh
        push edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 60h
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 44 D8 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 1a8h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 13eh
        push eax
        push 0fh
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 1F D8 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 13eh
        push eax
        push 0b8h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 F7 D7 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 1b0h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 13eh
        push eax
        push 99h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 CF D7 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1b4h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 11dh
        push eax
        push 2dh
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 AD D7 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1b8h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0dfh
        push eax
        push 28h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 8B D7 03 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 DC FF FF: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
