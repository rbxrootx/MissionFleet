// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CBA7 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5883cba7() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8D 45 10: lea eax, [ebp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 C7 FF FF FF: call 0x5883cb82
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
