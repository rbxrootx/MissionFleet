// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481B10 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_00481b10_00481B10() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
