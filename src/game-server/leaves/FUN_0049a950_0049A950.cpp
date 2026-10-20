// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A950 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0049a950_0049A950() {
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
        ; Exact mapped bytes 74 21: je 0x49a983
        __asm _emit 0x74
        __asm _emit 0x21
        push 5cb028h
        push 0
        push 1d5h
        push 5caf20h
        push 2
        ; Exact mapped bytes E8 B6 61 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49a983
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x49a95a
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
