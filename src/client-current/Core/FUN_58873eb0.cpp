// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873EB0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58873eb0() {
    __asm {
        ; Exact mapped bytes 8B 0D 40 60 90 58: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 40 9C 96 58: mov edx, dword ptr [0x58969c40]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        and ecx, 1fh
        ; Exact mapped bytes 33 15 40 60 90 58: xor edx, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ror edx, cl
        test edx, edx
        setne al
        ret
    }
}
