// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588712F0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588712f0() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
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
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 FF FD FF FF: call 0x58871108
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
