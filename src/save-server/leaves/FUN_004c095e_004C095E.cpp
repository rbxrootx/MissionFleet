// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C095E .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_004c095e_004C095E() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 68 94 14 67 00: push 0x671494
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8F 49 FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
