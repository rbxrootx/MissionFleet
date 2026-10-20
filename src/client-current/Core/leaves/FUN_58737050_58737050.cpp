// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58737050 .. +0x5E0 bytes.
extern "C" __declspec(naked) void FUN_58737050_58737050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888ec4ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0a0h
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
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 D8 07 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b47d8h
        mov edx, 3e8h
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        push 54h
        ; Exact mapped bytes E8 4C 9F 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 23: je 0x587370eb
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 0F BF 45 EC: movsx eax, word ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xec
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3A B2 D4 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb2
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x587370f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 64h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [edx + 0b8h], eax
        mov dword ptr [ebp - 0ach], 8
        mov dword ptr [ebp - 0a8h], 12h
        push 184h
        ; Exact mapped bytes E8 DE 9E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 42: je 0x58737178
        __asm _emit 0x74
        __asm _emit 0x42
        push 505050h
        push 0
        push 0dcdcdch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8D 6E D9 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873717f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 68h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + 0bch], eax
        push 184h
        ; Exact mapped bytes E8 65 9E 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 42: je 0x587371f1
        __asm _emit 0x74
        __asm _emit 0x42
        push 505050h
        push 0
        push 0dcdcdch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 12ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 14 6E D9 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587371f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 6ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 0c0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5C 72 D9 FF: call 0x584ce480
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 46 72 D9 FF: call 0x584ce480
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x72
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 C2 9D 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 43: je 0x58737295
        __asm _emit 0x74
        __asm _emit 0x43
        push 282828h
        push 0
        push 30e030h
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ddh
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
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 20 B1 D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873729c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 0c4h], ecx
        push 70h
        ; Exact mapped bytes E8 4B 9D 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 43: je 0x5873730c
        __asm _emit 0x74
        __asm _emit 0x43
        push 282828h
        push 0
        push 3030e0h
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f4h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13fh
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
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A9 B0 D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58737313
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 7ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [eax + 0c8h], ecx
        push 70h
        ; Exact mapped bytes E8 D4 9C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 43: je 0x58737383
        __asm _emit 0x74
        __asm _emit 0x43
        push 282828h
        push 0
        push 6effffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f4h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 197h
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
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 32 B0 D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb0
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5873738a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 80h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 0dch], ecx
        push 70h
        ; Exact mapped bytes E8 5D 9C 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 43: je 0x587373fa
        __asm _emit 0x74
        __asm _emit 0x43
        push 282828h
        push 0
        push 6effffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f4h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 165h
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
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BB AF D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xaf
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58737401
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 84h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 0e0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 88h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 44 EA D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 8ch], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 25 EA D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 90h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 06 EA D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 94h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E7 E9 D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 98h], eax
        movzx ecx, word ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C8 E9 D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x587374cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x58737582
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 28 9B 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 46: je 0x58737532
        __asm _emit 0x74
        __asm _emit 0x46
        push 282828h
        push 0
        push 30e030h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        imul eax, dword ptr [ebp - 18h], 3ch
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 64h]
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
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 83 AE D4 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58737539
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax*4 + 0cch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0cch]
        mov dword ptr [ebp - 0a0h], edx
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 04 E9 D4 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x587374c2
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58737594
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 57: jge 0x587375f1
        __asm _emit 0x7d
        __asm _emit 0x57
        push 68h
        ; Exact mapped bytes E8 63 9A 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 17: je 0x587375c8
        __asm _emit 0x74
        __asm _emit 0x17
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9D 92 03 00: call 0x58770860
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x92
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x587375cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + ecx*4 + 0e4h], eax
        ; Exact mapped bytes EB 9A: jmp 0x5873758b
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f4h], 0
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
