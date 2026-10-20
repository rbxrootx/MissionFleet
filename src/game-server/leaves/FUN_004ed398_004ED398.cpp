// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED398 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004ed398_004ED398() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 40 4A 5C 00: mov eax, dword ptr [0x5c4a40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
