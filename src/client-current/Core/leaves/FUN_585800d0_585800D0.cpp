// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585800D0 .. +0x2FF bytes.
extern "C" __declspec(naked) void FUN_585800d0_585800D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883bdfh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
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
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 21 F0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588aa934h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        push 70h
        ; Exact mapped bytes E8 B7 0E 2B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 30: je 0x5858018d
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        push 0
        push 0ffffffh
        push 28h
        push 400h
        push 19h
        push 39ch
        ; Exact mapped bytes A1 24 20 96 58: mov eax, dword ptr [0x58962024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 28 22 F0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58580194
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes A3 E8 1F 96 58: mov dword ptr [0x58961fe8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        push 7d00h
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 5C F0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 46 0E 2B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 31: je 0x585801ff
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        push 0
        push 0ffffffh
        push 39h
        push 400h
        push 2ah
        push 39ch
        ; Exact mapped bytes 8B 0D 24 20 96 58: mov ecx, dword ptr [0x58962024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 21 F0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58580206
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 89 0D EC 1F 96 58: mov dword ptr [0x58961fec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        push 7d00h
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 5C F0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 48h], 400h
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 28h], 588aa848h
        lea edx, [ebp - 2ch]
        push edx
        push 0f003fh
        push 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5858027b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 3C: jmp 0x585802b7
        __asm _emit 0xeb
        __asm _emit 0x3c
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 4ch]
        push edx
        lea eax, [ebp - 50h]
        push eax
        push 0
        push 588aa870h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x585802a5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x585802ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 5C F0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 121cch
        ; Exact mapped bytes E8 35 0D 2B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0d
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 24: je 0x58580303
        __asm _emit 0x74
        __asm _emit 0x24
        push 2710h
        push 258h
        push 320h
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 12 58 FA FF: call 0x58525b10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x58
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858030a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 54h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 89 15 04 06 96 58: mov dword ptr [0x58960604], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 5C F0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 5A F0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xff
        push 2710h
        ; Exact mapped bytes 8B 0D 04 06 96 58: mov ecx, dword ptr [0x58960604]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 5B F0 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        push 302ch
        ; Exact mapped bytes E8 B2 0C 2B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 0D: je 0x5858036f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 46 5F 1D 00: call 0x587562b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58580376
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 89 0D 80 75 94 58: mov dword ptr [0x58947580], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 64h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
