// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413B20 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00413b20_00413B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes E8 37 DE FE FF: call 0x401974
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], al
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DF D7 FE FF: call 0x401334
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 8B 12 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
