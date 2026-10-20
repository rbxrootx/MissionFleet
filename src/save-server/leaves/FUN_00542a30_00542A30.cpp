// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542A30 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00542a30_00542A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 78 B9 68 00: call dword ptr [0x68b978]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 7C B9 68 00: call dword ptr [0x68b97c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, 1
        cmp ecx, dword ptr [ebp - 14h]
        sbb eax, eax
        neg eax
        mov esp, ebp
        pop ebp
        ret
    }
}
