// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC7D0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_584ac7d0_584AC7D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 08: jge 0x584ac7e5
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        neg eax
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 0a4h], 64h
        cdq
        mov ecx, 1feh
        idiv ecx
        imul eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0cch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
