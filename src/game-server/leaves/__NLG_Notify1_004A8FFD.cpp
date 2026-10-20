// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8FFD .. +0x9 bytes.
extern "C" __declspec(naked) void __NLG_Notify1_004A8FFD() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 44 12 5D 00: mov ebx, 0x5d1244
        __asm _emit 0xbb
        __asm _emit 0x44
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4a9010
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}
