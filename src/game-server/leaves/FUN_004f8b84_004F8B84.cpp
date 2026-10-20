// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8B84 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_004f8b84_004F8B84() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 2e2h
        push 5c5b58h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BD 25 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 10: je 0x4f8bbc
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 0A: jne 0x4f8bc6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x4f8c83
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 18h], 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        push -1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 23: jne 0x4f8c16
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 14: je 0x4f8c10
        __asm _emit 0x74
        __asm _emit 0x14
        push 2eah
        push 5c5b58h
        ; Exact mapped bytes E8 F5 BD 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8c10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f8bf3
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 64: je 0x4f8c80
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 75 5B: jne 0x4f8c80
        __asm _emit 0x75
        __asm _emit 0x5b
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 78 E8 5D 00: mov ecx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x4f8c72
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f8c72
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5c5bf0h
        ; Exact mapped bytes E8 A6 6F FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
