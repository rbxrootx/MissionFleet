// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C800 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_5884c800() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 7D 10 00: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x5884c80d
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 02 00 00 00: call 0x5884c81d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
