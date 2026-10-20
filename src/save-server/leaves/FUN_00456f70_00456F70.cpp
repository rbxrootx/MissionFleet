// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456F70 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00456f70_00456F70() {
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
        ; Exact mapped bytes 74 21: je 0x456fa3
        __asm _emit 0x74
        __asm _emit 0x21
        push 6777b0h
        push 0
        push 1d5h
        push 6776a8h
        push 2
        ; Exact mapped bytes E8 C6 5E 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x456fa3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x456f7a
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
