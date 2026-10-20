// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421D20 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00421d20_00421D20() {
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
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        imul eax, eax, 2ch
        push eax
        ; Exact mapped bytes E8 EE A6 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 FC FD FF: call 0x4019ba
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 57 30 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
