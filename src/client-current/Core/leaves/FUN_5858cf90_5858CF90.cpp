// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858CF90 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5858cf90_5858CF90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax + 218h], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + eax + 21ch], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + eax + 220h], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 224h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
