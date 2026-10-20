// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455530 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00455530_00455530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 21: je 0x455564
        __asm _emit 0x74
        __asm _emit 0x21
        push 677644h
        push 0
        push 32fh
        push 677614h
        push 2
        ; Exact mapped bytes E8 05 79 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455564
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x45553a
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 21: je 0x455593
        __asm _emit 0x74
        __asm _emit 0x21
        push 67762ch
        push 0
        push 330h
        push 677614h
        push 2
        ; Exact mapped bytes E8 D6 78 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455593
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x45556a
        __asm _emit 0x75
        __asm _emit 0xd1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
