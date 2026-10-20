// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482CA0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58482ca0_58482CA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 34 33 00: call 0x587b6140
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58482cc5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 6ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 72 E3 3A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe3
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
