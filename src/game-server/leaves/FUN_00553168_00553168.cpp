// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553168 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00553168_00553168() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 2E 00 00: call 0x555f96
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 58e530h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 35 95 F4 FF: call 0x49c6c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x553196
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x5531a2
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 07 00 00 00: call 0x5531a6
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
