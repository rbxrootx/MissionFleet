// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005561D4 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_005561d4_005561D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 58fh
        push 5cfa08h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 6D 4F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556210
        __asm _emit 0x75
        __asm _emit 0x14
        push 590h
        push 5cfa08h
        ; Exact mapped bytes E8 F5 E7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556210
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5561f3
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58eae8h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 5F 5C FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 19: jne 0x556249
        __asm _emit 0x75
        __asm _emit 0x19
        push 5cfb3ch
        push 5cfb74h
        ; Exact mapped bytes E8 D6 99 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x556314
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x556263
        __asm _emit 0x75
        __asm _emit 0x14
        push 599h
        push 5cfa08h
        ; Exact mapped bytes E8 A2 E7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556263
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x556249
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 66 C7 45 E4 03 00: mov word ptr [ebp - 0x1c], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 4
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 0ch], 20h
        lea eax, [ebp - 4]
        push eax
        push 7
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 10: jge 0x5562ba
        __asm _emit 0x7d
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x556314
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x556303
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 2ch], 20h
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], 0
        push 0
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 10: jge 0x556303
        __asm _emit 0x7d
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x556314
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
