// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A7DF0 .. +0x7C2 bytes.
extern "C" __declspec(naked) void FUN_586a7df0_586A7DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b0a70h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 37: je 0x586a7e45
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x586a7e34
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7e3b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 37: je 0x586a7e85
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x586a7e74
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7e7b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 37: je 0x586a7ec5
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x586a7eb4
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 74h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7ebb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 37: je 0x586a7f05
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x586a7ef4
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 7ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 84: call dword ptr [ebp - 0x7c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x84
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x586a7efb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 43: je 0x586a7f51
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x586a7f3d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 84h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 7C FF FF FF: call dword ptr [ebp - 0x84]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7f47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 43: je 0x586a7f9d
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x586a7f89
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8ch], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7f93
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 49: je 0x586a7ff2
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x586a7fdb
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 6C FF FF FF: call dword ptr [ebp - 0x94]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a7fe5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 43: je 0x586a803e
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x586a802a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8034
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 43: je 0x586a808a
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x586a8076
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8080
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 43: je 0x586a80d6
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x586a80c2
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ach], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a80cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 49: je 0x586a812b
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x586a8114
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 4C FF FF FF: call dword ptr [ebp - 0xb4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a811e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 49: je 0x586a8180
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x586a8169
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0bch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8173
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0
        mov ecx, 8
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 8ch]
        mov edx, 4
        shl edx, 1
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 74 6F: je 0x586a820e
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, 8
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8ch]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x586a81e4
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 3C FF FF FF: call dword ptr [ebp - 0xc4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a81ee
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov eax, 8
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8ch]
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [eax + ecx], 0
        mov edx, 4
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 0e4h], 0
        ; Exact mapped bytes 74 5B: je 0x586a827e
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, 4
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x586a825e
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0cch], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 34 FF FF FF: call dword ptr [ebp - 0xcc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8268
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e4h], 0
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 110h], 0
        ; Exact mapped bytes 74 5B: je 0x586a82ee
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 110h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x586a82ce
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 2C FF FF FF: call dword ptr [ebp - 0xd4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a82d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov ecx, 4
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 110h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 74 49: je 0x586a8343
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x586a832c
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0dch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 24 FF FF FF: call dword ptr [ebp - 0xdc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8336
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 13ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586a8355
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 63: jge 0x586a83be
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 140h], 0
        ; Exact mapped bytes 74 51: je 0x586a83bc
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 140h]
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x586a83a1
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 1C FF FF FF: call dword ptr [ebp - 0xe4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a83ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 140h], 0
        ; Exact mapped bytes EB 8E: jmp 0x586a834c
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a83d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D CB 01 00 00: jge 0x586a85a5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 8ch]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 67: je 0x586a845c
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x586a8436
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ech], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 14 FF FF FF: call dword ptr [ebp - 0xec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a8440
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8ch]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 74 67: je 0x586a84de
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 8ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x586a84b8
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0f4h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 0C FF FF FF: call dword ptr [ebp - 0xf4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a84c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 8ch]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0e4h], 0
        ; Exact mapped bytes 74 51: je 0x586a853f
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x586a8524
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0fch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a852e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0e4h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 110h], 0
        ; Exact mapped bytes 74 51: je 0x586a85a0
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x586a8585
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 104h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 FC FE FF FF: call dword ptr [ebp - 0x104]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a858f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 110h], 0
        ; Exact mapped bytes E9 22 FE FF FF: jmp 0x586a83c7
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 D3 10 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
