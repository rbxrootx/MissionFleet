// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6788 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004b6788_004B6788() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b67b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cah
        push 677e8ch
        ; Exact mapped bytes E8 8C 25 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b67b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b6794
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b67d9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 677e8ch
        ; Exact mapped bytes E8 6C 25 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b67d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b67bf
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4b67f9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cch
        push 677e8ch
        ; Exact mapped bytes E8 4C 25 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b67f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4b67df
        __asm _emit 0x75
        __asm _emit 0xe0
        push 38h
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 B4 F0 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 4D 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 38h]
        push edx
        push 0
        push 40ah
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4b6862
        __asm _emit 0x74
        __asm _emit 0x19
        push 28h
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 A8 EA FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4b6864
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
