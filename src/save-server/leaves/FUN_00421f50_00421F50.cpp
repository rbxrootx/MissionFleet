// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421F50 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00421f50_00421F50() {
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
        mov dword ptr [eax], 63429ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 BE A4 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 F2 FD FF: call 0x4012ad
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 27 2E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2e
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
