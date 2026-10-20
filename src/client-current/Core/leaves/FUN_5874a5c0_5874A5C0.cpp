// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874A5C0 .. +0x2EF bytes.
extern "C" __declspec(naked) void FUN_5874a5c0_5874A5C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f6b2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 84h
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
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 74h], 2
        ; Exact mapped bytes 0F 85 9A 02 00 00: jne 0x5874a89a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 204h], 3
        ; Exact mapped bytes 0F 8C 8A 02 00 00: jl 0x5874a89a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov esi, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 4E 66 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x66
        __asm _emit 0x10
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5874a62a
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        lea eax, [eax + esi*2 + 3ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20ch], eax
        push 78h
        ; Exact mapped bytes E8 C6 69 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 78: je 0x5874a6c9
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 214h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 07 96 58: mov ecx, dword ptr [0x58960724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 A4 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa4
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B C3 D3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], ecx
        push 176fh
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EC 21 D8 FF: call 0x584cc8b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874a6d0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 50h], eax
        push 78h
        push 5
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 23ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        nop
        push 60h
        ; Exact mapped bytes E8 DC 68 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 7A: je 0x5874a7b5
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 21ch]
        push edx
        ; Exact mapped bytes 8B 0D 24 07 96 58: mov ecx, dword ptr [0x58960724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F A3 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa3
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 C2 D3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20ch]
        mov dword ptr [ebp - 64h], ecx
        ; Exact mapped bytes 8B 15 10 07 96 58: mov edx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], edx
        push -1
        push 1770h
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 50 2E E2 FF: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874a7bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 8ch], ecx
        push 60h
        ; Exact mapped bytes E8 2B 68 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5874a870
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 218h]
        push ecx
        ; Exact mapped bytes 8B 0D 24 07 96 58: mov ecx, dword ptr [0x58960724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA A2 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC C1 D3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes 8B 0D 10 07 96 58: mov ecx, dword ptr [0x58960710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], ecx
        push -1
        push 1771h
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 95 2D E2 FF: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5874a877
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 30h], 1
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
