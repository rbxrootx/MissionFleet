// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F793 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5886f793() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 0C A0 96 58: mov eax, dword ptr [0x5896a00c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
