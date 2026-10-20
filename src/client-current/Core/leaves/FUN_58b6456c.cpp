// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B6456C .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58b6456c() {
    __asm {
        ; Exact mapped bytes 8B E2: mov esp, edx
        __asm _emit 0x8b
        __asm _emit 0xe2
        ; Exact mapped bytes E9 8A 30 FF FF: jmp 0x58b575fd
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
