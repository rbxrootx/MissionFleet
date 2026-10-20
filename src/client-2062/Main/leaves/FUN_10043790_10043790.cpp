// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043790 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_10043790_10043790() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 88h], eax
        mov ecx, dword ptr [ecx + 164h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100437b0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [eax + 5c44h]
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
