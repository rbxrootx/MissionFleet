// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898468D .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898468d() {
    __asm {
        ; Exact mapped bytes 8B 45 24: mov eax, dword ptr [ebp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AC 85 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
