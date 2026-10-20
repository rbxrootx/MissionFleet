// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421E30 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_00421e30_00421E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 634298h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 41 A6 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 78 2F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
