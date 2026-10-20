// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F231 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5884f231() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 80 7D 08 00: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x5884f244
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 F2 04 00 00: call 0x5884f731
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF 16 00 00: call 0x588508f3
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
