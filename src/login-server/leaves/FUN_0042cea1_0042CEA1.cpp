// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CEA1 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0042cea1_0042CEA1() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 2bh
        ; Exact mapped bytes 74 13: je 0x42cebd
        __asm _emit 0x74
        __asm _emit 0x13
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 3C 00 00: call 0x430ae2
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x42cecb
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop eax
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
