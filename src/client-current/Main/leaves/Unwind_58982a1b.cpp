// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982A1B .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58982a1b() {
    __asm {
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1E A2 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
