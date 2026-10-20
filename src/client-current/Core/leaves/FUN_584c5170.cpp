// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5170 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_584c5170() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 34 21 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
