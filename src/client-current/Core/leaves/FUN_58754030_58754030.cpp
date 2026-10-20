// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754030 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58754030_58754030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 23: je 0x58754063
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 23ah]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        movzx eax, word ptr [ecx + 124h]
        imul edx, eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0ch], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
