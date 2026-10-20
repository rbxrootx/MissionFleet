// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10018BB0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_10018bb0_10018BB0() {
    __asm {
        push -1
        push 1016d5f8h
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
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 10h], edi
        mov dword ptr [edi], 10175548h
        xor ebp, ebp
        lea esi, [edi + 0bch]
        mov dword ptr [esp + 1ch], ebp
        mov ebx, 0ah
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10018bf5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10018be7
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10018c11
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0b0h], ebp
        mov ecx, dword ptr [edi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10018c27
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0a0h], ebp
        mov eax, dword ptr [edi + 80h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x10018c40
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 4D 3B 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 80h], ebp
        mov ecx, dword ptr [edi + 0ach]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10018c56
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0ach], ebp
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 6B 9B 0E 00: call 0x101027d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
