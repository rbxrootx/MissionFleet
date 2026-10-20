// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411740 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00411740_00411740() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5810b0h
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp - 4]
        add edi, 4
        mov ecx, 6
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
