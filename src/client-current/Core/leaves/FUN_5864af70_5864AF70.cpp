// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864AF70 .. +0x2D95 bytes.
extern "C" __declspec(naked) void FUN_5864af70_5864AF70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588889d9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 52ch
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
        movzx eax, byte ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
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
        ; Exact mapped bytes E8 E7 1A F2 FF: call 0x5856cab0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af55ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 21ch
        ; Exact mapped bytes E8 E9 C4 E3 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 99 E3 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x99
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 52h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1dch], ecx
        push 77h
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 F0 9A E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 B9 E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 172h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 140h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1e0h], eax
        push 77h
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 A3 9A E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 10 E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864b09c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x5864b134
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 57 5F 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 4B: je 0x5864b108
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1e4h], ecx
        mov edx, 70h
        sub edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 40 9A E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1D 72 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x72
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b10f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ech], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [eax + edx*4 + 94h], ecx
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x5864b093
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 1f0h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 54 A4 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 1f4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 2C A4 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864b197
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x5864b238
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 5C 5E 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 54: je 0x5864b20c
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 1f8h], edx
        mov eax, 7eh
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 45 99 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1bfh
        push edx
        mov eax, dword ptr [ebp - 1fch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 71 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x71
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b213
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 200h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 200h]
        mov dword ptr [ecx + eax*4 + 9ch], edx
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x5864b18e
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 204h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 50 A3 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 9ch]
        mov dword ptr [ebp - 208h], eax
        push 101h
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 28 A3 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864b29b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x5864b331
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 55 5D 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 46: je 0x5864b305
        __asm _emit 0x74
        __asm _emit 0x46
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 98 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 50h
        push edx
        imul eax, dword ptr [ebp - 14h], 11h
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1dfh]
        push edx
        push 1
        mov eax, dword ptr [ebp - 20ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 70 F6 16 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b30c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 210h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 210h]
        mov dword ptr [ecx + eax*4 + 0a4h], edx
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x5864b292
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 214h], eax
        push 1
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 3A FE 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 218h], eax
        push 2
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 15 FE 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 81 5C 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 50: je 0x5864b3e3
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 21ch], edx
        push 0a6h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 6E 97 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x97
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f8h
        push ecx
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 42 6F E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b3ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 224h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [edx + 0ach], eax
        push 54h
        ; Exact mapped bytes E8 F7 5B 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 50: je 0x5864b46d
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 228h], edx
        push 0abh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 E4 96 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x96
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 22ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B8 6E E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b474
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 230h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 230h]
        mov dword ptr [edx + 0b0h], eax
        push 0ach
        ; Exact mapped bytes E8 6A 5B 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x5b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 71: je 0x5864b51b
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 234h], edx
        push 19h
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 0A 96 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x96
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 240h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 4fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f8h
        push eax
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CA 07 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b522
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 244h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 244h]
        mov dword ptr [eax + 0b4h], ecx
        push 0ach
        ; Exact mapped bytes E8 BC 5A 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x5a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 73: je 0x5864b5cb
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 248h], eax
        push 1ah
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 5C 95 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 250h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 4fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov edx, dword ptr [ebp - 254h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 1A 07 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x07
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b5d2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 258h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 258h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 25ch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 A3 9F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 260h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 84 9F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 264h], edx
        push 101h
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 65 9F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 268h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 46 9F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 BA 41 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 76 59 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x59
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 26: je 0x5864b6c4
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 92h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 61 6C E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b6cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 270h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 270h]
        mov dword ptr [edx + 0bch], eax
        push 54h
        ; Exact mapped bytes E8 16 59 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x59
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 26: je 0x5864b724
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 92h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 01 6C E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b72b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 274h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 274h]
        mov dword ptr [edx + 0c0h], eax
        push 70h
        ; Exact mapped bytes E8 B6 58 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x58
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 48: je 0x5864b7a6
        __asm _emit 0x74
        __asm _emit 0x48
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 89h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 121h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0abh
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
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 0F 6C E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b7ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 278h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [edx + 0c4h], eax
        push 70h
        ; Exact mapped bytes E8 34 58 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x58
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 4A: je 0x5864b82a
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 9bh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
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
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 8B 6B E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b831
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 27ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 27ch]
        mov dword ptr [edx + 0c8h], eax
        push 70h
        ; Exact mapped bytes E8 B0 57 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x57
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 4A: je 0x5864b8ae
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0adh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
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
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 07 6B E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b8b5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + 0cch], eax
        push 70h
        ; Exact mapped bytes E8 2C 57 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x57
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 4A: je 0x5864b932
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0bfh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 109h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b2h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 92h
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
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 83 6A E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x5864b939
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 0d0h], eax
        push 0fch
        ; Exact mapped bytes E8 A5 56 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x56
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 44: je 0x5864b9b9
        __asm _emit 0x74
        __asm _emit 0x44
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 91 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x91
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 60h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ch
        push edx
        push 0bh
        mov eax, dword ptr [ebp - 288h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 BF EF 16 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864b9c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 28ch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28ch]
        mov dword ptr [eax + 0d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 290h], eax
        push 7fffffffh
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 7F E3 E6 FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe3
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 FB 55 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 56: je 0x5864ba75
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 294h], edx
        push 0b5h
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 E2 90 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 7ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B3 68 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ba7f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 29ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 29ch]
        mov dword ptr [edx + 0d8h], eax
        push 0ach
        ; Exact mapped bytes E8 5C 55 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x55
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 77: je 0x5864bb35
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2a0h], edx
        push 1ch
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 F6 8F E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2ach], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 7ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e8h
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        mov ecx, dword ptr [ebp - 2ach]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 B3 01 E8 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864bb3f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 2b0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b0h]
        mov dword ptr [eax + 0dch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 2b4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 33 9A 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 2b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 14 9A 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9a
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864bbaf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 0F 8D 91 01 00 00: jge 0x5864bd4a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 44 54 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 4A: je 0x5864bc20
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2bch], edx
        push 1dh
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 DE 8E E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 F8 AB E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864bc2a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 2c4h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2c4h]
        mov dword ptr [eax + edx*4 + 0e0h], ecx
        push 58h
        ; Exact mapped bytes E8 B0 53 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x53
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 4A: je 0x5864bcb4
        __asm _emit 0x74
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 2c8h], eax
        push 1eh
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 4A 8E E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 2cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 64 AB E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xab
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864bcbe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 2d0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2d0h]
        mov dword ptr [ecx + eax*4 + 108h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 2d4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 AC 98 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 2d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 2C 38 E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 108h]
        mov dword ptr [ebp - 2dch], edx
        push 0
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 0C 38 E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C FE FF FF: jmp 0x5864bba6
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 B3 52 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x52
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 55: je 0x5864bdbc
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2e0h], ecx
        push 0fbh
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 9A 8D E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2e4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 7ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1b9h
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 6C 65 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x65
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864bdc6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e8h]
        mov dword ptr [ecx + 130h], edx
        push 0ach
        ; Exact mapped bytes E8 15 52 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 78: je 0x5864be7d
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 2ech], ecx
        push 2ah
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 AF 8C E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f4h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2f8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1b9h
        push edx
        mov eax, dword ptr [ebp - 2f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov eax, dword ptr [ebp - 2f8h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6B FE E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864be87
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2fch]
        mov dword ptr [edx + 134h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 300h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 EB 96 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 304h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 CC 96 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 18 51 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x51
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 59: je 0x5864bf5b
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 308h], eax
        push 10ah
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 FF 8B E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0dbh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1afh
        push edx
        mov eax, dword ptr [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 CD 63 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864bf65
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 310h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 310h]
        mov dword ptr [eax + 138h], ecx
        push 0ach
        ; Exact mapped bytes E8 76 50 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 7B: je 0x5864c01f
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 314h], eax
        push 2dh
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 10 8B E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 31ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 320h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 0dbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1afh
        push ecx
        mov edx, dword ptr [ebp - 318h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        push ecx
        mov edx, dword ptr [ebp - 320h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 C9 FC E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c029
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 324h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 324h]
        mov dword ptr [ecx + 13ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 328h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 49 95 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 32ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 2A 95 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864c099
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 33 01 00 00: jge 0x5864c1d6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864c0b5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x5864c1a2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 3E 4F 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 67: je 0x5864c143
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 330h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx*4 + 132h]
        push ecx
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 1C 8A E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        push 40h
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 101h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 118h
        push edx
        mov eax, dword ptr [ebp - 334h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E5 61 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c14d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 338h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 17ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 338h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 17ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 33ch], eax
        push 0
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 44 9D E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9d
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x5864c0ac
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 17ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 340h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 E0 93 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x93
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x5864c090
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864c1e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x5864c29b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 0B 4E 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 5A: je 0x5864c269
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0ffffffh
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 110h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1dbh
        push edx
        imul eax, dword ptr [ebp - 14h], 12h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 101h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 134h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 4F 61 E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c273
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov eax, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 344h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 344h]
        mov dword ptr [edx + ecx*4 + 1a4h], eax
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x5864c1df
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 5ch
        ; Exact mapped bytes E8 62 4D 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 21: je 0x5864c2d9
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 9F 76 E7 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x76
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c2e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 348h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 348h]
        mov dword ptr [eax + 140h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 50 77 E7 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x77
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864c333
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x5864c3f9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C0 4C 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 6D: je 0x5864c3c7
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 350h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 12ch
        push edx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 A2 87 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 354h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 140h]
        mov dword ptr [ebp - 358h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 0fbh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 56h
        push eax
        mov ecx, dword ptr [ebp - 354h]
        push ecx
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 61 5F E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c3d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 35ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 35ch]
        mov dword ptr [edx + ecx*4 + 144h], eax
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x5864c32a
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 70h
        ; Exact mapped bytes E8 04 4C 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 53: je 0x5864c469
        __asm _emit 0x74
        __asm _emit 0x53
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 10ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ech
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0fbh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 73h
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
        mov ecx, dword ptr [eax + 140h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 4F 5F E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c473
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 360h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 360h]
        mov dword ptr [eax + 14ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 144h]
        mov dword ptr [ebp - 364h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 F6 90 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 42 4B 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 6B: je 0x5864c543
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 368h], ecx
        push 0e7h
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 29 86 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 36ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 370h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 101h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e8h
        push edx
        mov eax, dword ptr [ebp - 36ch]
        push eax
        mov ecx, dword ptr [ebp - 370h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 E5 5D E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c54d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 374h]
        mov dword ptr [eax + 150h], ecx
        push 0ach
        ; Exact mapped bytes E8 8E 4A 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5864c61c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 378h], eax
        push 26h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 24 85 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 380h], edx
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 388h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 101h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e8h
        push eax
        mov ecx, dword ptr [ebp - 37ch]
        push ecx
        mov edx, dword ptr [ebp - 380h]
        push edx
        mov eax, dword ptr [ebp - 384h]
        push eax
        mov ecx, dword ptr [ebp - 388h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 CC F6 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c626
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 38ch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 38ch]
        mov dword ptr [eax + 154h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 390h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 4C 8F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 394h], edx
        push 101h
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 2D 8F 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 79 49 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x49
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 104h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 21: je 0x5864c6c2
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 B6 72 E7 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x72
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c6cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 398h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 398h]
        mov dword ptr [edx + 158h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 158h]
        mov dword ptr [ebp - 39ch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 67 73 E7 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864c71c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x5864c7ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 D7 48 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x48
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10ch], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 37: je 0x5864c77a
        __asm _emit 0x74
        __asm _emit 0x37
        push 40h
        imul edx, dword ptr [ebp - 14h], 12h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 0f6h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 52h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 158h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 9E A0 E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c784
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 3a0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3a0h]
        mov dword ptr [ecx + eax*4 + 15ch], edx
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5864c713
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 4E 48 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x48
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 51: je 0x5864c81d
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 14dh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f6h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0f7h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 6ah
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
        mov eax, dword ptr [edx + 158h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 8B 78 ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c827
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 3a4h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3a4h]
        mov dword ptr [edx + 170h], eax
        push 54h
        ; Exact mapped bytes E8 B7 47 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 6A: je 0x5864c8cd
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 3a8h], edx
        push 0f1h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 9E 82 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x82
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ach], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 158h]
        mov dword ptr [ebp - 3b0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 101h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e8h
        push eax
        mov ecx, dword ptr [ebp - 3ach]
        push ecx
        mov edx, dword ptr [ebp - 3b0h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 5B 5A E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c8d7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 120h]
        mov dword ptr [ebp - 3b4h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3b4h]
        mov dword ptr [ecx + 174h], edx
        push 0ach
        ; Exact mapped bytes E8 04 47 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5864c9a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 3b8h], ecx
        push 28h
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 9A 81 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3bch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 158h]
        mov dword ptr [ebp - 3c0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3c4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3c8h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 101h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e8h
        push ecx
        mov edx, dword ptr [ebp - 3bch]
        push edx
        mov eax, dword ptr [ebp - 3c0h]
        push eax
        mov ecx, dword ptr [ebp - 3c4h]
        push ecx
        mov edx, dword ptr [ebp - 3c8h]
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 41 F3 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864c9b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov eax, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 3cch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3cch]
        mov dword ptr [ecx + 178h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 3d0h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 C1 8B 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 178h]
        mov dword ptr [ebp - 3d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 A2 8B 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 178h]
        mov dword ptr [ebp - 3d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 B6 94 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864ca3d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D AC 00 00 00: jge 0x5864caf3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B6 45 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 12ch], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 74 5D: je 0x5864cac1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 3dch], edx
        mov eax, 7eh
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 99 80 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3e0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 18fh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1bfh
        push edx
        mov eax, dword ptr [ebp - 3e0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 67 58 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x58
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864cacb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 3e4h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3e4h]
        mov dword ptr [ecx + eax*4 + 1b8h], edx
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x5864ca34
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1b8h]
        mov dword ptr [ebp - 3e8h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 95 8A 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1b8h]
        mov dword ptr [ebp - 3ech], eax
        push 101h
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 6D 8A 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8a
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864cb56
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x5864cc01
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 9A 44 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x44
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 74 4F: je 0x5864cbcf
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 7F E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x7f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 190h
        push edx
        imul eax, dword ptr [ebp - 14h], 11h
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1dfh]
        push edx
        push 1
        mov eax, dword ptr [ebp - 3f0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 A9 DD 16 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdd
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864cbd9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 138h]
        mov dword ptr [ebp - 3f4h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + eax*4 + 1c0h], edx
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x5864cb4d
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1c0h]
        mov dword ptr [ebp - 3f8h], eax
        push 2
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 6A E5 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1c0h]
        mov dword ptr [ebp - 3fch], eax
        push 2
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 45 E5 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 B1 43 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x43
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 58: je 0x5864ccc1
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 400h], edx
        push 0a6h
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 98 7E E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 404h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 18fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f8h
        push ecx
        mov edx, dword ptr [ebp - 404h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 67 56 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864cccb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov ecx, dword ptr [ebp - 140h]
        mov dword ptr [ebp - 408h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 408h]
        mov dword ptr [edx + 1c8h], eax
        push 54h
        ; Exact mapped bytes E8 13 43 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x43
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 58: je 0x5864cd5f
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 40ch], edx
        push 0abh
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 FA 7D E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 18fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 410h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 C9 55 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x55
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864cd69
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 414h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [edx + 1cch], eax
        push 0ach
        ; Exact mapped bytes E8 72 42 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x42
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 7A: je 0x5864ce22
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 418h], edx
        push 19h
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 0C 7D E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 424h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 18fh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f8h
        push eax
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 424h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 C6 EE E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ce2c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 428h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 428h]
        mov dword ptr [eax + 1d0h], ecx
        push 0ach
        ; Exact mapped bytes E8 AF 41 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x41
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 154h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 154h], 0
        ; Exact mapped bytes 74 7B: je 0x5864cee6
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 42ch], eax
        push 1ah
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 49 7C E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 434h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 438h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 18fh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 211h
        push ecx
        mov edx, dword ptr [ebp - 430h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        mov edx, dword ptr [ebp - 438h]
        push edx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 02 EE E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864cef0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 43ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 43ch]
        mov dword ptr [ecx + 1d4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c8h]
        mov dword ptr [ebp - 440h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 82 86 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 444h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 63 86 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d0h]
        mov dword ptr [ebp - 448h], edx
        push 101h
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 44 86 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1d4h]
        mov dword ptr [ebp - 44ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 25 86 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1d4h]
        mov dword ptr [ebp - 450h], eax
        push 0
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 99 28 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 55 40 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x40
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 15ch], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes 74 52: je 0x5864d017
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 454h], edx
        push 75h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 3F 7B E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x7b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1abh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 40h
        push ecx
        mov edx, dword ptr [ebp - 458h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 11 53 E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x53
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d021
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 45ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 45ch]
        mov dword ptr [edx + 1d8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d8h]
        mov dword ptr [ebp - 460h], edx
        push 0
        mov ecx, dword ptr [ebp - 460h]
        ; Exact mapped bytes E8 84 8E E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864d06f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x5864d11c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 81 3F 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x3f
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 164h], 0
        ; Exact mapped bytes 74 51: je 0x5864d0ea
        __asm _emit 0x74
        __asm _emit 0x51
        push 0cbh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 7A E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7a
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 464h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1a1h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        shl edx, 5
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 136h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 464h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 8E D8 16 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d0f4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov ecx, dword ptr [ebp - 168h]
        mov dword ptr [ebp - 468h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 468h]
        mov dword ptr [eax + edx*4 + 1dch], ecx
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x5864d066
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864d12e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 51 01 00 00: jge 0x5864d289
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5864d14a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x5864d255
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 A9 3E 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 16ch], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes 74 5F: je 0x5864d1d0
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 46ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 2eh
        push eax
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 3E 79 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x79
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        push 40h
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 1c3h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4eh
        push ecx
        mov edx, dword ptr [ebp - 470h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 48 96 E3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x96
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d1da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov ecx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 474h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 474h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 1e8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 478h], edx
        push 0
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 27 23 E5 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x23
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 47ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 F1 25 E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x5864d141
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 480h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 2D 83 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9C FE FF FF: jmp 0x5864d125
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 71 3D 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 74 4A: je 0x5864d2f3
        __asm _emit 0x74
        __asm _emit 0x4a
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 212h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0cah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1c4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 70h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 B5 6D ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d2fd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov edx, dword ptr [ebp - 178h]
        mov dword ptr [ebp - 484h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 484h]
        mov dword ptr [eax + 210h], ecx
        push 94h
        ; Exact mapped bytes E8 DE 3C 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes 74 4D: je 0x5864d389
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 212h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0feh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1c4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d8h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 1F 6D ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d393
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 488h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 488h]
        mov dword ptr [eax + 214h], ecx
        push 94h
        ; Exact mapped bytes E8 48 3C 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3c
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 184h], 0
        ; Exact mapped bytes 74 4D: je 0x5864d41f
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 212h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 17ch
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1c4h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 10dh
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 89 6C ED FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d429
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov edx, dword ptr [ebp - 188h]
        mov dword ptr [ebp - 48ch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 48ch]
        mov dword ptr [eax + 218h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 490h], eax
        push 0ff00h
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 59 F7 EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 494h], edx
        push 0ff00h
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 3A F7 EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 218h]
        mov dword ptr [ebp - 498h], ecx
        push 0ff00h
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 1B F7 EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 21ch
        mov dword ptr [ebp - 49ch], edx
        push 20h
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 1F CC E6 FF: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 3B 3B 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes 74 4F: je 0x5864d52e
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 1f8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 213h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1eah
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 19dh
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 8A 4E E3 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d538
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov eax, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 4a0h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4a0h]
        mov dword ptr [ecx + 234h], edx
        push 54h
        ; Exact mapped bytes E8 A6 3A 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 58: je 0x5864d5cc
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4a4h], ecx
        push 0ech
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 8D 75 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x75
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1feh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1c2h
        push eax
        mov ecx, dword ptr [ebp - 4a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 5C 4D E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d5d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 4ach], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4ach]
        mov dword ptr [ecx + 238h], edx
        push 54h
        ; Exact mapped bytes E8 08 3A 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 58: je 0x5864d66a
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4b0h], ecx
        push 10fh
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 EF 74 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4b4h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1feh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1a4h
        push eax
        mov ecx, dword ptr [ebp - 4b4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 BE 4C E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d674
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [ebp - 4b8h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4b8h]
        mov dword ptr [ecx + 23ch], edx
        push 54h
        ; Exact mapped bytes E8 6A 39 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1a4h], 0
        ; Exact mapped bytes 74 58: je 0x5864d708
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4bch], ecx
        push 0d3h
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes E8 51 74 E3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x74
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1feh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1f4h
        push eax
        mov ecx, dword ptr [ebp - 4c0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 20 4C E3 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4c
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d712
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov eax, dword ptr [ebp - 1a8h]
        mov dword ptr [ebp - 4c4h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4c4h]
        mov dword ptr [ecx + 240h], edx
        push 0ach
        ; Exact mapped bytes E8 C9 38 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x38
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        mov byte ptr [ebp - 4], 34h
        cmp dword ptr [ebp - 1ach], 0
        ; Exact mapped bytes 74 7B: je 0x5864d7cc
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 4c8h], ecx
        push 27h
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 63 73 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x73
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4cch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4d0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4d4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1feh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1c2h
        push edx
        mov eax, dword ptr [ebp - 4cch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4d0h]
        push edx
        mov eax, dword ptr [ebp - 4d4h]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 1C E5 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d7d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov ecx, dword ptr [ebp - 1b0h]
        mov dword ptr [ebp - 4d8h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4d8h]
        mov dword ptr [edx + 24ch], eax
        push 0ach
        ; Exact mapped bytes E8 05 38 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        mov byte ptr [ebp - 4], 35h
        cmp dword ptr [ebp - 1b4h], 0
        ; Exact mapped bytes 74 7A: je 0x5864d88f
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 4dch], edx
        push 35h
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 9F 72 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x72
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4e0h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e4h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e8h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 1feh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1a4h
        push eax
        mov ecx, dword ptr [ebp - 4e0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4e4h]
        push eax
        mov ecx, dword ptr [ebp - 4e8h]
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 59 E4 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d899
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov edx, dword ptr [ebp - 1b8h]
        mov dword ptr [ebp - 4ech], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4ech]
        mov dword ptr [eax + 250h], ecx
        push 0ach
        ; Exact mapped bytes E8 42 37 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x37
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        mov byte ptr [ebp - 4], 36h
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 74 7B: je 0x5864d953
        __asm _emit 0x74
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 4f0h], eax
        push 22h
        mov ecx, dword ptr [ebp - 4f0h]
        ; Exact mapped bytes E8 DC 71 E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x71
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4f8h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4fch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 1feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1f4h
        push ecx
        mov edx, dword ptr [ebp - 4f4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4f8h]
        push ecx
        mov edx, dword ptr [ebp - 4fch]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 95 E3 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864d95d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, dword ptr [ebp - 1c0h]
        mov dword ptr [ebp - 500h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 500h]
        mov dword ptr [ecx + 254h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 504h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes E8 15 7C 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 508h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes E8 F6 7B 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 50ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 50ch]
        ; Exact mapped bytes E8 D7 7B 16 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 260h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 264h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 268h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 26ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 270h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 274h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 278h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 27ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 280h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 284h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2e4h], 0
        push 0bch
        ; Exact mapped bytes E8 92 35 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x35
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        mov byte ptr [ebp - 4], 37h
        cmp dword ptr [ebp - 1c4h], 0
        ; Exact mapped bytes 74 25: je 0x5864daad
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 AB 9B F3 FF: call 0x58587650
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864dab7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov edx, dword ptr [ebp - 1c8h]
        mov dword ptr [ebp - 510h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 510h]
        mov dword ptr [eax + 2e8h], ecx
        push 0ach
        ; Exact mapped bytes E8 24 35 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x35
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        mov byte ptr [ebp - 4], 38h
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 6B: je 0x5864db61
        __asm _emit 0x74
        __asm _emit 0x6b
        push 38h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 6F E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 514h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 518h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 51ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 196h
        push eax
        mov ecx, dword ptr [ebp - 514h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 87 E1 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864db6b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov edx, dword ptr [ebp - 1d0h]
        mov dword ptr [ebp - 520h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 520h]
        mov dword ptr [eax + 2ech], ecx
        push 0ach
        ; Exact mapped bytes E8 70 34 1E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x34
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        mov byte ptr [ebp - 4], 39h
        cmp dword ptr [ebp - 1d4h], 0
        ; Exact mapped bytes 74 6B: je 0x5864dc15
        __asm _emit 0x74
        __asm _emit 0x6b
        push 39h
        ; Exact mapped bytes 8B 0D D4 07 96 58: mov ecx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 6F E3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6f
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 524h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 528h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 52ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6bh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1d4h
        push eax
        mov ecx, dword ptr [ebp - 524h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 528h]
        push eax
        mov ecx, dword ptr [ebp - 52ch]
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 D3 E0 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864dc1f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov edx, dword ptr [ebp - 1d8h]
        mov dword ptr [ebp - 530h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 530h]
        mov dword ptr [eax + 2f0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ech]
        mov dword ptr [ebp - 534h], eax
        push 0
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 36 83 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2f0h]
        mov dword ptr [ebp - 538h], edx
        push 0
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 1A 83 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x83
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2fch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 300h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2dah], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2dch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2e0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2d9h], 0
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 80 E3 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 82 E3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x82
        __asm _emit 0xe3
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
