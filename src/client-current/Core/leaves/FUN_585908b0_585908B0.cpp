// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585908B0 .. +0x570 bytes.
extern "C" __declspec(naked) void FUN_585908b0_585908B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588843ebh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 90h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 200h
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 180h
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov eax, dword ptr [ebp - 9ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 FF FF FF: call 0x58590840
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D BC 35 90 58 00: cmp dword ptr [0x589035bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x58590952
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B FD FF FF: call 0x58590650
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58590952
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C FD FF FF: call 0x58590650
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8F 55 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 2c0h
        ; Exact mapped bytes E8 A8 06 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 28: je 0x58590997
        __asm _emit 0x74
        __asm _emit 0x28
        push 2710h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eah
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6E 9B FF FF: call 0x5858a500
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5859099e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 4], edx
        push 2c0h
        ; Exact mapped bytes E8 46 06 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2A: je 0x585909fb
        __asm _emit 0x74
        __asm _emit 0x2a
        push 2710h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        add eax, 258h
        push eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 64h
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9A A6 FF FF: call 0x5858b090
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58590a02
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + ecx + 8], eax
        push 2c0h
        ; Exact mapped bytes E8 D9 05 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2B: je 0x58590a69
        __asm _emit 0x74
        __asm _emit 0x2b
        push 2710h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 244h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 64h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C A6 FF FF: call 0x5858b090
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58590a70
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + ecx + 8], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 5F EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2E 42 22 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 5F EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5f
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 02 42 22 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 5E EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D6 41 22 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x41
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 35 EE FE FF: call 0x5857f960
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 14 EE FE FF: call 0x5857f960
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 5ch], ecx
        push 13880h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13ch
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1E C4 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 60h], edx
        push 9c40h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 50h
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F6 C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 64h], eax
        push 9c40h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0e2h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 32h
        push edx
        push 2
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CD C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 68h], ecx
        push 9c40h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A4 C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 6ch], edx
        push 9c40h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 32h
        push ecx
        push 4
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 7C C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 70h], eax
        push 186a0h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 59 C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 74h], ecx
        push 186a0h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 6
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 39 C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 78h], ecx
        push 13880h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17ch
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 64h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 07 C3 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 7ch], ecx
        push 2710h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 64h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 D5 C2 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 80h], ecx
        push 186a0h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 32h
        push eax
        push 2
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A6 C2 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 84h], ecx
        push 0c350h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 14h
        push eax
        push 3
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 71 C2 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 88h], eax
        push 13880h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 190h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 64h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 39 C2 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 8ch], edx
        push 186a0h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 15eh
        push eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 64h
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 02 C2 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 90h], ecx
        push 2710h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 32h
        push eax
        push 2
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 CA C1 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 8]
        mov dword ptr [ebp - 94h], eax
        push 13880h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 32h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 64h
        push edx
        push 3
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 95 C1 FF FF: call 0x5858cf90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
