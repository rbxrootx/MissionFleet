// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474A30 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_00474a30_00474A30() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 4C 02 68 00: mov eax, dword ptr [0x68024c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
