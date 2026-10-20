// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423DC0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00423dc0_00423DC0() {
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
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 3f0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 22 0B 00: call 0x4d5ff7
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x22
        __asm _emit 0x0b
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 0F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0f
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
