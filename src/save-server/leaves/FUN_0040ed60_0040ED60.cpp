// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040ED60 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0040ed60_0040ED60() {
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
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 EE 12 00: call 0x53dc2f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6338d8h
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 50 60 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
