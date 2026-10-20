// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551BD8 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00551bd8_00551BD8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 2E 00 00: call 0x554a06
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 640d20h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 E5 70 F0 FF: call 0x458ce0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x551c06
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x551c12
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 07 00 00 00: call 0x551c16
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
