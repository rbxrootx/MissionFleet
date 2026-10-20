// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005292BA .. +0x3F bytes.
extern "C" __declspec(naked) void _InvalidateItem_CCheckListBox__IAEXH_Z_005292BA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 86 CA 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 97 CC 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 5A 01 00: call 0x53ece6
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 80 CC 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA 32 01 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
