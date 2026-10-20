// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770460 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58770460_58770460() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5eb4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5eb4h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5eb4h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7D 0C: jge 0x58770496
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eb4h], 0
        ; Exact mapped bytes 7D 28: jge 0x587704be
        __asm _emit 0x7d
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff00ffffh
        or ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5f0ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5eb4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5eb4h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
