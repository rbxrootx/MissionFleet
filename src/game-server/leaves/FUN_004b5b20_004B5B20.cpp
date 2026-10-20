// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5B20 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004b5b20_004B5B20() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 90 1A 5D 00: mov eax, dword ptr [0x5d1a90]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
