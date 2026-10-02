// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873F20 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58873f20() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        or eax, 0ffffffffh
        mov edx, ecx
        shr ecx, 16h
        shr edx, 0eh
        and ecx, 300h
        and edx, 300h
        cmp edx, ecx
        cmove eax, edx
        pop ebp
        ret
    }
}
