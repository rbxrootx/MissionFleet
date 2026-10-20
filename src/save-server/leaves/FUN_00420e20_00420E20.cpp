// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420E20 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00420e20_00420E20() {
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
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B 0A FE FF: call 0x401898
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 93 3F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x3f
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
