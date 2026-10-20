// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004191E7 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_004191e7_004191E7() {
    __asm {
        mov eax, 43add0h
        ; Exact mapped bytes E8 17 64 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 70h
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 10h], ebx
        mov eax, dword ptr [esi + 4ch]
        push edx
        push 4403c8h
        push eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C 5E 01 00 00: jl 0x419377
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0b8h]
        push edi
        mov dword ptr [ebp - 78h], eax
        lea eax, [esi + 0c8h]
        mov dword ptr [ebp - 70h], eax
        lea eax, [esi + 0cch]
        mov dword ptr [ebp - 6ch], eax
        lea eax, [ebp - 24h]
        push eax
        mov dword ptr [ebp - 7ch], 40h
        mov dword ptr [ebp - 74h], ebx
        mov dword ptr [ebp - 58h], ebx
        mov dword ptr [ebp - 4ch], ebx
        mov dword ptr [ebp - 48h], ebx
        ; Exact mapped bytes E8 B9 E7 FF FF: call 0x417a0a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 4], ebx
        mov edi, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 68h], ebx
        mov ebx, 43ece4h
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, edi
        push dword ptr [ebx - 4]
        push esi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D E4 00: cmp word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x419280
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebx]
        or dword ptr [ebp - 68h], eax
        add ebx, 8
        cmp ebx, 43ed24h
        ; Exact mapped bytes 72 D7: jb 0x419262
        __asm _emit 0x72
        __asm _emit 0xd7
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 24h]
        push ecx
        push 0fffffd40h
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [edi]
        push ecx
        push 0fffffd43h
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [edi]
        push ecx
        push 0fffffd34h
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [edi]
        push ecx
        push 0fffffd3fh
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [edi]
        push ecx
        push 0fffffd41h
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        lea edx, [ebp - 5ch]
        push edx
        push 4403b8h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        pop edi
        ; Exact mapped bytes 7D 04: jge 0x419322
        __asm _emit 0x7d
        __asm _emit 0x04
        and dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 10h]
        lea edx, [ebp - 3ch]
        push edx
        lea edx, [ebp - 7ch]
        mov dword ptr [ebp - 3ch], 18h
        mov ecx, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7C 19: jl 0x419357
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], 1
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [esi + 60h], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [esi + 64h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 5ch]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x41936d
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
