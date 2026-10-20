// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004652DD .. +0x9 bytes.
extern "C" __declspec(naked) void __NLG_Notify1_004652DD() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 1C DA 67 00: mov ebx, 0x67da1c
        __asm _emit 0xbb
        __asm _emit 0x1c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4652f0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}
