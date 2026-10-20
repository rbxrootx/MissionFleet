// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506F90 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58506f90_58506F90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3d44h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 2E 00 00: call 0x58509e30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F FF FF FF: call 0x58506f50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
