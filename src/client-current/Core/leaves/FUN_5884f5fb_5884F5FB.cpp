// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F5FB .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5884f5fb_5884F5FB() {
    __asm {
        ; Exact mapped bytes A1 F0 72 90 58: mov eax, dword ptr [0x589072f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 20: je 0x5884f625
        __asm _emit 0x74
        __asm _emit 0x20
        push esi
        push eax
        ; Exact mapped bytes E8 77 14 00 00: call 0x58850a83
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 35 F0 72 90 58: push dword ptr [0x589072f0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes E8 A3 14 00 00: call 0x58850abe
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push esi
        ; Exact mapped bytes E8 BB FF FF FF: call 0x5884f5df
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
