// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C4B0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_1016c4b0_1016C4B0() {
    __asm {
        push esi
        mov esi, ecx
        push 0ch
        ; Exact mapped bytes E8 E6 02 00 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x1016c4eb
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, ecx
        push edi
        mov edi, dword ptr [esp + 10h]
        and edx, 0ffffh
        mov edx, dword ptr [esi + edx*4]
        mov dword ptr [eax], ecx
        and ecx, 0ffffh
        mov dword ptr [eax + 4], edi
        mov dword ptr [eax + 8], edx
        pop edi
        mov dword ptr [esi + ecx*4], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        and ecx, 0ffffh
        xor eax, eax
        mov dword ptr [esi + ecx*4], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
