// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101098E0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_101098e0_101098E0() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A8 50 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 63h
        mov dword ptr [esi], 10176ac0h
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 50h], 0ffffffh
        mov dword ptr [esi + 54h], 0
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
