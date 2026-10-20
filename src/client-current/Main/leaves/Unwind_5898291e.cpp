// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898291E .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898291e() {
    __asm {
        ; Exact mapped bytes 8B 45 10: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1B A3 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
