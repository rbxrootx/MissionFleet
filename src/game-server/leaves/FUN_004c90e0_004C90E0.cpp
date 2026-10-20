// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C90E0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_004c90e0_004C90E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 3
        push 5df0f8h
        ; Exact mapped bytes FF 15 E4 21 5E 00: call dword ptr [0x5e21e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        xor ecx, ecx
        cmp eax, 2
        sete cl
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x4c910d
        __asm _emit 0x74
        __asm _emit 0x0b
        push 5df0e0h
        ; Exact mapped bytes FF 15 10 24 5E 00: call dword ptr [0x5e2410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
