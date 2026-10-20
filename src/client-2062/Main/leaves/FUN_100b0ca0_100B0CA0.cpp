// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0CA0 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_100b0ca0_100B0CA0() {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        xor esi, esi
        lea ebp, [ebx + 0e4h]
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [esp + 18h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 74 40: je 0x100b0d00
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edx + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 27: jl 0x100b0cfc
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 1E: jge 0x100b0cfc
        __asm _emit 0x7d
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 09: jl 0x100b0cfc
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 13: jl 0x100b0d0f
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ebx, dword ptr [esp + 10h]
        inc esi
        add ebp, 4
        cmp esi, 20h
        ; Exact mapped bytes 0F 8D CD 00 00 00: jge 0x100b0dda
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x100b0cb3
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [ebx + esi*4 + 0e4h]
        mov ecx, dword ptr [eax + 60h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x100b0dda
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 58h]
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push eax
        mov ecx, dword ptr [ecx + 0d0ch]
        push edi
        ; Exact mapped bytes E8 73 0E 04 00: call 0x100f1bb0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x100b0da9
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebx + esi*4 + 0e4h]
        mov eax, dword ptr [edx + 4]
        sub eax, 1eh
        mov ecx, dword ptr [edx + 8]
        sub ecx, 37h
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 73 DF 04 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 EA 7B F7 FF: call 0x10028950
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov ecx, dword ptr [eax + 0d0ch]
        mov eax, dword ptr [ebx + esi*4 + 0e4h]
        mov edx, dword ptr [ecx + 48h]
        mov ebp, dword ptr [eax + 58h]
        mov ecx, dword ptr [edi + 50h]
        shr edx, 0ah
        and edx, 0ffffh
        shl edx, 10h
        or edx, ebp
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 80011035h
        ; Exact mapped bytes E8 A9 B1 0B 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x100b0dda
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 0ah
        ; Exact mapped bytes E8 F4 CC F6 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100b0dce
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 D6 FC FA FF: call 0x10060ab0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [edi + 0e8h], -1
        ; Exact mapped bytes 74 58: je 0x100b0e3b
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebx + 88h]
        ; Exact mapped bytes 8B 35 D4 92 1C 10: mov esi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [esi + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 3D: jl 0x100b0e3b
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 34: jge 0x100b0e3b
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C 25: jl 0x100b0e3b
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 1C: jge 0x100b0e3b
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [edi + 50h]
        push 0
        push 0
        push 0
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 80011035h
        ; Exact mapped bytes E8 15 B1 0B 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
