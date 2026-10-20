// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004357C9 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_004357c9_004357C9() {
    __asm {
        ; Exact mapped bytes E8 E5 04 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 30: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x30
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
