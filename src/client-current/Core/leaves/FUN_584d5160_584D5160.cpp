// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D5160 .. +0x965 bytes.
extern "C" __declspec(naked) void FUN_584d5160_584D5160() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f4f8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0fch
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
        ; Exact mapped bytes E8 C7 D0 FA FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a1a00h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        push 54h
        ; Exact mapped bytes E8 3A BE 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbe
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x584d520c
        __asm _emit 0x74
        __asm _emit 0x32
        push 8
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 F9 FA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 61a8h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 D1 FA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d5213
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 68h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax + 88h], ecx
        push 54h
        ; Exact mapped bytes E8 D4 BD 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbd
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x584d5272
        __asm _emit 0x74
        __asm _emit 0x32
        push 9
        ; Exact mapped bytes 8B 0D DC 06 96 58: mov ecx, dword ptr [0x589606dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 F8 FA FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 61a8h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B3 D0 FA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d5279
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 74h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 08 03 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 82 0B FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E BD 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbd
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x584d52f6
        __asm _emit 0x74
        __asm _emit 0x20
        push 61b2h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2F D0 FA FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d52fd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [edx + 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 80h], edx
        push 101h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 84 02 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F8 0A FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        push 184h
        ; Exact mapped bytes E8 A8 BC 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 44: je 0x584d53b0
        __asm _emit 0x74
        __asm _emit 0x44
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3ah
        push edx
        mov eax, dword ptr [ebp + 0ch]
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
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 55 8C FF FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d53b7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8ch], ecx
        push 7fffh
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 94 0A FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 90h], eax
        push 14h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 EB 9F FC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 94h], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F2 0A FB FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 DB BB 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbb
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 44: je 0x584d547d
        __asm _emit 0x74
        __asm _emit 0x44
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 4eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
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
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 88 8B FF FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d5484
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 9ch], ecx
        push 7fffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 C7 09 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0a0h], eax
        push 14h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 1E 9F FC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 25 0A FB FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ach], ecx
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C F5 FA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 94 8F FF FF: call 0x584ce4b0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B F5 FA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 63 8F FF FF: call 0x584ce4b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 AC BA 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xba
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 44: je 0x584d55ac
        __asm _emit 0x74
        __asm _emit 0x44
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 62h
        push edx
        mov eax, dword ptr [ebp + 0ch]
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
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 59 8A FF FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d55b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0bch], ecx
        push 7fffh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 98 08 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0c0h], eax
        push 14h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 EF 9D FC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F6 08 FB FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D F4 FA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 65 8E FF FF: call 0x584ce4b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 AE B9 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 44: je 0x584d56aa
        __asm _emit 0x74
        __asm _emit 0x44
        push 505050h
        push 0
        push 0dcdcdch
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1b8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 76h
        push edx
        mov eax, dword ptr [ebp + 0ch]
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
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5B 89 FF FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d56b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0d4h], ecx
        push 7fffh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 9A 07 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0d8h], eax
        push 14h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F1 9C FC FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0dch], edx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 F8 07 FB FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F F3 FA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 67 8D FF FF: call 0x584ce4b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 02: shl cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
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
        push 0ach
        ; Exact mapped bytes E8 37 B8 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb8
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 33: je 0x584d5810
        __asm _emit 0x74
        __asm _emit 0x33
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 64h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D5 64 FF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d5817
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e8h]
        mov dword ptr [ecx + eax + 90h], edx
        push 0ach
        ; Exact mapped bytes E8 BE B7 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 37: je 0x584d588d
        __asm _emit 0x74
        __asm _emit 0x37
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 6ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0c8h
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 58 64 FF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d5894
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + ecx + 90h], eax
        push 0ach
        ; Exact mapped bytes E8 41 B7 35 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb7
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 35: je 0x584d5908
        __asm _emit 0x74
        __asm _emit 0x35
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 6ch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12ch
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes 8B 15 0C 20 96 58: mov edx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 DD 63 FF FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x584d590f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0f0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + edx + 90h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0f4h], edx
        push 7fffh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 25 05 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0f8h], edx
        push 7fffh
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 FD 04 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 0fch], edx
        push 7fffh
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 D6 04 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 100h], edx
        push 101h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DE FB 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 104h], eax
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 B6 FB 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 108h], eax
        push 101h
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 8F FB 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0x2d
        __asm _emit 0x00
        push 7fffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 04 FB FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 9ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 177h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], 0
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
