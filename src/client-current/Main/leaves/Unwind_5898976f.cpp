// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898976F .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5898976f() {
    __asm {
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 34 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
