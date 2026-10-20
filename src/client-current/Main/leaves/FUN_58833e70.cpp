// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833E70 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_58833e70() {
    __asm {
        sub esp, 3ch
        push esi
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 5899e1a0h
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 23: jne 0x58833ebb
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 246h
        ; Exact mapped bytes E8 48 7C F3 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 0E F3 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop esi
        add esp, 3ch
        ret
        push ebx
        push ebp
        push 0
        push esi
        ; Exact mapped bytes FF 15 8C C1 98 58: call dword ptr [0x5898c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ebp, eax
        push ebp
        ; Exact mapped bytes E8 60 D6 13 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        cmp ebp, 7d0h
        ; Exact mapped bytes 76 25: jbe 0x58833f00
        __asm _emit 0x76
        __asm _emit 0x25
        push 0
        push 0
        push 0
        push 249h
        ; Exact mapped bytes E8 05 7C F3 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 0E F3 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0xf3
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop ebp
        pop ebx
        pop esi
        add esp, 3ch
        ret
        push edi
        push 0
        lea eax, [esp + 14h]
        push eax
        push ebp
        push ebx
        push esi
        ; Exact mapped bytes FF 15 90 C1 98 58: call dword ptr [0x5898c190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ebx + 4]
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes 66 8B 4B 0C: mov cx, word ptr [ebx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 4C 24 20: mov word ptr [esp + 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        mov dword ptr [esp + 18h], edx
        lea esi, [ebx + 0eh]
        mov ecx, 0ah
        lea edi, [esp + 24h]
        mov edx, 4d42h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [esp + 1ch], eax
        pop edi
        ; Exact mapped bytes 66 39 54 24 10: cmp word ptr [esp + 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 74 1E: je 0x58833f6e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 248h
        ; Exact mapped bytes E8 90 7B F3 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C9 0D F3 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        pop ebp
        pop ebx
        pop esi
        add esp, 3ch
        ret
        mov eax, 14h
        cmp dword ptr [esp + 28h], eax
        ; Exact mapped bytes 75 22: jne 0x58833f9b
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [esp + 24h], eax
        ; Exact mapped bytes 75 1C: jne 0x58833f9b
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 7C 24 2E 18: cmp word ptr [esp + 0x2e], 0x18
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x2e
        __asm _emit 0x18
        ; Exact mapped bytes 75 C9: jne 0x58833f50
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push ebx
        ; Exact mapped bytes E8 4C 55 F8 FF: call 0x587b94e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        pop ebp
        pop ebx
        pop esi
        add esp, 3ch
        ret
        push 0
        push 0
        push 0
        push 247h
        ; Exact mapped bytes E8 45 7B F3 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E 0D F3 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        pop ebp
        pop ebx
        pop esi
        add esp, 3ch
        ret
    }
}
