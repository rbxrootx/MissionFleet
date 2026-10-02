// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E530 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5882e530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 5ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
