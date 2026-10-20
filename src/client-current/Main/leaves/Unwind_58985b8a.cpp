// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58985B8A .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58985b8a() {
    __asm {
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AF 70 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
