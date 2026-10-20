// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409600 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00409600_00409600() {
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
        mov dword ptr [eax], 633114h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1010ch
        ; Exact mapped bytes E8 B8 32 0C 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 AF B7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
