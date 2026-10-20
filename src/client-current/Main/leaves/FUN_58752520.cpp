// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752520 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58752520() {
    __asm {
        mov eax, dword ptr [ecx + 90h]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5875253b
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esp + 4]
        mov edi, edi
        cmp eax, ecx
        ; Exact mapped bytes 74 0C: je 0x58752540
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 54h]
        test eax, eax
        ; Exact mapped bytes 75 F5: jne 0x58752530
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
