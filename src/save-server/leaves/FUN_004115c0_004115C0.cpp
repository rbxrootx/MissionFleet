// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004115C0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_004115c0_004115C0() {
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
        ; Exact mapped bytes E8 DB FD FE FF: call 0x4013c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 FE 37 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
