// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041C190 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_0041c190_0041C190() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 83 C0 2C: add eax, 0x2c
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x2c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
