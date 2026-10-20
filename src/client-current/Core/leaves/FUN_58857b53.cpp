// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857B53 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58857b53() {
    __asm {
        ; Exact mapped bytes A1 04 96 96 58: mov eax, dword ptr [0x58969604]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
