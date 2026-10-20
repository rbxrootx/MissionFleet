// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043750 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_10043750_10043750() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        lea esi, [eax + eax*4]
        shl esi, 1
        mov eax, esi
        mov dword ptr [ecx + 0b8h], esi
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        test esi, esi
        mov dword ptr [ecx + 13ch], eax
        pop esi
        ; Exact mapped bytes 74 14: je 0x1004378a
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ecx + 100h], 40000000h
        mov dword ptr [ecx + 0dch], 70h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
