// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58659B10 .. +0x268A bytes.
extern "C" __declspec(naked) void FUN_58659b10_58659B10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888913bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 498h
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
        ; Exact mapped bytes E8 14 87 E2 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588af8fch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 D4 07 96 58: mov edx, dword ptr [0x589607d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58659b8a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x58659c1c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 69 74 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 48: je 0x58659bf3
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1b8h], edx
        mov eax, 22h
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 55 AF E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xaf
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1bch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 32 87 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58659bfa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1c0h]
        mov dword ptr [ecx + eax*4 + 6ch], edx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58659b81
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58659c2e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x58659cc0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 C5 73 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x73
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 48: je 0x58659c97
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1c4h], edx
        mov eax, 20h
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 B1 AE E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xae
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8E 86 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58659c9e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ecx + eax*4 + 74h], edx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58659c25
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 3A 73 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x73
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 6F: je 0x58659d49
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1d0h], ecx
        push 4ch
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 DD AD E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1d8h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1dch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 16h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 161h
        push edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov eax, dword ptr [ebp - 1dch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9C 1F E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58659d50
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 1e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + 0b4h], eax
        push 0ach
        ; Exact mapped bytes E8 8E 72 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 6E: je 0x58659df4
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1e4h], edx
        push 8
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 31 AD E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f0h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 16h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1bah
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F1 1E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58659dfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1f4h]
        mov dword ptr [eax + 7ch], ecx
        push 0ach
        ; Exact mapped bytes E8 E6 71 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x71
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 70: je 0x58659e9e
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 1f8h], eax
        push 5
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 89 AC E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 200h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 204h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 16h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1fah
        push ecx
        mov edx, dword ptr [ebp - 1fch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 47 1E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58659ea5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 208h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 80h], edx
        push 0ach
        ; Exact mapped bytes E8 39 71 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 72: je 0x58659f4d
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 20ch], ecx
        push 6
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 DC AB E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xab
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 214h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 218h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 17ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1fah
        push edx
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 214h]
        push edx
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 98 1D E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58659f54
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 21ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [edx + 84h], eax
        push 0ach
        ; Exact mapped bytes E8 8A 70 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x70
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 6C: je 0x58659ff6
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 220h], edx
        push 3ah
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 2D AB E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xab
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 22ch], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 46h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 43h
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EF 1C E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58659ffd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 230h]
        mov dword ptr [eax + 108h], ecx
        push 0ach
        ; Exact mapped bytes E8 E1 6F 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6f
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 70: je 0x5865a0a3
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 234h], eax
        push 3bh
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 84 AA E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 23ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 240h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        push ecx
        mov edx, dword ptr [ebp - 240h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 42 1C E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5865a0aa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 244h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 244h]
        mov dword ptr [ecx + 10ch], edx
        push 0ach
        ; Exact mapped bytes E8 34 6F 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6f
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 6C: je 0x5865a14c
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 248h], ecx
        push 3dh
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 D7 A9 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 250h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 254h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 7ch
        push edx
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 99 1B E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5865a153
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 258h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 258h]
        mov dword ptr [ecx + eax + 110h], edx
        push 0ach
        ; Exact mapped bytes E8 82 6E 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6e
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 6F: je 0x5865a201
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 25ch], ecx
        push 3dh
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 25 A9 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 264h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 268h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d6h
        push edx
        mov eax, dword ptr [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov eax, dword ptr [ebp - 268h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E4 1A E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5865a208
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 26ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 26ch]
        mov dword ptr [eax + edx + 110h], ecx
        push 0ach
        ; Exact mapped bytes E8 CD 6D 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 70: je 0x5865a2b7
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 270h], eax
        push 3dh
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 70 A8 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 278h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 27ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 144h
        push ecx
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2E 1A E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5865a2be
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 280h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + ecx + 110h], eax
        push 0ach
        ; Exact mapped bytes E8 18 6D 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 6E: je 0x5865a36a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 284h], edx
        push 3dh
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 BB A7 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28ch], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 290h], ecx
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e5h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 28ch]
        push eax
        mov ecx, dword ptr [ebp - 290h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7B 19 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5865a371
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 294h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 294h]
        mov dword ptr [edx + ecx + 110h], eax
        push 54h
        ; Exact mapped bytes E8 67 6C 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6c
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 4D: je 0x5865a3fa
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 298h], edx
        push 124h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 57 A7 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa7
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 7ch
        push ecx
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 2E 7F E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a404
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 2a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a0h]
        mov dword ptr [ecx + eax + 120h], edx
        push 54h
        ; Exact mapped bytes E8 D1 6B 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6b
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 52: je 0x5865a49b
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2a4h], ecx
        push 124h
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 BB A6 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        add edx, 69h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0d6h
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 8D 7E E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a4a5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 2ach], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ach]
        mov dword ptr [edx + ecx + 120h], eax
        push 54h
        ; Exact mapped bytes E8 30 6B 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6b
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 53: je 0x5865a53d
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2b0h], edx
        push 124h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 1A A6 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 69h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 144h
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 EB 7D E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a547
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 2b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2b8h]
        mov dword ptr [eax + edx + 120h], ecx
        push 54h
        ; Exact mapped bytes E8 8F 6A 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 53: je 0x5865a5de
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2bch], eax
        push 124h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 79 A5 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 69h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e5h
        push edx
        mov eax, dword ptr [ebp - 2c0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 4A 7D E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x7d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a5e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 2c4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2c4h]
        mov dword ptr [edx + ecx + 120h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 2c8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 81 AF 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 2cch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 62 AF 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865a661
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 49: jge 0x5865a6b0
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 2d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 26 AF 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 120h]
        mov dword ptr [ebp - 2d4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 03 AF 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A8: jmp 0x5865a658
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 134h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 138h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 13ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 144h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 FC 00 00 00: mov word ptr [ecx + 0xfc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4h
        ; Exact mapped bytes E8 F0 68 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 2A: je 0x5865a754
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 64h
        push eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 24 05 0A 00: call 0x586fac70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a75e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 2d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2d8h]
        mov dword ptr [eax + 148h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 2dch], eax
        push 101h
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 17 AE 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xae
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 2e0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 F8 AD 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xad
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 2e4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 D9 AD 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xad
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 25 68 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 21: je 0x5865a816
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 62 91 E6 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x91
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a820
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2e8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2e8h]
        mov dword ptr [ecx + 90h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865a851
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D AD 00 00 00: jge 0x5865a908
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 A2 67 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x67
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 5E: je 0x5865a8d6
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2ech], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 8A A2 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2f4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 2f0h]
        push edx
        mov eax, dword ptr [ebp - 2f4h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 52 7A E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865a8e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2f8h]
        mov dword ptr [eax + edx*4 + 88h], ecx
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x5865a848
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 2fch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 80 AC 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 88h]
        mov dword ptr [ebp - 300h], edx
        push 101h
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 58 AC 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xac
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 304h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 FA 90 E6 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x90
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865a989
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 8D E2 00 00 00: jge 0x5865aa75
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 6A 66 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x66
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 6F: je 0x5865aa1f
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 308h], edx
        imul eax, dword ptr [ebp - 14h], 6
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 4F A1 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 30ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 310h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 3bh
        push eax
        imul ecx, dword ptr [ebp - 14h], 46h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 8fh]
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        push ecx
        mov edx, dword ptr [ebp - 310h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 09 79 E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865aa29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 314h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [edx + ecx*4 + 94h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 318h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 41 AB 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xab
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0B FF FF FF: jmp 0x5865a980
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 85 65 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865ab20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 31ch], edx
        push 12h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 1E A0 E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa0
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 324h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 328h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 32ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8fh
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov edx, dword ptr [ebp - 328h]
        push edx
        mov eax, dword ptr [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 C8 11 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865ab2a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 330h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 330h]
        mov dword ptr [edx + 0a0h], eax
        push 0ach
        ; Exact mapped bytes E8 B1 64 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x64
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865abf4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 334h], edx
        push 14h
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 4A 9F E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 33ch], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 340h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 344h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0d5h
        push edx
        mov eax, dword ptr [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov eax, dword ptr [ebp - 344h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 F4 10 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865abfe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 348h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 348h]
        mov dword ptr [edx + 0a4h], eax
        push 0ach
        ; Exact mapped bytes E8 DD 63 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865acc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 34ch], edx
        push 13h
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 76 9E E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 350h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 354h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 358h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 35ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 11bh
        push edx
        mov eax, dword ptr [ebp - 350h]
        push eax
        mov ecx, dword ptr [ebp - 354h]
        push ecx
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov eax, dword ptr [ebp - 35ch]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 20 10 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865acd2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 360h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 360h]
        mov dword ptr [edx + 0a8h], eax
        push 0ach
        ; Exact mapped bytes E8 09 63 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865ad9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 364h], edx
        push 36h
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 A2 9D E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 36ch], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 370h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 374h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 161h
        push edx
        mov eax, dword ptr [ebp - 368h]
        push eax
        mov ecx, dword ptr [ebp - 36ch]
        push ecx
        mov edx, dword ptr [ebp - 370h]
        push edx
        mov eax, dword ptr [ebp - 374h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 4C 0F E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865ada6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 378h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 378h]
        mov dword ptr [edx + 0ach], eax
        push 0ach
        ; Exact mapped bytes E8 35 62 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x62
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865ae70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 37ch], edx
        push 37h
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 CE 9C E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 384h], ecx
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 388h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38ch], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1a7h
        push edx
        mov eax, dword ptr [ebp - 380h]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        push edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 78 0E E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865ae7a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov ecx, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 390h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 390h]
        mov dword ptr [edx + 0b0h], eax
        push 0d0h
        ; Exact mapped bytes E8 61 61 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x61
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 2B: je 0x5865aee4
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 24 2E FE FF: call 0x5863dd00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865aeee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 394h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 394h]
        mov dword ptr [eax + 154h], ecx
        push 84h
        ; Exact mapped bytes E8 ED 60 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x60
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 2B: je 0x5865af58
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 90 64 FE FF: call 0x586413e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865af62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov eax, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 398h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 398h]
        mov dword ptr [ecx + 158h], edx
        push 0b8h
        ; Exact mapped bytes E8 79 60 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 2B: je 0x5865afcc
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 0C 36 FD FF: call 0x5862e5d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865afd6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 39ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 39ch]
        mov dword ptr [edx + 15ch], eax
        push 330h
        ; Exact mapped bytes E8 05 60 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 31: je 0x5865b046
        __asm _emit 0x74
        __asm _emit 0x31
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 02 75 FE FF: call 0x58642540
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b050
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 3a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3a0h]
        mov dword ptr [eax + 160h], ecx
        push 304h
        ; Exact mapped bytes E8 8B 5F 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 31: je 0x5865b0c0
        __asm _emit 0x74
        __asm _emit 0x31
        push 2
        push 0
        push 0
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B8 FE FE FF: call 0x5864af70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b0ca
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 3a4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3a4h]
        mov dword ptr [ecx + 164h], edx
        push 27ch
        ; Exact mapped bytes E8 11 5F 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 2B: je 0x5865b134
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 E4 99 FC FF: call 0x58624b10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b13e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3a8h]
        mov dword ptr [edx + 16ch], eax
        push 25ch
        ; Exact mapped bytes E8 9D 5E 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 2B: je 0x5865b1a8
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 D0 E0 FD FF: call 0x58639270
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b1b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 3ach], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ach]
        mov dword ptr [eax + 170h], ecx
        push 1c0h
        ; Exact mapped bytes E8 29 5E 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 2B: je 0x5865b21c
        __asm _emit 0x74
        __asm _emit 0x2b
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 9C 6F FD FF: call 0x586321b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b226
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 3b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3b0h]
        mov dword ptr [ecx + 174h], edx
        push 78h
        ; Exact mapped bytes E8 B8 5D 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5d
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 36: je 0x5865b298
        __asm _emit 0x74
        __asm _emit 0x36
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0c8h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 90 78 FF FF: call 0x58652b20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b2a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 3b4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3b4h]
        mov dword ptr [edx + 168h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [ebp - 3b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 C3 AA E2 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 3bch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 05 13 E9 FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 178h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 3c0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 89 A2 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 3c4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 6A A2 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 3c8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 4B A2 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 3cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 2C A2 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 3d0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 0D A2 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa2
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 59 5C 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5c
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 21: je 0x5865b3e2
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 96 85 E6 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b3ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 3d4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3d4h]
        mov dword ptr [ecx + 0cch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 3d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 47 86 E6 FF: call 0x584c3a70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865b43c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D AF 00 00 00: jge 0x5865b4f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B7 5B 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 60: je 0x5865b4c3
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 3dch], edx
        mov eax, 24h
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 9D 96 E2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x96
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 3e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 3e4h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 3e0h]
        push edx
        mov eax, dword ptr [ebp - 3e4h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 65 6E E2 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b4cd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 3e8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3e8h]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x5865b433
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 94h
        ; Exact mapped bytes E8 05 5B 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5b
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 4D: je 0x5865b562
        __asm _emit 0x74
        __asm _emit 0x4d
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 9bh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 48h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 46 8B EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b56c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 3ech], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ech]
        mov dword ptr [eax + edx + 0d0h], ecx
        push 94h
        ; Exact mapped bytes E8 66 5A 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5a
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 50: je 0x5865b604
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e6h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0a5h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 A4 8A EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b60e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 3f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3f0h]
        mov dword ptr [edx + ecx + 0d0h], eax
        push 94h
        ; Exact mapped bytes E8 C4 59 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x59
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 52: je 0x5865b6a8
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 17bh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0f2h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 00 8A EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b6b2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 3f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + eax + 0d0h], edx
        push 94h
        ; Exact mapped bytes E8 21 59 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 50: je 0x5865b749
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 140h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 209h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18ah
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
        mov eax, dword ptr [edx + 0cch]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 5F 89 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b753
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 3f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f8h]
        mov dword ptr [ecx + eax + 0d0h], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865b78d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 26: jge 0x5865b7b9
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0d0h]
        mov dword ptr [ebp - 3fch], eax
        push 0ff00h
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 0A 14 EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CB: jmp 0x5865b784
        __asm _emit 0xeb
        __asm _emit 0xcb
        push 94h
        ; Exact mapped bytes E8 41 58 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 4F: je 0x5865b828
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 9bh
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 80 88 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b832
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 400h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 400h]
        mov dword ptr [edx + ecx + 0e0h], eax
        push 94h
        ; Exact mapped bytes E8 A0 57 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 52: je 0x5865b8cc
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 140h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e6h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a5h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 DC 87 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b8d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov edx, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 404h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 404h]
        mov dword ptr [ecx + eax + 0e0h], edx
        push 94h
        ; Exact mapped bytes E8 FC 56 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 170h], 0
        ; Exact mapped bytes 74 50: je 0x5865b96e
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 140h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 17bh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 7eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0f2h
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
        mov eax, dword ptr [edx + 0cch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 3A 87 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865b978
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov ecx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 408h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 408h]
        mov dword ptr [eax + edx + 0e0h], ecx
        push 94h
        ; Exact mapped bytes E8 5B 56 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 2ch
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 74 50: je 0x5865ba0f
        __asm _emit 0x74
        __asm _emit 0x50
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 140h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 209h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 7eh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18ah
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 99 86 EC FF: call 0x585240a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865ba19
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 40ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 40ch]
        mov dword ptr [eax + edx + 0e0h], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865ba53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 26: jge 0x5865ba7f
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e0h]
        mov dword ptr [ebp - 410h], edx
        push 0ff00h
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 44 11 EF FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CB: jmp 0x5865ba4a
        __asm _emit 0xeb
        __asm _emit 0xcb
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 F0 00 00 00: mov word ptr [ecx + 0xf0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f4h], 1
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 F8 00 00 00: mov word ptr [ecx + 0xf8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 FA 00 00 00: mov word ptr [eax + 0xfa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865bac2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 43: jge 0x5865bb0b
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e0h]
        mov dword ptr [ebp - 414h], ecx
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 F8 A3 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa3
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e0h]
        mov dword ptr [ebp - 418h], ecx
        push 0dh
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 E8 38 E4 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x5865bab9
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865bb1d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 43: jge 0x5865bb66
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0d0h]
        mov dword ptr [ebp - 41ch], edx
        push 1
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 9D A3 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa3
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0d0h]
        mov dword ptr [ebp - 420h], edx
        push 0dh
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 8D 38 E4 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x5865bb14
        __asm _emit 0xeb
        __asm _emit 0xae
        push 0ach
        ; Exact mapped bytes E8 94 54 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x54
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 2dh
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5865bc11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 424h], ecx
        push 4
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 2D 8F E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 428h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 42ch], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 430h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 434h], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 41h
        push ecx
        mov edx, dword ptr [ebp - 428h]
        push edx
        mov eax, dword ptr [ebp - 42ch]
        push eax
        mov ecx, dword ptr [ebp - 430h]
        push ecx
        mov edx, dword ptr [ebp - 434h]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 D7 00 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bc1b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov eax, dword ptr [ebp - 184h]
        mov dword ptr [ebp - 438h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 438h]
        mov dword ptr [ecx + 100h], edx
        push 0ach
        ; Exact mapped bytes E8 C0 53 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x53
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 188h], eax
        mov byte ptr [ebp - 4], 2eh
        cmp dword ptr [ebp - 188h], 0
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5865bce8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 43ch], ecx
        push 7
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 59 8E E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 440h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 444h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 448h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44ch], edx
        push 40h
        mov eax, dword ptr [ebp + 10h]
        add eax, 14ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 80h
        push ecx
        mov edx, dword ptr [ebp - 440h]
        push edx
        mov eax, dword ptr [ebp - 444h]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        push ecx
        mov edx, dword ptr [ebp - 44ch]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 00 00 E7 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bcf2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov eax, dword ptr [ebp - 18ch]
        mov dword ptr [ebp - 450h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 450h]
        mov dword ptr [ecx + 104h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 454h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 80 98 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 458h], eax
        push 101h
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 61 98 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 AA 52 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x52
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 2fh
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 74 7E: je 0x5865bdee
        __asm _emit 0x74
        __asm _emit 0x7e
        push 1eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 8D E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x8d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 45ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 460h], edx
        ; Exact mapped bytes A1 0C 20 96 58: mov eax, dword ptr [0x5896200c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 464h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 468h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 217h
        push ecx
        mov edx, dword ptr [ebp - 45ch]
        push edx
        mov eax, dword ptr [ebp - 460h]
        push eax
        mov ecx, dword ptr [ebp - 464h]
        push ecx
        mov edx, dword ptr [ebp - 468h]
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 FA FE E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bdf8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 46ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 46ch]
        mov dword ptr [ecx + 14ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14ch]
        mov dword ptr [ebp - 470h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 7A 97 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 C3 51 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 198h], eax
        mov byte ptr [ebp - 4], 30h
        cmp dword ptr [ebp - 198h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5865bedd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1fh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 8C E2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 474h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 478h], eax
        ; Exact mapped bytes 8B 0D 0C 20 96 58: mov ecx, dword ptr [0x5896200c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 47ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 480h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 138h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 217h
        push edx
        mov eax, dword ptr [ebp - 474h]
        push eax
        mov ecx, dword ptr [ebp - 478h]
        push ecx
        mov edx, dword ptr [ebp - 47ch]
        push edx
        mov eax, dword ptr [ebp - 480h]
        push eax
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 0B FE E6 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bee7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 19ch]
        mov dword ptr [ebp - 484h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 484h]
        mov dword ptr [edx + 150h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 488h], edx
        push 101h
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 8B 96 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        push 5ch
        ; Exact mapped bytes E8 D7 50 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov byte ptr [ebp - 4], 31h
        cmp dword ptr [ebp - 1a0h], 0
        ; Exact mapped bytes 74 25: je 0x5865bf68
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 A0 E5 FA FF: call 0x5860a500
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bf72
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov eax, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 48ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 48ch]
        mov dword ptr [ecx + 68h], edx
        push 5ch
        ; Exact mapped bytes E8 6F 50 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov byte ptr [ebp - 4], 32h
        cmp dword ptr [ebp - 1a8h], 0
        ; Exact mapped bytes 74 21: je 0x5865bfcc
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 AC 79 E6 FF: call 0x584c3970
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865bfd6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov ecx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 490h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 490h]
        mov dword ptr [edx + 0b8h], eax
        push 118h
        ; Exact mapped bytes E8 05 50 1D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1b0h], eax
        mov byte ptr [ebp - 4], 33h
        cmp dword ptr [ebp - 1b0h], 0
        ; Exact mapped bytes 74 25: je 0x5865c03a
        __asm _emit 0x74
        __asm _emit 0x25
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 AE 77 FF FF: call 0x586537e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5865c044
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov ecx, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 494h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 494h]
        mov dword ptr [edx + 0bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 498h], edx
        push 101h
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 2E 95 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 99 84 F2 FF: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 49ch], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x5865c0e9
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [edx + ecx + 6ch]
        ; Exact mapped bytes 74 0B: je 0x5865c0cd
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D4 9C E2 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9c
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3B 95 E3 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x95
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes 75 02: jne 0x5865c0e7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5865c0e9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BC: jmp 0x5865c0a5
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, 0fah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 82 01 00 00: mov word ptr [ecx + 0x182], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 184h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 188h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 4a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 62 9E E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 4a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 46 9E E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xff
        xor edx, edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 80 01 00 00: mov word ptr [eax + 0x180], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 9E E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9e
        __asm _emit 0xe2
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
