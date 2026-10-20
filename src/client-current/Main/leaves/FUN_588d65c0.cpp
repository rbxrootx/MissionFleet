// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D65C0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_588d65c0() {
    __asm {
        inc dword ptr [ecx + 6058h]
        mov eax, dword ptr [ecx + 6058h]
        cmp eax, dword ptr [esp + 4]
        ; Exact mapped bytes 7D 04: jge 0x588d65d6
        __asm _emit 0x7d
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 7D 25: jge 0x588d65fb
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ecx + 60b0h]
        and eax, 0ff00ffffh
        or eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 6058h], 0
        mov dword ptr [ecx + 60b0h], eax
        mov eax, dword ptr [ecx + 6058h]
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
