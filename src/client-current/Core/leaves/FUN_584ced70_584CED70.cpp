// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CED70 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584ced70_584CED70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 100h
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 89 E0 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
