// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587421A0 .. +0x8D8 bytes.
extern "C" __declspec(naked) void FUN_587421a0_587421A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f3e8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 118h
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
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D9 28 00 00: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b4b54h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], 0
        push 198h
        ; Exact mapped bytes E8 F6 ED 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 16: je 0x58742234
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b4ae4h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 E1 03 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874223b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 84h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [edx + 58h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2ch
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0bdh
        mov dword ptr [ebp - 14h], edx
        push 5ch
        ; Exact mapped bytes E8 94 ED 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1B: je 0x5874229b
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DA 16 D8 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x16
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x587422a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 9A 17 D8 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x17
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 26 ED 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 50: je 0x5874233e
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 90h], edx
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 19 28 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 98h], ecx
        push 40h
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E7 FF D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742345
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [eax + edx + 80h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 80h]
        mov dword ptr [ebp - 0a0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 1E 32 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 6A EC 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 50: je 0x587423fa
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 5D 27 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0ach], eax
        push 40h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2B FF D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742401
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + eax + 80h], edx
        push 94h
        ; Exact mapped bytes E8 D4 EB 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 42: je 0x58742482
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 14h]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 16h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 53 DE 07 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742489
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ecx + eax + 74h], edx
        push 94h
        ; Exact mapped bytes E8 4F EB 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 45: je 0x5874250a
        __asm _emit 0x74
        __asm _emit 0x45
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp - 14h]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0cfh
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 48h
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 34h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CB DD 07 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742511
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + edx + 74h], ecx
        push 94h
        ; Exact mapped bytes E8 C7 EA 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 47: je 0x58742594
        __asm _emit 0x74
        __asm _emit 0x47
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp - 14h]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 10ch
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 48h
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 0f3h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 41 DD 07 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874259b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [edx + ecx + 74h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 0c0h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 12 CE D5 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xce
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 0c4h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F0 CD D5 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 0c8h], ecx
        push 14h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 CF CD D5 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        push 0ach
        ; Exact mapped bytes E8 D8 E9 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 73: je 0x587426af
        __asm _emit 0x74
        __asm _emit 0x73
        push 1fh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 24 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], edx
        push 40h
        mov eax, dword ptr [ebp - 14h]
        add eax, 3dh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 117h
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 36 96 D8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x587426b6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0e0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 BF 2E 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 08 E9 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 75: je 0x58742781
        __asm _emit 0x74
        __asm _emit 0x75
        push 20h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 23 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x23
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ech], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], edx
        push 40h
        mov eax, dword ptr [ebp - 14h]
        add eax, 0dah
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 117h
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        mov ecx, dword ptr [ebp - 0ech]
        push ecx
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 64 95 D8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742788
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 0f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 ED 2D 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 39 E8 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x587427fb
        __asm _emit 0x74
        __asm _emit 0x20
        push 40h
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 2A FB D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742802
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [eax + edx + 88h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 100h], edx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 94 36 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x36
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 104h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 3C 2D 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 88 E7 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x587428ac
        __asm _emit 0x74
        __asm _emit 0x20
        push 40h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 79 FA D3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x587428b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 108h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + eax + 88h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 10ch], edx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 E3 35 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 FC E6 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 4F: je 0x58742967
        __asm _emit 0x74
        __asm _emit 0x4f
        push 11h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 21 D4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 114h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1bbh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 154h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 0E 80 07 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874296e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 11ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 07 2C 07 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        push 10ch
        ; Exact mapped bytes E8 50 E6 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 4F: je 0x58742a13
        __asm _emit 0x74
        __asm _emit 0x4f
        push 646464h
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 1c9h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c2h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1bbh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 190h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 82 D3 D8 FF: call 0x584cfd90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd3
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58742a1a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 124h], ecx
        push 5
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 9E 96 D6 FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x96
        __asm _emit 0xd6
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 10 00 00: call 0x58743ae0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
