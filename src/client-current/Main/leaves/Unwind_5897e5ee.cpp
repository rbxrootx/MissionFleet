// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897E5EE .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_5897e5ee() {
    __asm {
        ; Exact mapped bytes 8B 45 20: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4B E6 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
