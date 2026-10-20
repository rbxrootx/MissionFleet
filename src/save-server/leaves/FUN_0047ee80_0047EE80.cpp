// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047EE80 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0047ee80_0047EE80() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 CC 75 68 00: mov eax, dword ptr [0x6875cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        or eax, 104h
        ; Exact mapped bytes A3 CC 75 68 00: mov dword ptr [0x6875cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 28 B8 68 00: call dword ptr [0x68b828]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 D0 75 68 00: mov dword ptr [0x6875d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D0 75 68 00: mov ecx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D B4 75 68 00: mov dword ptr [0x6875b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
