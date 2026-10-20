// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E2A8 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5897e2a8() {
    __asm {
        ; Exact mapped bytes 8B 45 BC: mov eax, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 91 E9 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
