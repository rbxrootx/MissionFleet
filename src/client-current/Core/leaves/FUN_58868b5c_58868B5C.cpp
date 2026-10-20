// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868B5C .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58868b5c_58868B5C() {
    __asm {
        push 0
        mov eax, 58892dceh
        ; Exact mapped bytes E8 D0 99 FC FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0xd0
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
        ; Exact mapped bytes 74 1F: je 0x58868b95
        __asm _emit 0x74
        __asm _emit 0x1f
        push eax
        ; Exact mapped bytes E8 24 6C 00 00: call 0x5886f7a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 13: je 0x58868b95
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        ; Exact mapped bytes FF 35 58 74 90 58: push dword ptr [0x58907458]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 6C 00 00: call 0x5886f7ac
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 E6 FD FF FF: call 0x5886897b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 7B 99 FC FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        ret
    }
}
