// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004245A0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004245a0_004245A0() {
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
        mov dword ptr [eax], 634380h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 CF FD FF: call 0x40156e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 15 08 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
