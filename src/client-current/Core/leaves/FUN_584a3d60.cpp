// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3D60 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_584a3d60() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 66 66 66 06: mov eax, 0x6666666
        __asm _emit 0xb8
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x06
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
