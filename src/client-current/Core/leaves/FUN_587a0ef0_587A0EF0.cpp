// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0EF0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_587a0ef0_587A0EF0() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 5C: je 0x587a0f53
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 54: je 0x587a0f53
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [esp + 14h]
        or dword ptr [ecx + 8], 4
        mov dword ptr [ecx + 0ech], eax
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ecx + 0f0h], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 0f4h], eax
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ecx + 0fch], eax
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [ecx + 100h], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 104h], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx + 108h], eax
        ret
    }
}
