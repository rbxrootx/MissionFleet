// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AAF60 .. +0xA5B bytes.
extern "C" __declspec(naked) void FUN_586aaf60_586AAF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 164h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b0b04h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 43: je 0x586aafc4
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x586aafad
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586aafb7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 194h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586aafd6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 63: jge 0x586ab03f
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0f8h], 0
        ; Exact mapped bytes 74 51: je 0x586ab03d
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x586ab022
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 78 FF FF FF: call dword ptr [ebp - 0x88]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab02c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0f8h], 0
        ; Exact mapped bytes EB 8E: jmp 0x586aafcd
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes EB 09: jmp 0x586ab04a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 63: jge 0x586ab0b3
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0f8h], 0
        ; Exact mapped bytes 74 51: je 0x586ab0b1
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x586ab096
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 70 FF FF FF: call dword ptr [ebp - 0x90]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab0a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0f8h], 0
        ; Exact mapped bytes EB 8E: jmp 0x586ab041
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 49: je 0x586ab108
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x586ab0f1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab0fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 49: je 0x586ab15d
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab146
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 60 FF FF FF: call dword ptr [ebp - 0xa0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab150
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x586ab1b2
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x586ab19b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 58 FF FF FF: call dword ptr [ebp - 0xa8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab1a5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x586ab207
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x586ab1f0
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 50 FF FF FF: call dword ptr [ebp - 0xb0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab1fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0ach], 0
        ; Exact mapped bytes 74 5B: je 0x586ab277
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x586ab257
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 48 FF FF FF: call dword ptr [ebp - 0xb8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab261
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0ach], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0ach], 0
        ; Exact mapped bytes 74 5B: je 0x586ab2e7
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab2c7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 40 FF FF FF: call dword ptr [ebp - 0xc0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab2d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 0
        ; Exact mapped bytes 74 49: je 0x586ab33c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x586ab325
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 38 FF FF FF: call dword ptr [ebp - 0xc8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab32f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 49: je 0x586ab391
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x586ab37a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 30 FF FF FF: call dword ptr [ebp - 0xd0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab384
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 49: je 0x586ab3e6
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x586ab3cf
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 28 FF FF FF: call dword ptr [ebp - 0xd8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab3d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c4h], 0
        ; Exact mapped bytes 74 49: je 0x586ab43b
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab424
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0e0h], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 20 FF FF FF: call dword ptr [ebp - 0xe0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab42e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 74 49: je 0x586ab490
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x586ab479
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 18 FF FF FF: call dword ptr [ebp - 0xe8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab483
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 74 49: je 0x586ab4e5
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x586ab4ce
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 10 FF FF FF: call dword ptr [ebp - 0xf0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab4d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 49: je 0x586ab53a
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x586ab523
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 08 FF FF FF: call dword ptr [ebp - 0xf8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab52d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0dch], 0
        ; Exact mapped bytes 74 49: je 0x586ab58f
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab578
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 100h], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 00 FF FF FF: call dword ptr [ebp - 0x100]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab582
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 49: je 0x586ab5e4
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x586ab5cd
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 F8 FE FF FF: call dword ptr [ebp - 0x108]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab5d7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 49: je 0x586ab639
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 54h], edx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x586ab622
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 110h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 F0 FE FF FF: call dword ptr [ebp - 0x110]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab62c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 49: je 0x586ab68e
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x586ab677
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 118h], eax
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 E8 FE FF FF: call dword ptr [ebp - 0x118]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab681
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 74 49: je 0x586ab6e3
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab6cc
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 120h], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 E0 FE FF FF: call dword ptr [ebp - 0x120]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab6d6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 0e4h], 0
        ; Exact mapped bytes 74 5B: je 0x586ab753
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x586ab733
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 128h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 D8 FE FF FF: call dword ptr [ebp - 0x128]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab73d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0e4h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 0e4h], 0
        ; Exact mapped bytes 74 5B: je 0x586ab7c3
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x586ab7a3
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 130h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab7ad
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0e4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ech], 0
        ; Exact mapped bytes 74 49: je 0x586ab818
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x586ab801
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 138h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 C8 FE FF FF: call dword ptr [ebp - 0x138]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab80b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ech], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f4h], 0
        ; Exact mapped bytes 74 49: je 0x586ab86d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab856
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 140h], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 C0 FE FF FF: call dword ptr [ebp - 0x140]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab860
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c8h], 0
        ; Exact mapped bytes 74 49: je 0x586ab8c2
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x586ab8ab
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab8b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 49: je 0x586ab917
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x586ab900
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 150h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab90a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        ; Exact mapped bytes 83 3D D0 70 94 58 00: cmp dword ptr [0x589470d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 42: je 0x586ab962
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes A1 D0 70 94 58: mov eax, dword ptr [0x589470d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x586ab94e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 158h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab958
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes C7 05 D0 70 94 58 00 00 00 00: mov dword ptr [0x589470d0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D4 70 94 58 00: cmp dword ptr [0x589470d4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x586ab9ae
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D D4 70 94 58: mov ecx, dword ptr [0x589470d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x586ab99a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 160h], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ab9a4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        ; Exact mapped bytes C7 05 D4 70 94 58 00 00 00 00: mov dword ptr [0x589470d4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A FE EB FF: call 0x5856b7c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
