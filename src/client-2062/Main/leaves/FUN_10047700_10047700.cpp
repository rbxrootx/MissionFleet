// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047700 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_10047700_10047700() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 6ch], ecx
        mov ecx, dword ptr [eax + 74h]
        test ecx, ecx
        mov dword ptr [eax + 70h], edx
        mov dword ptr [eax + 5ch], 40000000h
        ; Exact mapped bytes 74 1E: je 0x1004773c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [eax + 4]
        push esi
        push edi
        mov edi, dword ptr [eax + 8]
        mov esi, 12ch
        sub edx, 190h
        sub esi, edi
        push esi
        push edx
        ; Exact mapped bytes E8 56 12 00 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
