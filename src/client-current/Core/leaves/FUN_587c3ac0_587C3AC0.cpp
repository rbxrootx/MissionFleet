// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3AC0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_587c3ac0_587C3AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be414h
        ; Exact mapped bytes 8B 0D 34 5F 96 58: mov ecx, dword ptr [0x58965f34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        sub ecx, 1
        ; Exact mapped bytes 89 0D 34 5F 96 58: mov dword ptr [0x58965f34], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ret
    }
}
