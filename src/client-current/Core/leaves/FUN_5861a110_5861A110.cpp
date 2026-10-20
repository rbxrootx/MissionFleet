// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861A110 .. +0x9B2 bytes.
extern "C" __declspec(naked) void FUN_5861a110_5861A110() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886f87h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ech
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 81 E6 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588ae6dch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 50h], edx
        push 58h
        ; Exact mapped bytes E8 85 6E 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 35: je 0x5861a1c4
        __asm _emit 0x74
        __asm _emit 0x35
        push 22h
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 A9 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 2ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 51 C6 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a1cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx + eax + 54h], edx
        push 58h
        ; Exact mapped bytes E8 16 6E 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x6e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 35: je 0x5861a233
        __asm _emit 0x74
        __asm _emit 0x35
        push 7
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 A8 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 28h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1ch
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E2 C5 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a23a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 6ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + edx + 54h], ecx
        push 58h
        ; Exact mapped bytes E8 A7 6D 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 35: je 0x5861a2a2
        __asm _emit 0x74
        __asm _emit 0x35
        push 8
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A8 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 73 C5 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc5
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a2a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [edx + ecx + 54h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        mov dword ptr [ebp - 78h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CD B2 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        mov dword ptr [ebp - 7ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 AF B2 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb2
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C4 BB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861a338
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x5861a3c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 BB 6C 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 23: je 0x5861a37c
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 5
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A9 7F E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a383
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + edx*4 + 84h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 1D BB E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x5861a32f
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861a3db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D C9 01 00 00: jge 0x5861a5ae
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 18 6C 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3B: je 0x5861a437
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + eax + 7]
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 A6 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DE C3 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a43e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx + ecx*4 + 74h], eax
        push 58h
        ; Exact mapped bytes E8 A2 6B 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6b
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 41: je 0x5861a4b3
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + ecx + 6]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B A6 E6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 62 C3 E6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a4ba
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 98h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + edx*4 + 64h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 9ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 B9 B0 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0a0h], ecx
        push 80h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 29 B0 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 1C 50 E8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x50
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 FF 4F E8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 E2 4F E8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 74h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 05 BA E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xba
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 E8 B9 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 24 FE FF FF: jmp 0x5861a3d2
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861a5c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x5861a651
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 33 6A 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6a
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 23: je 0x5861a604
        __asm _emit 0x74
        __asm _emit 0x23
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 6
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 21 7D E6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x7d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a60b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + ecx*4 + 8ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 95 B8 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x5861a5b7
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 AC 69 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x69
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 42: je 0x5861a6aa
        __asm _emit 0x74
        __asm _emit 0x42
        push 10101h
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 44h
        push edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 0fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 2
        push ecx
        ; Exact mapped bytes 8B 15 24 20 96 58: mov edx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 0B 7D E6 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a6b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0c0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 94h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 0c4h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 BB AE 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xae
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 8ch]
        mov dword ptr [ebp - 0c8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 93 AE 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xae
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        push 88h
        ; Exact mapped bytes E8 DC 68 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 41: je 0x5861a779
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 85 E6 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 9F EA FF: call 0x584c4740
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9f
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 1C C8 E9 FF: call 0x584b6f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861a780
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0d4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [eax + 0d14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d14h]
        mov dword ptr [ebp - 0d8h], eax
        push 7d0h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 C5 B6 E6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 0dch], edx
        push 64h
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 39 A3 EA FF: call 0x584c4b10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 0e0h], ecx
        push 4bh
        push 82h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 F8 A2 EA FF: call 0x584c4af0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d14h]
        mov dword ptr [ebp - 0e4h], eax
        push 12ch
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 F9 B6 E6 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb6
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 DB 44 EA FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d14h]
        mov dword ptr [ebp - 0ech], edx
        push 14h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 DF A2 EA FF: call 0x584c4b30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa2
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d18h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 0f0h], ecx
        lea edx, [ebp - 0f8h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 D0 1E EE FF: call 0x584fc7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F7 4C EE FF: call 0x584ff5d0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861a8ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 7D 1C: jge 0x5861a911
        __asm _emit 0x7d
        __asm _emit 0x1c
        imul ecx, dword ptr [ebp - 14h], 18h
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0fch]
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB D2: jmp 0x5861a8e3
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + ecx + 0e4h], 0
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + ecx + 0cfch], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 9ch], 0
        mov ecx, 1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 400h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0cch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0c8h], eax
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 24 0D 00 00: mov word ptr [edx + 0xd24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 26 0D 00 00: mov word ptr [ecx + 0xd26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x26
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 28 0D 00 00: mov word ptr [eax + 0xd28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push 594h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d2ch
        push ecx
        ; Exact mapped bytes E8 B7 23 23 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12c4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12c8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12d0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 12d8h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
