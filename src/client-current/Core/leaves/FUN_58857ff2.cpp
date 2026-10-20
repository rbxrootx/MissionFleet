// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857FF2 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58857ff2() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 C9 FE FF FF: call 0x58857ec8
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
