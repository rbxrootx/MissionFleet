// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505480 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58505480() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 0F B6 45 08: movzx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
