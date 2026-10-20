// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00498F10 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00498f10_00498F10() {
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
        ; Exact mapped bytes 74 21: je 0x498f44
        __asm _emit 0x74
        __asm _emit 0x21
        push 5caebch
        push 0
        push 330h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 F5 7B 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x498f44
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x498f1a
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 21: je 0x498f73
        __asm _emit 0x74
        __asm _emit 0x21
        push 5caea4h
        push 0
        push 331h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 C6 7B 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x498f73
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x498f4a
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
