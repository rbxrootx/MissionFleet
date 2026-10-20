// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8030 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_584c8030_584C8030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 58895de0h
        push 58895d0ch
        ; Exact mapped bytes FF 15 DC 44 89 58: call dword ptr [0x588944dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x584c8059
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x584c8069
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        push 0
        push 12h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 E0 44 89 58: call dword ptr [0x588944e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ret
    }
}
