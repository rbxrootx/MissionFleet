// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5C4F .. +0x3D bytes.
extern "C" __declspec(naked) void __0CDC__QAE_XZ_004E5C4F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 EB 03 00: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 636b5ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
