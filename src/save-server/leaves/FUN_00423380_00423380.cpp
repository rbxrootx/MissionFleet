// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423380 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00423380_00423380() {
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
        mov dword ptr [eax], 6342a0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD B5 00 00: call 0x42e95b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 35 1A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
