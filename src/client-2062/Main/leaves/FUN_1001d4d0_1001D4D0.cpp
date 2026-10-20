// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001D4D0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_1001d4d0_1001D4D0() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes 74 28: je 0x1001d506
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 10h]
        add ecx, 18h
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
