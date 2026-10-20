// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885B719 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5885b719_5885B719() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 18h]
        lea ecx, [ecx + 7fh]
        shl edx, 1fh
        shl ecx, 17h
        mov eax, dword ptr [esi]
        and eax, 7fffffffh
        or edx, eax
        xor ecx, edx
        and ecx, 7f800000h
        xor ecx, edx
        mov eax, ecx
        xor eax, dword ptr [ebp + 10h]
        and eax, 7fffffh
        xor eax, ecx
        mov dword ptr [esi], eax
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
