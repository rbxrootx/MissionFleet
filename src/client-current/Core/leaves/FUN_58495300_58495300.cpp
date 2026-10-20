// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58495300 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58495300_58495300() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 46ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4c4h], 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 318h], 3
        mov esp, ebp
        pop ebp
        ret
    }
}
