// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868BAE .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_58868bae_58868BAE() {
    __asm {
        push 0
        mov eax, 58892dceh
        ; Exact mapped bytes E8 7E 99 FC FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 58 74 90 58: mov eax, dword ptr [0x58907458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 15: je 0x58868bdd
        __asm _emit 0x74
        __asm _emit 0x15
        push eax
        ; Exact mapped bytes E8 D2 6B 00 00: call 0x5886f7a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58868bdd
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, -1
        ; Exact mapped bytes 74 0F: je 0x58868be6
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E8 39 99 FC FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        ret
        ; Exact mapped bytes E8 87 FE FF FF: call 0x58868a69
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 F1: jne 0x58868bd7
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes E8 25 9B FF FF: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
