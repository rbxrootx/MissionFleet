// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413710 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00413710_00413710() {
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
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 DB FE FF: call 0x40124e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea eax, [eax + ecx*4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 A8 16 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x16
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
