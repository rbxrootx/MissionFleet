// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DE30 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0047de30_0047DE30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov esi, dword ptr [ebp + 8]
        add esi, 8
        mov edi, dword ptr [ebp - 4]
        add edi, 8
        mov ecx, 5
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [ebp + 8]
        add esi, 1ch
        mov edi, dword ptr [ebp - 4]
        add edi, 1ch
        mov ecx, 6
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5812ach
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
