// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588792DC .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_588792dc() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 18: push dword ptr [ebp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 8E F9 FF FF: call 0x58878c85
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
