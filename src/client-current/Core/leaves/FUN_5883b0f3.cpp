// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B0F3 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5883b0f3() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 41 10: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes 3B 45 08: cmp eax, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 76 04: jbe 0x5883b102
        __asm _emit 0x76
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C 1D 8C 58: push 0x588c1d0c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 36 FF FF: call 0x5882e7ad
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
