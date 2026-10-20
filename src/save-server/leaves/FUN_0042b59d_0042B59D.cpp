// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B59D .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0042b59d_0042B59D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        push 10h
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F5 A2 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 F0 02 00: mov word ptr [ebp - 0x10], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 4C C1 68 00: call dword ptr [0x68c14c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 09 98 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 5B: jne 0x42b64b
        __asm _emit 0x75
        __asm _emit 0x5b
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 48 C1 68 00: call dword ptr [0x68c148]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 ED 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 27: je 0x42b633
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov esi, esp
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        ; Exact mapped bytes FF 15 88 C1 68 00: call dword ptr [0x68c188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes EB 18: jmp 0x42b64b
        __asm _emit 0xeb
        __asm _emit 0x18
        mov esi, esp
        push 2726h
        ; Exact mapped bytes FF 15 50 C1 68 00: call dword ptr [0x68c150]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 0E: jmp 0x42b659
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 10h
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 11 00 00 00: call 0x42b66a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 8C 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
