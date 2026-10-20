// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108650 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_10108650_10108650() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esi], 10176a4ch
        ; Exact mapped bytes 74 0E: je 0x10108671
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 D5 00 00 00: call 0x10108740
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 90h], ecx
        mov dword ptr [esi + 94h], ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
