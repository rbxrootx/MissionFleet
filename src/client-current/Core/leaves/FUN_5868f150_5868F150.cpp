// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F150 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5868f150_5868F150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A C8 00 00 00: mov word ptr [edx + 0xc8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
