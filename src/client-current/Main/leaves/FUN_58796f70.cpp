// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796F70 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58796f70() {
    __asm {
        ; Exact mapped bytes C7 01 64 80 99 58: mov dword ptr [ecx], 0x58998064
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x64
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E9 E5 BD 16 00: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xbd
        __asm _emit 0x16
        __asm _emit 0x00
    }
}
