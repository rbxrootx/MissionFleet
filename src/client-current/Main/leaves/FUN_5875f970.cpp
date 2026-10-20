// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F970 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5875f970() {
    __asm {
        mov edx, dword ptr [ecx + 90h]
        xor eax, eax
        inc edx
        push edx
        push eax
        mov dword ptr [ecx + 0e8h], eax
        mov dword ptr [ecx + 0fch], eax
        mov dword ptr [ecx + 0f8h], eax
        mov dword ptr [ecx + 0f4h], eax
        mov dword ptr [ecx + 0f0h], eax
        mov eax, dword ptr [ecx + 100h]
        push eax
        ; Exact mapped bytes E8 A3 D2 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
