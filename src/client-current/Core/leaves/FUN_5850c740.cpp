// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C740 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_5850c740() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 B3 FA FF FF: call 0x5850c200
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
