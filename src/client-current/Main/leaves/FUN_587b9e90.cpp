// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9E90 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_587b9e90() {
    __asm {
        ; Exact mapped bytes 8B 44 24 0C: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 1D 31 01 80: push 0x8001311d
        __asm _emit 0x68
        __asm _emit 0x1d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 C3 6D 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
