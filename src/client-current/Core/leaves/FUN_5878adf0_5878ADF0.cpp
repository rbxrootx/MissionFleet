// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878ADF0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5878adf0_5878ADF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 400h
        push 400h
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 A8 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
