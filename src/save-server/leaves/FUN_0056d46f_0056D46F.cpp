// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D46F .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_0056d46f_0056D46F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fe04h
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
        push 67d450h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 B1 CD F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xcd
        __asm _emit 0xf6
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
        ; Exact mapped bytes 75 09: jne 0x56d4f7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 3B: jmp 0x56d532
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 8B 8A EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 A7 B8 EE FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb8
        __asm _emit 0xee
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
        ; Exact mapped bytes 74 74: je 0x56d5cd
        __asm _emit 0x74
        __asm _emit 0x74
        push 2c7h
        push 67d450h
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 F4 CC F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 38 C3 68 00: call dword ptr [0x68c338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x56d5a3
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 09: je 0x56d593
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 800401e1h
        ; Exact mapped bytes EB 10: jmp 0x56d5a3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 0C C3 68 00: call dword ptr [0x68c30c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 22: jne 0x56d5cb
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
        ; Exact mapped bytes EB 59: jmp 0x56d626
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
        ; Exact mapped bytes 74 38: je 0x56d626
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 75 16: jne 0x56d60d
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F F2 FF FF: call 0x56c882
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
        ; Exact mapped bytes E8 8D D7 FD FF: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 39: jmp 0x56d661
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5B CB F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xcb
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56d64d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2efh
        push 67d450h
        ; Exact mapped bytes E8 F8 B6 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
