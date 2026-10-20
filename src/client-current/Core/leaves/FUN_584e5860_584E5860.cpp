// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5860 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_584e5860_584E5860() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0b4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 0bch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 0c0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 0c4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 0c8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [edx + 0ach], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
