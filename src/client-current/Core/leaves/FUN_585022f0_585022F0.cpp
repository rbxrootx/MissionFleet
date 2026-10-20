// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585022F0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_585022f0_585022F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0
        push 58947240h
        ; Exact mapped bytes FF 15 D4 44 89 58: call dword ptr [0x588944d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0E: jne 0x58502318
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        push 58947240h
        ; Exact mapped bytes FF 15 D4 44 89 58: call dword ptr [0x588944d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
