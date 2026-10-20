// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6BE0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587a6be0_587A6BE0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x587a6c06
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 28ch], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 290h], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx + 294h], eax
        ret
    }
}
