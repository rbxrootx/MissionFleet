// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049ACB0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0049acb0_0049ACB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 21: je 0x49ace3
        __asm _emit 0x74
        __asm _emit 0x21
        push 5cb028h
        push 0
        push 1d5h
        push 5caf20h
        push 2
        ; Exact mapped bytes E8 56 5E 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49ace3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x49acba
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
