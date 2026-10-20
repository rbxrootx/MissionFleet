// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780B60 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58780b60_58780B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 64h
        ; Exact mapped bytes 75 1C: jne 0x58780b8e
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 79 66 D5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x66
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 36h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 81 D5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x81
        __asm _emit 0xd5
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58780b93
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
