// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4A80 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_588f4a80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 424h], eax
        or eax, 0ffffffffh
        mov dword ptr [ecx + 428h], eax
        mov dword ptr [ecx + 42ch], eax
        mov dword ptr [ecx + 430h], eax
        mov dword ptr [ecx + 434h], eax
        mov dword ptr [ecx + 438h], eax
        mov dword ptr [ecx + 43ch], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
