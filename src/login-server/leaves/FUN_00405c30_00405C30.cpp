// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405C30 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_00405c30_00405C30() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 7B 00 03 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
