// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984E3B .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58984e3b() {
    __asm {
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FE 7D FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
