// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588319E9 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_588319e9() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 C7 FF FF FF: call 0x588319bb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
