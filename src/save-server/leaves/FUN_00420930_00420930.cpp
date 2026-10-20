// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420930 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00420930_00420930() {
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
        ; Exact mapped bytes E8 6B 0F FE FF: call 0x4018c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 8E 44 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
