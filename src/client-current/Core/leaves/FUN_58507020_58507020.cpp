// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507020 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58507020_58507020() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3c38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 2E 00 00: call 0x58509ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 02 00 00: call 0x58507290
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
