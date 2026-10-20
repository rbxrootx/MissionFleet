// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477990 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00477990_00477990() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0bh
        ; Exact mapped bytes E8 15 8F FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 19 00 00 00: call 0x4779c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 0bh
        ; Exact mapped bytes E8 9C 8F FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
