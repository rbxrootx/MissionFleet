// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E02C .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0042e02c_0042E02C() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        cmp ecx, dword ptr [eax - 8]
        ; Exact mapped bytes 7D 14: jge 0x42e04e
        __asm _emit 0x7d
        __asm _emit 0x14
        add eax, ecx
        movzx ecx, byte ptr [esp + 8]
        push ecx
        push eax
        ; Exact mapped bytes E8 BA 19 FF FF: call 0x41fa02
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 05: jne 0x42e053
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x42e055
        __asm _emit 0xeb
        __asm _emit 0x02
        sub eax, dword ptr [esi]
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
