// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E741 .. +0x9 bytes.
extern "C" __declspec(naked) void __NLG_Notify1_0041E741() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 68 A8 44 00: mov ebx, 0x44a868
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x41e754
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}
