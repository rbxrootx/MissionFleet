// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004209E0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004209e0_004209E0() {
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
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 09 FE FF: call 0x4013e8
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 0C FE FF: call 0x40168b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 43 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
