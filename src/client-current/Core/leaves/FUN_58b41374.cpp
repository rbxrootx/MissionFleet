// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B41374 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58b41374() {
    __asm {
        ; Exact mapped bytes 66 01 11: add word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x11
        ; Exact mapped bytes A8 3C: test al, 0x3c
        __asm _emit 0xa8
        __asm _emit 0x3c
        ; Exact mapped bytes 3B E5: cmp esp, ebp
        __asm _emit 0x3b
        __asm _emit 0xe5
    }
}
