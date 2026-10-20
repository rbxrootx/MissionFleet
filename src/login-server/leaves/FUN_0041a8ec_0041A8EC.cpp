// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A8EC .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_0041a8ec_0041A8EC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        lea edi, [eax - 0c8h]
        xor esi, esi
        cmp dword ptr [edi + 0a0h], esi
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x41a9f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 88h], esi
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 32: jne 0x41a949
        __asm _emit 0x75
        __asm _emit 0x32
        lea eax, [ebp - 38h]
        mov ecx, edi
        push eax
        mov dword ptr [ebp - 38h], 2
        mov dword ptr [ebp - 34h], ebx
        mov dword ptr [ebp - 30h], esi
        mov dword ptr [ebp - 2ch], esi
        mov dword ptr [ebp - 28h], esi
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 18h], esi
        ; Exact mapped bytes E8 33 F2 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        cmp eax, esi
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x41a9fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 94h], ebx
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x41a9f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 0a8h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4ch]
        lea edx, [ebp + 8]
        mov dword ptr [ebp + 8], esi
        push edx
        mov ecx, dword ptr [eax]
        push 4401f8h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 7F: jl 0x41a9f9
        __asm _emit 0x7c
        __asm _emit 0x7f
        push 20h
        lea eax, [ebp - 34h]
        push esi
        push eax
        ; Exact mapped bytes E8 5A 41 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        lea eax, [ebp - 14h]
        push esi
        push eax
        ; Exact mapped bytes E8 4E 41 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        lea ecx, [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 34h]
        push ecx
        lea ecx, [edi + 0a8h]
        mov edx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 14h]
        push ecx
        push 2
        push esi
        push 440448h
        push ebx
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp dword ptr [ebp - 30h], esi
        ; Exact mapped bytes 8B 1D 44 C3 43 00: mov ebx, dword ptr [0x43c344]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 05: je 0x41a9cd
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp - 30h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp - 2ch], esi
        ; Exact mapped bytes 74 05: je 0x41a9d7
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp dword ptr [ebp - 28h], esi
        ; Exact mapped bytes 74 05: je 0x41a9e1
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp - 28h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 7C 0A: jl 0x41a9f9
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [edi + 0a4h], 1
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
