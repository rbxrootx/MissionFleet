// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E2F0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5875e2f0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5875e31e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 60h], eax
        mov eax, dword ptr [esp + 8]
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [ecx + 6ch], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 70h], eax
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 74h], edx
        mov dword ptr [ecx + 68h], eax
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
