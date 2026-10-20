// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056756F .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_0056756f_0056756F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580324h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 28h], eax
        push 2b9h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 B1 3B F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx], 0
        mov dword ptr [ebp - 1ch], 800401e5h
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x5675f7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 3B: jmp 0x567632
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 AB 21 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 87 51 F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 74: je 0x5676cd
        __asm _emit 0x74
        __asm _emit 0x74
        push 2c7h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 F4 3A F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 D0 29 5E 00: call dword ptr [0x5e29d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5676a3
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 09: je 0x567693
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 800401e1h
        ; Exact mapped bytes EB 10: jmp 0x5676a3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 78 2A 5E 00: call dword ptr [0x5e2a78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 22: jne 0x5676cb
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 59: jmp 0x567726
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 38: je 0x567726
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 75 16: jne 0x56770d
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F F2 FF FF: call 0x566982
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx + 28h], 1
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1D 4C FE FF: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 39: jmp 0x567761
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5B 39 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x39
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56774d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2efh
        push 5d0c78h
        ; Exact mapped bytes E8 B8 D2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
    }
}
