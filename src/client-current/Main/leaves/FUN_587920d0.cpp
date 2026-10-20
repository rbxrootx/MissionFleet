// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587920D0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587920d0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587920fa
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [esi + 10h]
        lea edx, [esi + 8]
        push edx
        push ecx
        push eax
        ; Exact mapped bytes E8 92 00 17 00: call 0x58902180
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        push edx
        ; Exact mapped bytes E8 4B AB 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xab
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [esi + 0ch], 0
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
    }
}
