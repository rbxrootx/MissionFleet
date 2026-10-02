// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831034 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58831034() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 00 00 00: call 0x58831081
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ebp
        ret
    }
}
