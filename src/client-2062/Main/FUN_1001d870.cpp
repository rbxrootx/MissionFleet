// Reconstructed from FUN_1001d870 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100fecd0();

extern "C" __declspec(naked) void FUN_1001d870() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov edx, eax
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], ecx
        mov eax, ecx
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [esi + 50h], edx
        push edx
        mov dword ptr [esi + 54h], eax
        call FUN_100fecd0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 84h]
        call FUN_100fecd0
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 78h]
        push edx
        push eax
        call FUN_100fecd0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 3ah
        add edx, 32h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push edx
        call FUN_100fecd0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 4eh
        add ecx, 32h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 68h]
        call FUN_100fecd0
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 88h]
        add edx, 6ch
        add eax, 82h
        push edx
        push eax
        call FUN_100fecd0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 6ch
        add edx, 0d2h
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        push edx
        call FUN_100fecd0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 6
        add ecx, 81h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 80h]
        call FUN_100fecd0
        pop esi
        ret 8
    }
}
