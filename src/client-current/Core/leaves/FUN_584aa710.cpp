// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA710 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_584aa710() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6B 45 10 2C: imul eax, dword ptr [ebp + 0x10], 0x2c
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 8F C7 FD FF: call 0x58486eb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
