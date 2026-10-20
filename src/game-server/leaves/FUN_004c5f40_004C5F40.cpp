// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C5F40 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004c5f40_004C5F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes A1 80 ED 5D 00: mov eax, dword ptr [0x5ded80]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x4c5fe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push -1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        push 0
        push 1
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4c5f82
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 68: jmp 0x4c5fea
        __asm _emit 0xeb
        __asm _emit 0x68
        push 3dh
        push 58d558h
        push 2
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 9C 42 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 05: jne 0x4c5fa5
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 45: jmp 0x4c5fea
        __asm _emit 0xeb
        __asm _emit 0x45
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push -1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        push 1
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4c5fcc
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1E: jmp 0x4c5fea
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 69 15 00 00: call 0x4c7540
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x4c5f4e
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
