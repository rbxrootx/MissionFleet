// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004570A0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_004570a0_004570A0() {
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
        ; Exact mapped bytes 75 21: jne 0x4570d3
        __asm _emit 0x75
        __asm _emit 0x21
        push 6777b8h
        push 0
        push 1dah
        push 6776a8h
        push 2
        ; Exact mapped bytes E8 96 5D 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4570d3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4570aa
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
