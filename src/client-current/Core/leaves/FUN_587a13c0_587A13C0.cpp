// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A13C0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_587a13c0_587A13C0() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 2D: je 0x587a13f4
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x587a13f4
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [esp + 0ch]
        or dword ptr [ecx + 8], 100h
        mov dword ptr [ecx + 8ch], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx + 90h], eax
        mov al, byte ptr [esp + 14h]
        mov byte ptr [ecx + 94h], al
        ret
    }
}
