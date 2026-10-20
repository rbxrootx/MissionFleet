// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58984E30 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58984e30() {
    __asm {
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 7E FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
