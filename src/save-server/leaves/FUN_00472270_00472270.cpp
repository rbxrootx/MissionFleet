// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472270 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_00472270_00472270() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 38 74 68 00: mov eax, dword ptr [0x687438]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
