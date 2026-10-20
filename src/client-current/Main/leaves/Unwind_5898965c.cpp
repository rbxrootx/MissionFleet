// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898965C .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898965c() {
    __asm {
        ; Exact mapped bytes 8B 45 B8: mov eax, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DD 35 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
