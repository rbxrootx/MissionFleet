// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886554E .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5886554e_5886554E() {
    __asm {
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x58865579
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 39 05 98 98 96 58: cmp dword ptr [0x58969898], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 18: je 0x58865577
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes E8 70 00 00 00: call 0x588655d4
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58865571
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 F3 02 00 00: call 0x58865860
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x58865577
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ret
        xor eax, eax
        ret
    }
}
