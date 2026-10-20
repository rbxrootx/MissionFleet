// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F6B0 .. +0x561 bytes.
extern "C" __declspec(naked) void FUN_5875f6b0_5875F6B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x5875f859
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 79 34 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x34
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 7C 6D: jl 0x5875f766
        __asm _emit 0x7c
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4F 34 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x34
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 34 34 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x34
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [edx]
        xor ecx, 55h
        and ecx, 3ffh
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        and edx, 0fffffc00h
        or edx, ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x5875f7ff
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E2 33 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        sub edx, eax
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 A2 33 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 7A 33 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        and edx, 0fffffc00h
        or edx, 55h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 49 33 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x33
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 5F 2A D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2a
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 14h]
        and eax, 3ffh
        and eax, 3ffh
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        and edx, 0fffffc00h
        or edx, eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x5875fa51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 CA D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xca
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 10h]
        sub eax, dword ptr [ecx]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 2B C4 D2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc4
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx]
        lea ecx, [ecx + ecx + 1]
        xor edx, edx
        div ecx
        mov dword ptr [ebp - 0ch], edx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7C 0A: jl 0x5875f8a9
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 13: jmp 0x5875f8bc
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8C 32 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7C 6E: jl 0x5875f955
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 61 32 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 47 32 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        sub eax, dword ptr [ebp - 0ch]
        xor eax, 55h
        and eax, 3ffh
        shl eax, 0ah
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        and edx, 0fff003ffh
        or edx, eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5875f9e3
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F3 31 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, eax
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C2 31 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 97 31 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        and eax, 0fff003ffh
        or eax, 15400h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 65 31 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 71 28 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x28
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        and ecx, 3ffh
        shl ecx, 0ah
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        and eax, 0fff003ffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x5875fbe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E7 30 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 7F: jl 0x5875fb0c
        __asm _emit 0x7c
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 B5 30 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 91 30 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        sub ecx, dword ptr [ebp - 8]
        xor ecx, 55h
        and ecx, 3ffh
        shl ecx, 14h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        and eax, 0c00fffffh
        or eax, ecx
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 6A: jmp 0x5875fb76
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 36 30 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 34ch
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 06 30 D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        and edx, 0c00fffffh
        or edx, 5500000h
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CC 2F D4 FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 D9 26 D6 FF: call 0x584c2290
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx + 14h]
        shr eax, 14h
        and eax, 3ffh
        and eax, 3ffh
        shl eax, 14h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        and edx, 0c00fffffh
        or edx, eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 6D D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6d
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 10: jne 0x5875fc08
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 DF 00 00: call 0x5876db60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
