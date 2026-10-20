// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052925E .. +0x5C bytes.
extern "C" __declspec(naked) void _InvalidateCheck_CCheckListBox__IAEXH_Z_0052925E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E2 CA 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de854h
        ; Exact mapped bytes E8 E7 E0 01 00: call 0x547360
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 CC 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 55 5A 01 00: call 0x53ece6
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 2]
        mov dword ptr [ebp - 8], ecx
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BF CC 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 32 01 00: call 0x53c59d
        __asm _emit 0xe8
        __asm _emit 0xe9
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
