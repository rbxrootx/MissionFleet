// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F87E .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0044f87e_0044F87E() {
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
        ; Exact mapped bytes 75 58: jne 0x44f8eb
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 4F: je 0x44f8eb
        __asm _emit 0x74
        __asm _emit 0x4f
        lea edx, [ebp - 4]
        push edx
        push 63fc30h
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
        ; Exact mapped bytes 7C 31: jl 0x44f8eb
        __asm _emit 0x7c
        __asm _emit 0x31
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44f8d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c1h
        push 67702ch
        ; Exact mapped bytes E8 71 94 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44f8d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44f8ba
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 58h
        ; Exact mapped bytes E8 44 2F 13 00: call 0x58282f
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x44f908
        __asm _emit 0x75
        __asm _emit 0x14
        push 67727ch
        push 6772ach
        ; Exact mapped bytes E8 12 0D 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 25: jmp 0x44f92d
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
        ; Exact mapped bytes E8 A4 2F 13 00: call 0x5828d1
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2f
        __asm _emit 0x13
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
