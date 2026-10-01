// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58926C10 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58926c10() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 0ch], ecx
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax], 589a2da8h
        ret 0ch
    }
}
