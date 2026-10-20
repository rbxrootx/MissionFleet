// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004222F0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_004222f0_004222F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 33 F3 FD FF: call 0x40164f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 F5 FD FF: call 0x40186b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 BE 2A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2a
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
