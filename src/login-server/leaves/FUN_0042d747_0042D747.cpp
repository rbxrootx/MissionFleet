// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D747 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0042d747_0042D747() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, esi
        xor edx, edx
        shr eax, 4
        div dword ptr [ecx + 8]
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x42d773
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx + edx*4]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42d773
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 74 06: je 0x42d775
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB F3: jmp 0x42d766
        __asm _emit 0xeb
        __asm _emit 0xf3
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
