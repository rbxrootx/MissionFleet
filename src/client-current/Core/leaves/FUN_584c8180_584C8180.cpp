// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8180 .. +0x5B1 bytes.
extern "C" __declspec(naked) void FUN_584c8180_584C8180() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887eefch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0a8h
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
        movzx eax, word ptr [ebp + 38h]
        push eax
        mov ecx, dword ptr [ebp + 34h]
        push ecx
        mov edx, dword ptr [ebp + 30h]
        push edx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 05 00 00: call 0x584c8740
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 58896208h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 13ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 130h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 148h], ecx
        mov edx, dword ptr [ebp + 1ch]
        sub edx, 384h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 138h], edx
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 138h], 0
        ; Exact mapped bytes 7D 13: jge 0x584c8251
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 138h]
        add eax, 0e10h
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 14: jmp 0x584c8265
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 138h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 138h], eax
        mov dword ptr [ebp - 1ch], 28h
        mov eax, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 138h]
        cdq
        idiv dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5ah
        ; Exact mapped bytes 7C 0B: jl 0x584c82a1
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        sub edx, 5ah
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x584c82a7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        imul edx, dword ptr [ebp - 14h], 7
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx + 140h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 140h]
        add ecx, 7
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 140h], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 150h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 154h], 5
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 154h], 19h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 174h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 178h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 180h], 0
        push 20h
        ; Exact mapped bytes E8 B3 8C 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 21: je 0x584c8382
        __asm _emit 0x74
        __asm _emit 0x21
        push 10h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 C7 FB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A3 56 0A 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x56
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c8389
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 48h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax + 18ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 06 3A 2F 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 42 8C 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 44: je 0x584c8416
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 54h], edx
        push 37h
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF C6 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0fa0h
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FF E3 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c841d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 5ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [edx + 190h], eax
        push 58h
        ; Exact mapped bytes E8 CA 8B 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8b
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 44: je 0x584c848e
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 64h], ecx
        push 38h
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 C6 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0f9fh
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 87 E3 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c8495
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx + 194h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 8F 70 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 74h], eax
        push 64h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 69 D0 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd0
        __asm _emit 0x2e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 78h], edx
        push 101h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C0 D0 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd0
        __asm _emit 0x2e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 3A D9 FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 34 70 FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A8 D9 FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 140h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 DB 72 FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 8ch], ecx
        push 32h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 BF CF 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcf
        __asm _emit 0x2e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 90h], eax
        push 0ffffff00h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 10 D0 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd0
        __asm _emit 0x2e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 84 D8 FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 98h], ecx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 78 6F FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 EC D8 FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 140h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 1F 72 FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 D8 89 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x89
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 59: je 0x584c8695
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 14h
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1eh
        mov dword ptr [ebp - 0a8h], ecx
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 C4 FB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E0 22 2F 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c869c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b0h]
        mov dword ptr [ecx + 188h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 188h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 0C D8 FB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 15ch], 0e1h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 15ch], 87h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 34 00: ret 0x34
        __asm _emit 0xc2
        __asm _emit 0x34
        __asm _emit 0x00
    }
}
