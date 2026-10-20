// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542D2F .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_00542d2f_00542D2F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 24 E5 5D 00 00: cmp dword ptr [0x5de524], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x542d64
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 0F: jne 0x542d5a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 24 E5 5D 00: mov edx, dword ptr [0x5de524]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + 84h], edx
        ; Exact mapped bytes C7 05 24 E5 5D 00 00 00 00 00: mov dword ptr [0x5de524], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1B: je 0x542d8b
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB 0A: jmp 0x542d95
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 C0 5D 5C 00 00 00 00 00: mov dword ptr [0x5c5dc0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
