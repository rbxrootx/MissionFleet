// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C0E0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0040c0e0_0040C0E0() {
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
        ; Exact mapped bytes E8 BE 55 FF FF: call 0x4016c7
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 B4 55 FF FF: call 0x4016d1
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 8C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8c
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
