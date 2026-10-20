// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522BF0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58522bf0_58522BF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a4460h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 74h], 0ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 08 00 00: call 0x585234d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
