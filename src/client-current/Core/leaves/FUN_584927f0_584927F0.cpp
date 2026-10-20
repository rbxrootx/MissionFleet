// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584927F0 .. +0x665 bytes.
extern "C" __declspec(naked) void FUN_584927f0_584927F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d8f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c8h
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
        mov dword ptr [eax], 58895084h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 51ch], 0
        ; Exact mapped bytes 74 1A: je 0x5849284a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 51ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 51ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 520h], 0
        ; Exact mapped bytes 74 1A: je 0x58492870
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 520h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 520h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 524h], 0
        ; Exact mapped bytes 74 1A: je 0x58492896
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 524h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 524h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 51ch], 0
        ; Exact mapped bytes 74 3D: je 0x584928df
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 51ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x584928cb
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x584928d2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 51ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 520h], 0
        ; Exact mapped bytes 74 3D: je 0x58492928
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 520h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58492914
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5849291b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 520h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 524h], 0
        ; Exact mapped bytes 74 3D: je 0x58492971
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 524h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5849295d
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58492964
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 524h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 510h], 0
        ; Exact mapped bytes 74 3D: je 0x584929ba
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x584929a6
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584929ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 510h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 514h], 0
        ; Exact mapped bytes 74 3D: je 0x58492a03
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 514h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x584929ef
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x584929f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 514h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 518h], 0
        ; Exact mapped bytes 74 3D: je 0x58492a4c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 518h]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x58492a38
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58492a3f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 518h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 27: je 0x58492a7f
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        ; Exact mapped bytes E8 C5 E5 39 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 74 2D: je 0x58492ab8
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 84h], edx
        push 1
        mov eax, dword ptr [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 8C E5 39 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0b8h], 0
        ; Exact mapped bytes 74 2D: je 0x58492af1
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 88h], ecx
        push 1
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 53 E5 39 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe5
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 504h], 0
        ; Exact mapped bytes 74 49: je 0x58492b46
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x58492b2f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492b39
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 504h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 508h], 0
        ; Exact mapped bytes 74 49: je 0x58492b9b
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x58492b84
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 94h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 6C FF FF FF: call dword ptr [ebp - 0x94]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492b8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 508h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4f8h], 0
        ; Exact mapped bytes 74 49: je 0x58492bf0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58492bd9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492be3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4f8h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4fch], 0
        ; Exact mapped bytes 74 49: je 0x58492c45
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x58492c2e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492c38
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4fch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 500h], 0
        ; Exact mapped bytes 74 49: je 0x58492c9a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x58492c83
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492c8d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 500h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 50ch], 0
        ; Exact mapped bytes 74 49: je 0x58492cef
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50ch]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x58492cd8
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 4C FF FF FF: call dword ptr [ebp - 0xb4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492ce2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 50ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 52ch], 0
        ; Exact mapped bytes 74 49: je 0x58492d44
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 52ch]
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x58492d2d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0bch], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492d37
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 52ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 530h], 0
        ; Exact mapped bytes 74 49: je 0x58492d99
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 530h]
        mov dword ptr [ebp - 48h], ecx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x58492d82
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 3C FF FF FF: call dword ptr [ebp - 0xc4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492d8c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 530h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 534h], 0
        ; Exact mapped bytes 74 49: je 0x58492dee
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 534h]
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x58492dd7
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0cch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 34 FF FF FF: call dword ptr [ebp - 0xcc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492de1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 534h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 2C 00 00: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x58492e1c
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 2C 00 00: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58492e1c
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 2B 00 00: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 75 21: jne 0x58492e3d
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 91 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 04 25 00 00: call 0x58495340
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 0C 0F 00: call 0x58583a80
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
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
        ret
    }
}
