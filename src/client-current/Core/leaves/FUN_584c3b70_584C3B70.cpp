// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C3B70 .. +0x5E4 bytes.
extern "C" __declspec(naked) void FUN_584c3b70_584C3B70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887eba7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c4h
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
        mov dword ptr [ebp - 24h], ecx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 11 E7 FB FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 58895ae0h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 AC 00 00 00: mov word ptr [ecx + 0xac], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 54h], 0
        push 54h
        ; Exact mapped bytes E8 0C D4 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd4
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 23: je 0x584c3c2b
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 2fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 22h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FA E6 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3c32
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0a8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [eax + 58h], ecx
        push 54h
        ; Exact mapped bytes E8 B2 D3 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd3
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 23: je 0x584c3c85
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 2fh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 22h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 E6 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3c8c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 70h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [eax + 5ch], ecx
        push 58h
        ; Exact mapped bytes E8 5E D3 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd3
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 35: je 0x584c3ceb
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        ; Exact mapped bytes 8B 0D DC 07 96 58: mov ecx, dword ptr [0x589607dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 0E FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 40h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 22h
        push eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2A 2B FC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3cf2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 60h], edx
        push 58h
        ; Exact mapped bytes E8 F8 D2 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd2
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 35: je 0x584c3d51
        __asm _emit 0x74
        __asm _emit 0x35
        push 0bh
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 0D FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 15h
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C4 2A FC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3d58
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 80h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [edx + 64h], eax
        push 58h
        ; Exact mapped bytes E8 92 D2 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3B: je 0x584c3dbd
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0ah
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 0D FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 3ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 15h
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 58 2A FC FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3dc4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 88h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 68h], ecx
        push 54h
        ; Exact mapped bytes E8 20 D2 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3B: je 0x584c3e2f
        __asm _emit 0x74
        __asm _emit 0x3b
        push 41h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 0D FC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 2ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1fh
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F6 E4 FB FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3e36
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 94h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 45 17 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x17
        __asm _emit 0x2f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 CC B6 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B3 B6 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 5F D1 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd1
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 42: je 0x584c3ef7
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffd997h
        mov eax, dword ptr [ebp + 14h]
        add eax, 3ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 2eh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 BE E4 FB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3efe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ecx + 70h], edx
        push 70h
        ; Exact mapped bytes E8 E6 D0 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd0
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 42: je 0x584c3f70
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, 48h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 3dh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3ah
        push eax
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 45 E4 FB FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c3f77
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 7ch], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 90 9C 00 00 00: mov word ptr [eax + 0x9c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 89 8A 9E 00 00 00: mov word ptr [edx + 0x9e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 0a8h], 0
        push 88h
        ; Exact mapped bytes E8 24 D0 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 41: je 0x584c4031
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D8 EC FB FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0bch], edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 38 07 00 00: call 0x584c4740
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        push 0ah
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 64 2F FF FF: call 0x584b6f90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c4038
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0b0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [edx + 0b0h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 9E AC FF FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 0b8h], edx
        push 7d0h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 EF 1D FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 0d0h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 63 0A 00 00: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0c0h], eax
        push 82h
        push 78h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 22 0A 00 00: call 0x584c4af0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 0c4h], edx
        push 12ch
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 23 1E FC FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 0c8h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 27 0A 00 00: call 0x584c4b30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0cch], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 EB 05 00 00: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 22 0A 00 00: call 0x584c4b50
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes E8 02 CF 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcf
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
