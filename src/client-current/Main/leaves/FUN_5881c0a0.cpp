// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881C0A0 .. +0x333 bytes.
extern "C" __declspec(naked) void FUN_5881c0a0() {
    __asm {
        sub esp, 20ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 208h], eax
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ach]
        push edi
        test eax, eax
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x5881c213
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov edx, dword ptr [eax + 80h]
        xor eax, eax
        mov cl, byte ptr [eax + edx]
        cmp cl, 30h
        ; Exact mapped bytes 0F 8C 8F 00 00 00: jl 0x5881c16e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 39h
        ; Exact mapped bytes 0F 8F 86 00 00 00: jg 0x5881c16e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 7C E5: jl 0x5881c0d3
        __asm _emit 0x7c
        __asm _emit 0xe5
        push edx
        ; Exact mapped bytes E8 A4 0D 16 00: call 0x5897ce98
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        add esp, 4
        cmp dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5881c1d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899d97ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 9ch]
        add esp, 4
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 41 32 F4 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x32
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 9ch]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 10h]
        push eax
        push edi
        add ebx, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [ebx]
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 104h
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 7E 71 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x5881c3b8
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899d97ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 9ch]
        add esp, 4
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 D6 31 F4 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 9ch]
        mov ebp, dword ptr [ecx + 50h]
        mov ebx, dword ptr [ebp]
        lea edx, [esp + 10h]
        push edx
        push edi
        add ebx, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [ebx]
        push edi
        mov ecx, ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 104h
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 13 71 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes E9 DF 01 00 00: jmp 0x5881c3b8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [esi + 0b0h], 0
        ; Exact mapped bytes 0F 85 CB 01 00 00: jne 0x5881c3ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0db4h]
        mov ecx, dword ptr [edx + 0c0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 63h
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x5881c3ba
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x5881c3ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ebp, dword ptr [eax + 80h]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 80h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [esp + 10h], edx
        test eax, eax
        ; Exact mapped bytes 0F 8C 53 01 00 00: jl 0x5881c390
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        dec eax
        push eax
        push 5899d950h
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 3D C4 C3 98 58: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        ; Exact mapped bytes E8 EA 30 F4 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 94h]
        imul ecx, ecx, 19h
        mov eax, 51eb851fh
        mul ecx
        shr edx, 3
        push edx
        lea edx, [esp + 1ch]
        push 5898d18ch
        push edx
        mov dword ptr [esi + 0b4h], ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 84h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 31 5A F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x5a
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E8 82 09 16 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x16
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov ecx, dword ptr [esi + 6ch]
        push edx
        ; Exact mapped bytes E8 9B B0 0E 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C 09 16 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x16
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 85 B0 0E 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov cl, byte ptr [eax + ebp]
        cmp cl, 30h
        ; Exact mapped bytes 7C 34: jl 0x5881c31c
        __asm _emit 0x7c
        __asm _emit 0x34
        cmp cl, 39h
        ; Exact mapped bytes 7F 2F: jg 0x5881c31c
        __asm _emit 0x7f
        __asm _emit 0x2f
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 7C ED: jl 0x5881c2e0
        __asm _emit 0x7c
        __asm _emit 0xed
        push ebp
        ; Exact mapped bytes E8 9F 0B 16 00: call 0x5897ce98
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 D3 FE FF FF: je 0x5881c1d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 5899d97ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 06 FA FF FF: call 0x5881bd20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5B: jmp 0x5881c377
        __asm _emit 0xeb
        __asm _emit 0x5b
        push 5899d97ch
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 9ch]
        add esp, 4
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 2C 30 F4 FF: call 0x5875f360
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [esi + 9ch]
        mov ebp, dword ptr [edx + 50h]
        mov ebx, dword ptr [ebp]
        lea eax, [esp + 10h]
        push eax
        push edi
        add ebx, 4
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [ebx]
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 104h
        push ecx
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 69 6F 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [esi + 80h], 0
        mov ecx, esi
        ; Exact mapped bytes 7C 07: jl 0x5881c389
        __asm _emit 0x7c
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 2F: jmp 0x5881c3b8
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes E8 12 FD FF FF: call 0x5881c0a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x5881c3ba
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [esi + 0b0h], 0
        ; Exact mapped bytes 75 18: jne 0x5881c3ba
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db4h]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 218h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 0E 08 16 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 20ch
        ret
    }
}
