// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C5F0 .. +0x1D3 bytes.
extern "C" __declspec(naked) void FUN_5896c5f0() {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 3ch], -1
        ; Exact mapped bytes 75 09: jne 0x5896c605
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 75 0A: jne 0x5896c619
        __asm _emit 0x75
        __asm _emit 0x0a
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        lea edx, [esp + 10h]
        mov dword ptr [esi + 20h], ebx
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x5896c644
        __asm _emit 0x7c
        __asm _emit 0x12
        test byte ptr [esp + 10h], 1
        ; Exact mapped bytes 74 0B: je 0x5896c644
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 48h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 18h]
        push ebp
        push ebp
        push ebp
        lea edx, [esp + 28h]
        push edx
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esi + 14h]
        push edx
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 34h], ebp
        mov ecx, dword ptr [eax]
        push ebp
        push eax
        mov eax, dword ptr [ecx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7D 0B: jge 0x5896c678
        __asm _emit 0x7d
        __asm _emit 0x0b
        pop ebx
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [esi + 34h]
        push edi
        mov edi, dword ptr [esp + 20h]
        sub eax, ecx
        cmp eax, edi
        ; Exact mapped bytes 77 02: ja 0x5896c68b
        __asm _emit 0x77
        __asm _emit 0x02
        mov edi, eax
        push ebp
        push ebp
        ; Exact mapped bytes 8B 2D 64 C1 98 58: mov ebp, dword ptr [0x5898c164]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 3ch]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 3ch]
        push 0
        lea edx, [esp + 1ch]
        push edx
        push edi
        push eax
        push ecx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x5896c7b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [esp + 20h]
        lea edx, [ecx + edi]
        mov dword ptr [esi + 38h], edx
        cmp edi, eax
        ; Exact mapped bytes 73 1F: jae 0x5896c6e9
        __asm _emit 0x73
        __asm _emit 0x1f
        test ebx, ebx
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5896c767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        push eax
        mov eax, dword ptr [esp + 14h]
        add edi, eax
        push ebx
        push edi
        ; Exact mapped bytes E8 66 05 01 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        add esp, 0ch
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [ecx]
        push 0
        push 0
        push eax
        mov eax, dword ptr [esp + 1ch]
        push eax
        push ecx
        mov ecx, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 24h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 34h]
        push 0
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 30h]
        push 1
        push 0
        push 0
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5896c73f
        __asm _emit 0x74
        __asm _emit 0x13
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 28h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea ecx, [esi + 24h]
        push ecx
        push 0
        push esi
        push 5896c540h
        push 0
        push 0
        ; Exact mapped bytes FF 15 30 C1 98 58: call dword ptr [0x5898c130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        pop ebx
        mov dword ptr [esi + 28h], eax
        pop ebp
        mov eax, 1
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 34h]
        sub eax, edi
        sub edx, ecx
        mov ebx, eax
        cmp edx, eax
        ; Exact mapped bytes 77 02: ja 0x5896c776
        __asm _emit 0x77
        __asm _emit 0x02
        mov ebx, edx
        push 0
        push 0
        push ecx
        mov ecx, dword ptr [esi + 3ch]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 10h]
        push 0
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esi + 3ch]
        push ebx
        lea ecx, [edi + eax]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5896c7b7
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 30h]
        lea eax, [ecx + ebx]
        mov dword ptr [esi + 38h], eax
        mov eax, dword ptr [esp + 20h]
        add edi, ebx
        cmp edi, eax
        ; Exact mapped bytes 72 B5: jb 0x5896c767
        __asm _emit 0x72
        __asm _emit 0xb5
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x5896c6e9
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
