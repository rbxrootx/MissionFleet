// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FC180 .. +0xA76 bytes.
extern "C" __declspec(naked) void FUN_586fc180_586FC180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 9D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 FF D8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 A8 D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 94 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC 9C D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D6 9C D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C0 9C D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AA 9C D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 44 9D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2E 9D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 18 9D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 02 9D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 EC 9C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D6 9C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C0 9C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 AA 9C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586fc2f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 7D 34: jge 0x586fc333
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 CA 9B D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 80h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B0 9B D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BD: jmp 0x586fc2f0
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 8]
        add eax, 3
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x586fc412
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 54h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CC 30 DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x30
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 58h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 16 9C D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 81 92 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 59 92 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FD 9A D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 DE 9A D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x586fc4e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 F6 2F DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 70h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 40 9B D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 AB 91 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 83 91 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 27 9A D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 08 9A D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 14h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x586fc5de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 84h], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 1A 2F DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2f
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 88h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 5E 9A D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C4 90 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 97 90 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 36 99 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 98h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 12 99 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dch], 0
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x586fc6d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 9ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 24 2E DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2e
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 68 99 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CE 8F 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 A1 8F 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 40 98 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 1C 98 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0h], 0
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x586fc7ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 0b4h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 2E 2D DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 0b8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 72 98 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x98
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D7 8E 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 A9 8E 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 47 97 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 22 97 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x97
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x586fc8c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 0cch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 34 2C DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2c
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 0d0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 78 97 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x97
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 DD 8D 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 AF 8D 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 4D 96 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0e0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 28 96 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e8h], 0
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x586fc9c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 0e4h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 3A 2B DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2b
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 0e8h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 7E 96 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E3 8C 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0f0h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 B5 8C 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 53 95 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 0f8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 2E 95 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        add edx, 14h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ech], 0
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x586fcabc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 0fch], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 40 2A DA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 100h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 84 95 D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 64h]
        mov dword ptr [ebp - 104h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 E9 8B 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 BB 8B 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 10ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 59 94 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 80h]
        mov dword ptr [ebp - 134h], eax
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 34 94 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x94
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 8D 27 01 00 00: jge 0x586fcbf2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x586fcbf2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 14h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 1D 8B 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 118h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 14h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 EF 8A 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 C7 8A 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 9F 8A 0B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 124h], eax
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 43 93 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 128h], edx
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 27 93 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 12ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 0B 93 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x93
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 130h], eax
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 EF 92 D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
