// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CFA0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0047cfa0_0047CFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0ch
        ; Exact mapped bytes E8 05 39 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 19 00 00 00: call 0x47cfd0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 0ch
        ; Exact mapped bytes E8 8C 39 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
