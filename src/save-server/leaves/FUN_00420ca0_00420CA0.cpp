// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420CA0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00420ca0_00420CA0() {
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
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 09 FE FF: call 0x401622
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 15 41 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x41
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
