// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858B7C .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58858b7c() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8D 45 FF: lea eax, [ebp - 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 38 FC FF FF: call 0x588587cc
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
