// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101029F0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_101029f0_101029F0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes C7 06 90 67 17 10: mov dword ptr [esi], 0x10176790
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x10102a07
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 38 50 17 10: call dword ptr [0x10175038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes C7 06 84 67 17 10: mov dword ptr [esi], 0x10176784
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
