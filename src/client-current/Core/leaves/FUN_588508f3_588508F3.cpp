// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588508F3 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_588508f3_588508F3() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 DC 95 96 58: mov esi, dword ptr [0x589695dc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 74 20: je 0x5885091e
        __asm _emit 0x74
        __asm _emit 0x20
        imul eax, esi, 18h
        push edi
        lea edi, [eax + 589695ach]
        push edi
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 0D DC 95 96 58: dec dword ptr [0x589695dc]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        sub edi, 18h
        sub esi, 1
        ; Exact mapped bytes 75 EB: jne 0x58850908
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        mov al, 1
        pop esi
        ret
    }
}
