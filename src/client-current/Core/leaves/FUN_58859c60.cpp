// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859C60 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58859c60() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6B 45 08 38: imul eax, dword ptr [ebp + 8], 0x38
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x38
        ; Exact mapped bytes 05 70 73 90 58: add eax, 0x58907370
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
