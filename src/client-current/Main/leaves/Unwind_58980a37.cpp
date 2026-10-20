// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980A37 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58980a37() {
    __asm {
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 C2 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
