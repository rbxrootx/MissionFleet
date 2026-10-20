// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552596 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_00552596_00552596() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f45ch
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
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 1feh
        push 67c1e0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 96 7C F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x5525e7
        __asm _emit 0x74
        __asm _emit 0x14
        push 1ffh
        push 67c1e0h
        ; Exact mapped bytes E8 5E 67 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5525e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5525ca
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x55260a
        __asm _emit 0x75
        __asm _emit 0x14
        push 200h
        push 67c1e0h
        ; Exact mapped bytes E8 3B 67 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55260a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5525ed
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x55263b
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 43 0E F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55263b
        __asm _emit 0x75
        __asm _emit 0x14
        push 202h
        push 67c1e0h
        ; Exact mapped bytes E8 0A 67 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55263b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x552610
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 37 73 01 00: call 0x569980
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 21 7D 01 00: call 0x56a379
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x552677
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 B6 43 00 00: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 47: jmp 0x5526be
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E4 02 00 00: call 0x552974
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 20bh
        push 67c1e0h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 BA 7B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6D 43 00 00: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
