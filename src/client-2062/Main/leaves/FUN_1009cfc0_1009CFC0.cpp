// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009CFC0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_1009cfc0_1009CFC0() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 2a0h]
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1009cfd6
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes 66 8B 41 0C: mov ax, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x1009cfd8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [eax - 1]
        mov eax, 0f2b9d649h
        imul ecx, dword ptr [esp + 8]
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 50h], edx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
