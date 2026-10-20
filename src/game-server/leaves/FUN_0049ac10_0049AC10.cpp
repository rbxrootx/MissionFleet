// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049AC10 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0049ac10_0049AC10() {
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
        ; Exact mapped bytes 75 21: jne 0x49ac43
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cb030h
        push 0
        push 1dah
        push 5caf20h
        push 2
        ; Exact mapped bytes E8 F6 5E 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49ac43
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x49ac1a
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
