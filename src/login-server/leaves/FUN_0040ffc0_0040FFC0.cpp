// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FFC0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0040ffc0_0040FFC0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 48h]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x40fff8
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x40fff8
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4]
        push 1
        push eax
        mov dword ptr [esi + 0ach], 0
        ; Exact mapped bytes FF 15 E0 C5 43 00: call dword ptr [0x43c5e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push 20h
        push ecx
        mov ecx, dword ptr [esi + 48h]
        ; Exact mapped bytes E8 C8 FB FF FF: call 0x40fbc0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
