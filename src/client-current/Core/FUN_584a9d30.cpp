// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9D30 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_584a9d30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 07 00 00: call 0x584aa4e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 FE FF FF: call 0x584a9bf0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
