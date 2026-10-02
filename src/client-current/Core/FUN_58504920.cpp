// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504920 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58504920() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F EC F9 FF: call 0x584a35d0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        pop ebp
        ret
    }
}
