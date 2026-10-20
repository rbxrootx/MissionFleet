// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F731 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_5884f731() {
    __asm {
        ; Exact mapped bytes A1 F0 72 90 58: mov eax, dword ptr [0x589072f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 11: je 0x5884f74c
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 07 13 00 00: call 0x58850a48
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C7 05 F0 72 90 58 FF FF FF FF: mov dword ptr [0x589072f0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
