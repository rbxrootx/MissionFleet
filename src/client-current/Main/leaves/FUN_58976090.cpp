// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976090 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_58976090() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        mov eax, dword ptr [ebx + 4]
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], eax
        cmp edi, 3b9ac9f0h
        ; Exact mapped bytes 76 0B: jbe 0x589760b6
        __asm _emit 0x76
        __asm _emit 0x0b
        push 1
        push ebx
        ; Exact mapped bytes E8 0D 01 00 00: call 0x589761c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, edi
        and eax, 7
        ; Exact mapped bytes 76 0D: jbe 0x589760ca
        __asm _emit 0x76
        __asm _emit 0x0d
        mov ecx, 8
        sub ecx, eax
        add edi, ecx
        mov dword ptr [esp + 1ch], edi
        mov esi, dword ptr [esp + 18h]
        test esi, esi
        ; Exact mapped bytes 7C 05: jl 0x589760d7
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp esi, 2
        ; Exact mapped bytes 7C 16: jl 0x589760ed
        __asm _emit 0x7c
        __asm _emit 0x16
        mov edx, dword ptr [ebx]
        push ebx
        mov dword ptr [edx + 14h], 0eh
        mov eax, dword ptr [ebx]
        mov dword ptr [eax + 18h], esi
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov edx, dword ptr [esp + 14h]
        xor ebp, ebp
        mov eax, dword ptr [edx + esi*4 + 34h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58976112
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [eax + 8], edi
        ; Exact mapped bytes 73 0A: jae 0x5897610a
        __asm _emit 0x73
        __asm _emit 0x0a
        mov ebp, eax
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x589760fb
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 08: jmp 0x58976112
        __asm _emit 0xeb
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x589761a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 10h
        test ebp, ebp
        ; Exact mapped bytes 75 09: jne 0x58976122
        __asm _emit 0x75
        __asm _emit 0x09
        mov esi, dword ptr [esi*4 + 589a37b0h]
        ; Exact mapped bytes EB 07: jmp 0x58976129
        __asm _emit 0xeb
        __asm _emit 0x07
        mov esi, dword ptr [esi*4 + 589a37b8h]
        mov eax, 3b9aca00h
        sub eax, edi
        cmp esi, eax
        ; Exact mapped bytes 76 02: jbe 0x58976136
        __asm _emit 0x76
        __asm _emit 0x02
        mov esi, eax
        lea eax, [esi + edi]
        push eax
        push ebx
        ; Exact mapped bytes E8 10 15 00 00: call 0x58977650
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x5897616a
        __asm _emit 0x75
        __asm _emit 0x23
        shr esi, 1
        cmp esi, 32h
        ; Exact mapped bytes 73 0B: jae 0x58976159
        __asm _emit 0x73
        __asm _emit 0x0b
        push 2
        push ebx
        ; Exact mapped bytes E8 6A 00 00 00: call 0x589761c0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea ecx, [esi + edi]
        push ecx
        push ebx
        ; Exact mapped bytes E8 ED 14 00 00: call 0x58977650
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 DD: je 0x58976147
        __asm _emit 0x74
        __asm _emit 0xdd
        mov ecx, dword ptr [esp + 14h]
        lea edx, [esi + edi]
        mov edi, dword ptr [ecx + 4ch]
        add edi, edx
        mov edx, dword ptr [esp + 1ch]
        add esi, edx
        mov dword ptr [ecx + 4ch], edi
        test ebp, ebp
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        mov dword ptr [eax + 8], esi
        ; Exact mapped bytes 75 0A: jne 0x5897619d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + edx*4 + 34h], eax
        ; Exact mapped bytes EB 03: jmp 0x589761a0
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [ebp], eax
        mov edi, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + eax + 10h]
        add ecx, edi
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [eax + 8]
        sub ecx, edi
        pop edi
        pop esi
        mov dword ptr [eax + 8], ecx
        pop ebp
        mov eax, edx
        pop ebx
        ret
    }
}
