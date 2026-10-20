// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832529 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58832529() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 1D EB FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DD FF FF FF: jmp 0x58832515
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
