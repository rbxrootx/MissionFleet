// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004210C0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004210c0_004210C0() {
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
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 3E 01 FE FF: call 0x40123f
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 DF 3C 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3c
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
