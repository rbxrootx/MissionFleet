// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F290 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0040f290_0040F290() {
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
        ; Exact mapped bytes E8 A5 E8 0B 00: call 0x4cdb5a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 2E 5B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
