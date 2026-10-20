// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987C0A .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58987c0a() {
    __asm {
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2F 50 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
