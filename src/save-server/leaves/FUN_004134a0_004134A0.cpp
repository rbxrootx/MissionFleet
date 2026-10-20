// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004134A0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004134a0_004134A0() {
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
        add eax, 4
        push eax
        ; Exact mapped bytes E8 14 E0 FE FF: call 0x4014dd
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 94 DD FE FF: call 0x401271
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 06 19 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
