// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505470 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58505470() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 14 D2 8F 58: mov eax, 0x588fd214
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
