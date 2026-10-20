// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58988352 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58988352() {
    __asm {
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E7 48 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
