// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850710 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_58850710() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes BB 00 73 90 58: mov ebx, 0x58907300
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E9 0F 00 00 00: jmp 0x5885072b
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
