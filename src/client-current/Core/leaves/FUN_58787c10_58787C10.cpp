// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787C10 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58787c10_58787C10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 E3 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe3
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
