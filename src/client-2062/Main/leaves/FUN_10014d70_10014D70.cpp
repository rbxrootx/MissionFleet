// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014D70 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_10014d70_10014D70() {
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
        ; Exact mapped bytes E8 18 9C 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9c
        __asm _emit 0x0e
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        xor eax, eax
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi], 101753e4h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
