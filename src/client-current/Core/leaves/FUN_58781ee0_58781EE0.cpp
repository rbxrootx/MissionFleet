// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781EE0 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_58781ee0_58781EE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889088bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
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
        movzx eax, word ptr [ebp + 3ch]
        push eax
        mov ecx, dword ptr [ebp + 38h]
        push ecx
        mov edx, dword ptr [ebp + 34h]
        push edx
        mov eax, dword ptr [ebp + 30h]
        push eax
        mov ecx, dword ptr [ebp + 2ch]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 68 D4 FF: call 0x584c8740
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588b5e68h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 13ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 144h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 424h], 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 124h
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        cdq
        mov ecx, 0b4h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 130h], eax
        mov esi, dword ptr [ebp + 1ch]
        imul esi, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 FC 9C D0 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0xd0
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 16h
        div ecx
        add edx, 86h
        imul esi, edx
        mov eax, esi
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 17ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 148h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14ch], 0ffffffffh
        mov eax, dword ptr [ebp + 20h]
        sub eax, 384h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 138h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 138h], 0
        ; Exact mapped bytes 7D 14: jge 0x58782024
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 138h]
        add ecx, 0e10h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 14: jmp 0x58782038
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 138h]
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
        ; Exact mapped bytes 7C 0B: jl 0x58782074
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        sub edx, 5ah
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x5878207a
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
        mov dword ptr [eax + ecx + 15ch], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 15ch]
        add ecx, 7
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 15ch], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 150h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 154h], 4
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 154h], 14h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 28h]
        mov dword ptr [ecx + 16ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 2ch]
        mov dword ptr [eax + 170h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 140h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 400h], ecx
        push 58h
        ; Exact mapped bytes E8 D6 EE 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 44: je 0x58782182
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 38h], edx
        push 0
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 29 D0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x29
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0fa0h
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 93 46 D0 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x46
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58782189
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 3f4h], eax
        push 1b7h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 29 D0 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x29
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3f0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 3f0h]
        ; Exact mapped bytes E8 CA 37 D0 FF: call 0x58485990
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3f4h]
        mov dword ptr [ebp - 44h], edx
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C3 33 03 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3f4h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 9D 3B D0 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3b
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3f4h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 27 3C D0 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 3f4h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 21 D3 D1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3f4h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9B 3C D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3f4h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D4 D5 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 184h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 19ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3e8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 198h], 0
        push 240h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1a8h
        push eax
        ; Exact mapped bytes E8 5B AB 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 194h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 190h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 188h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 178h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 174h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ech], 48h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 404h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 408h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 410h], 0
        push 20h
        ; Exact mapped bytes E8 B6 EC 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 21: je 0x5878237f
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
        ; Exact mapped bytes E8 15 27 D0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x27
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A6 B6 DE FF: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb6
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58782386
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 60h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [edx + 420h], eax
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
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 134h], 0
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
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
