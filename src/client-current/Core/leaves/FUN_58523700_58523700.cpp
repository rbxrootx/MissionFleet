// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523700 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58523700_58523700() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov edi, dword ptr [ebp - 4]
        add edi, 8
        mov ecx, 0c3h
        lea esi, [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 03: ret 0x30c
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x03
    }
}
