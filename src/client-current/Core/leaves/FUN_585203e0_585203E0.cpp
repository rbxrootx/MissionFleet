// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585203E0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_585203e0_585203E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 30h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
