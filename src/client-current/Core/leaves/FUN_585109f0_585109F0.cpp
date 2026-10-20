// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585109F0 .. +0x94E bytes.
extern "C" __declspec(naked) void FUN_585109f0_585109F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880d7fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e8h
        push esi
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
        push 198h
        ; Exact mapped bytes E8 DE 05 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x58510a4f
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a3e44h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 66 F9 26 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58510a56
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ecx + 4], edx
        push 198h
        ; Exact mapped bytes E8 8E 05 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 16: je 0x58510a9f
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a3e54h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 16 F9 26 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58510aa6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 8], edx
        push 198h
        ; Exact mapped bytes E8 3E 05 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x58510aef
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588a3e68h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C6 F8 26 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf8
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58510af6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ecx + 10h], edx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 66 FC FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 5B 06 00 00: jne 0x58511182
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 914h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 900h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 904h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 908h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 910h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 874h], 6
        push 18h
        ; Exact mapped bytes E8 BC 04 32 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [edx + 8f8h], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 878h], 12ch
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 87ch], 0ba3h
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 878h], 10beh
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 87ch], 328h
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 878h], 20bdh
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 87ch], 328h
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 878h], 10d6h
        mov eax, 8
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 87ch], 160ah
        mov eax, 8
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 878h], 205ah
        mov edx, 8
        shl edx, 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 87ch], 1600h
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 878h], 2cbfh
        mov ecx, 8
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 87ch], 0c12h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 EE FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 0A EF FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        push 0bfh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 3E F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 58 52 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD EE FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D0 EE FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 0bbh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 3E F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 1E 52 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 EE FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 2
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 90 EE FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 0bbh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 3D F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 D2 51 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 EE FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 3
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 44 EE FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 0bbh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 3D F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 86 51 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB ED FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        push 4
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 F8 ED FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 0bbh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 3D F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 3A 51 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F ED FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        push 5
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 AC ED FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 0beh
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 3C F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x3c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 EE 50 F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x50
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58510e55
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 0F 8D 1E 03 00 00: jge 0x5851117d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dch
        ; Exact mapped bytes E8 9B 01 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3E: je 0x58510eba
        __asm _emit 0x74
        __asm _emit 0x3e
        or edx, 0ffffffffh
        sub edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 87ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 878h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5B 2B 00 00: call 0x58513a10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58510ec1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0b4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0b8h], edx
        push 1f3h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 75 4F F7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A EC FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 95 EC FF FF: call 0x5850fbc0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x58510f49
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 07: jmp 0x58510f50
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0fh
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 EC FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E B1 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb1
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + edx*8 + 87ch]
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea ecx, [ecx + eax - 0eh]
        sub ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c0h], ecx
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x58510f9f
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 07: jmp 0x58510fa6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF EB FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 5A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + edx*8 + 878h]
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea ecx, [ecx + eax - 8]
        sub ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 2A 46 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x46
        __asm _emit 0x2a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F EB FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 CA EB FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x58511034
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 07: jmp 0x5851103b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0fh
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A EB FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 63 B0 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + edx*8 + 87ch]
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea ecx, [ecx + eax - 0eh]
        sub ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d0h], ecx
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5851108a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 07: jmp 0x58511091
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 EB FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D 59 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + edx*8 + 878h]
        cdq
        and edx, 3fh
        add eax, edx
        sar eax, 6
        lea ecx, [ecx + eax - 8]
        sub ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 3F 45 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x45
        __asm _emit 0x2a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 EA FF FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 DF EA FF FF: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        mov eax, dword ptr [ebp - 14h]
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5851111f
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 1
        ; Exact mapped bytes EB 07: jmp 0x58511126
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 50h]
        add edx, 0c3h
        push edx
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 39 F7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp - 0e0h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 DD 4D F7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e8h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 D9 02 00 00: call 0x58511450
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CF FC FF FF: jmp 0x58510e4c
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x5851132e
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58511194
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 9
        ; Exact mapped bytes 0F 8D 90 01 00 00: jge 0x5851132e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 1ch], 0e84h
        movzx edx, word ptr [ecx + 588f4f90h]
        ; Exact mapped bytes 0F B7 05 20 8D 94 58: movzx eax, word ptr [0x58948d20]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
        cmp edx, eax
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x58511329
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 1ch], 0e84h
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [ecx + 588f5da8h]
        mov byte ptr [edx + 874h], al
        mov ecx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ecx + 874h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 52 FE 31 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 8f8h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851121a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 874h]
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F 8D FA 00 00 00: jge 0x58511327
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 1ch], 0e84h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + esi*8 + 588f5dach]
        mov dword ptr [eax + edx*8 + 878h], ecx
        imul edx, dword ptr [ebp - 1ch], 0e84h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + esi*8 + 588f5db0h]
        mov dword ptr [ecx + eax*8 + 87ch], edx
        push 0dch
        ; Exact mapped bytes E8 91 FD 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 4A: je 0x585112d0
        __asm _emit 0x74
        __asm _emit 0x4a
        imul eax, dword ptr [ebp - 1ch], 0e84h
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, byte ptr [eax + ecx + 588f5dech]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 87ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*8 + 878h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8fch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 45 27 00 00: call 0x58513a10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x585112d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0f0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8f8h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0f4h], edx
        push 1f3h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 5F 4B F7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4b
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x58511211
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x5851132e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5D FE FF FF: jmp 0x5851118b
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfe
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
