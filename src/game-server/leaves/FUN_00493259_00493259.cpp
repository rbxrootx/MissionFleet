// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493259 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00493259_00493259() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 58: jne 0x4932c6
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 4F: je 0x4932c6
        __asm _emit 0x74
        __asm _emit 0x4f
        lea edx, [ebp - 4]
        push edx
        push 58d5d0h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7C 31: jl 0x4932c6
        __asm _emit 0x7c
        __asm _emit 0x31
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4932af
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c1h
        push 5ca8a4h
        ; Exact mapped bytes E8 56 17 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4932af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x493295
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 58h
        ; Exact mapped bytes E8 89 2E 0E 00: call 0x57614f
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x4932e3
        __asm _emit 0x75
        __asm _emit 0x14
        push 5caaf4h
        push 5cab24h
        ; Exact mapped bytes E8 37 C9 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 25: jmp 0x493308
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 58h
        ; Exact mapped bytes E8 E9 2E 0E 00: call 0x5761f1
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
