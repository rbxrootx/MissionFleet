// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897EF30 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5897ef30() {
    __asm {
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 DD FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
