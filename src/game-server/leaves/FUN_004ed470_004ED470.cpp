// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED470 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004ed470_004ED470() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 BC 4B 5C 00: mov eax, 0x5c4bbc
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
