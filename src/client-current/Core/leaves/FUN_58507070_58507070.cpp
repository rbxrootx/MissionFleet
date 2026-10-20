// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507070 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58507070_58507070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3de0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 2E 00 00: call 0x58509f40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 02 00 00: call 0x585072b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
