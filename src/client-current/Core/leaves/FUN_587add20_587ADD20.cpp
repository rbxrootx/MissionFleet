// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADD20 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_587add20_587ADD20() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        mov edx, ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        shr edx, 8
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ecx + eax], bl
        inc dword ptr [esi + 14h]
        pop esi
        pop ebx
        ret
    }
}
