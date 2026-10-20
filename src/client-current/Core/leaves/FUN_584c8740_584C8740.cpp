// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8740 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_584c8740_584C8740() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 C2 2E 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x2e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588961ech
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
