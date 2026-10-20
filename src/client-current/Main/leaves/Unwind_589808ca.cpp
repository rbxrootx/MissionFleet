// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589808CA .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_589808ca() {
    __asm {
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6F C3 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
