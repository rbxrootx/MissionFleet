// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CF20 .. +0x5D4 bytes.
extern "C" __declspec(naked) void FUN_5862cf20_5862CF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5862cf3f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 0F 8D DC 00 00 00: jge 0x5862d025
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 188h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CD 8F E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 194h]
        mov dword ptr [ebp - 18h], eax
        push 588aeb80h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 20 91 E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1a0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 96 8F E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 20h], eax
        push 588aeb81h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E9 90 E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 8F E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1d0h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A5 8F E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8B 8F E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 71 8F E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x5862cf36
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5862d037
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x5862d135
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 DE FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 30h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x5862d12e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 188h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB DD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4 + 30h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 E3 E8 FF: call 0x584bb420
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 06 E9 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0xff
        sub eax, 38h
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 7C 8E E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 194h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 DD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 4], 18h
        lea edx, [eax + ecx + 3ch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 BA 8F E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1c4h]
        mov dword ptr [ebp - 4ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 90 8E E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 200h], 2
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 DD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + esi*4 + 30h]
        mov dword ptr [ecx + edx*4 + 208h], eax
        ; Exact mapped bytes EB 02: jmp 0x5862d130
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5862d135
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F9 FE FF FF: jmp 0x5862d02e
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5862d147
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 8D 1B 01 00 00: jge 0x5862d26c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 4]
        cmp edx, 3
        ; Exact mapped bytes 0F 8D 0C 01 00 00: jge 0x5862d26c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 DD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4 + 14ch], 0
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x5862d267
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 188h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 DC FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + edx*4 + 14ch]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 E2 E8 FF: call 0x584bb420
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 05 E9 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 54 8D E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 194h]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 DC FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 0ch], 18h
        lea edx, [eax + ecx + 158h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8C 8E E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 68h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5F 8D E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + ecx + 200h], 1
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 DC FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + esi*4 + 14ch]
        mov dword ptr [edx + ecx*4 + 208h], eax
        ; Exact mapped bytes E9 D2 FE FF FF: jmp 0x5862d13e
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5862d27e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x5862d38e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD DB FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 84h], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5862d387
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1a0h]
        mov dword ptr [ebp - 78h], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 DB FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4 + 84h]
        mov dword ptr [ebp - 6ch], edx
        push 0
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 E1 E8 FF: call 0x584bb420
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe1
        __asm _emit 0xe8
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 04 E9 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 2F 8C E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1ach]
        mov dword ptr [ebp - 80h], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 DB FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 4], 18h
        lea edx, [eax + ecx + 90h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 6A 8D E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1d0h]
        mov dword ptr [ebp - 84h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3A 8C E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 203h], 2
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 DB FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + esi*4 + 84h]
        mov dword ptr [ecx + edx*4 + 214h], eax
        ; Exact mapped bytes EB 02: jmp 0x5862d389
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5862d38e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x5862d275
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5862d3a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 8D 45 01 00 00: jge 0x5862d4ef
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 4]
        cmp edx, 3
        ; Exact mapped bytes 0F 8D 36 01 00 00: jge 0x5862d4ef
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC DA FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4 + 1a0h], 0
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5862d4ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1a0h]
        mov dword ptr [ebp - 94h], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A DA FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + edx*4 + 1a0h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 E0 E8 FF: call 0x584bb420
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0xe8
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 02 E9 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E3 8A E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1ach]
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 DA FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 0ch], 18h
        lea edx, [eax + ecx + 1ach]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 0F 8C E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1e8h]
        mov dword ptr [ebp - 0a0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 DC 8A E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + ecx + 203h], 1
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 D9 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + esi*4 + 1a0h]
        mov dword ptr [edx + ecx*4 + 214h], eax
        ; Exact mapped bytes E9 A8 FE FF FF: jmp 0x5862d397
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
