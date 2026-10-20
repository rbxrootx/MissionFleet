// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971FA0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58971fa0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi], 589a2fbch
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x58971fc8
        __asm _emit 0x74
        __asm _emit 0x18
        mov cl, byte ptr [esi + 8]
        test cl, cl
        ; Exact mapped bytes 74 11: je 0x58971fc8
        __asm _emit 0x74
        __asm _emit 0x11
        push eax
        ; Exact mapped bytes FF 15 50 C2 98 58: call dword ptr [0x5898c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi], 589a2ff4h
        pop esi
        ret
    }
}
