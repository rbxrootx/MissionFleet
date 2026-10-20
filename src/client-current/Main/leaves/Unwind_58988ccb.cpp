// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58988CCB .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58988ccb() {
    __asm {
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6E 3F FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
