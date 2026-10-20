// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858DAA0 .. +0x435 bytes.
extern "C" __declspec(naked) void FUN_5858daa0_5858DAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588841c3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 70h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858daea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 84 D0 03 00 00: je 0x5858dec4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 8E EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x8e
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 F4 EF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 09: jne 0x5858db29
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0aah
        ; Exact mapped bytes EB 07: jmp 0x5858db30
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0b4h
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + ecx + 4]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5858db4e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 12h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [edx + eax + 0ch]
        ; Exact mapped bytes 0F 8D 8D 01 00 00: jge 0x5858dcf4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ecx + edx + 4]
        ; Exact mapped bytes 75 08: jne 0x5858db84
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 2C: jmp 0x5858dbb0
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 18h]
        add edx, 12h
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ecx + eax + 0ch]
        ; Exact mapped bytes 7C 0B: jl 0x5858dba7
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 20h]
        add edx, 6
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x5858dbb0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 3
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + edx]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 09: jmp 0x5858dbd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 12h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [eax + ecx + 8]
        ; Exact mapped bytes 0F 8D 03 01 00 00: jge 0x5858dcef
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [edx + eax]
        ; Exact mapped bytes 74 2C: je 0x5858dc2c
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 1ch]
        add edx, 12h
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ecx + eax + 8]
        ; Exact mapped bytes 7C 0B: jl 0x5858dc23
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 09: jmp 0x5858dc2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 2ch], 0
        push 54h
        ; Exact mapped bytes E8 CA 33 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 6F: je 0x5858dcbc
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 8D EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 E4 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe4
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 8D EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 8D EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 6E EF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 8D EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 40h
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 69 46 EF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5858dcc3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 0E: je 0x5858dcea
        __asm _emit 0x74
        __asm _emit 0x0e
        push 96h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 57 78 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x5858dbca
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x5858db45
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 0
        push 80h
        ; Exact mapped bytes E8 3D 33 2A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x33
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 30h], edx
        push 80h
        push 0
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 EF F0 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5858dd33
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 588aaef8h
        ; Exact mapped bytes EB 07: jmp 0x5858dd3a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 588aaf00h
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 588aaf08h
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 70h
        ; Exact mapped bytes E8 AD 32 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x32
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x5858de80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 67 8C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 E3 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + 8]
        mov esi, dword ptr [ebp - 10h]
        shl esi, 4
        mov edi, dword ptr [ebp - 14h]
        mov edi, dword ptr [edi + 8]
        mov eax, dword ptr [eax + edx + 4]
        add eax, dword ptr [edi + esi + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        lea ecx, [ecx + eax + 32h]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 8C EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 8C EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 8]
        add eax, dword ptr [ecx + edx + 8]
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 10h]
        shl eax, 4
        mov esi, dword ptr [ebp - 14h]
        mov esi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + eax + 4]
        add eax, dword ptr [ecx + edx + 0ch]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 8B EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 E2 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0xff
        lea ecx, [eax + esi - 32h]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 8B EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 8B EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8b
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 8]
        add eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 8B 15 40 20 96 58: mov edx, dword ptr [0x58962040]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 8B EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8b
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 35 45 EF FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858de87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 7ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 34h], edx
        push 10000h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 69 80 EF FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0xff
        push 0c8h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8C 76 22 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0x22
        __asm _emit 0x00
        push 6
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C2 BE F2 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbe
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1D FC FF FF: jmp 0x5858dae1
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
