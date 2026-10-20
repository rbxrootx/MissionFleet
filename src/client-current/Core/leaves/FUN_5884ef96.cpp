// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884EF96 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5884ef96() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes FF 55 0C: call dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
