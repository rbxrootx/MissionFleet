// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517954 .. +0x49 bytes.
extern "C" __declspec(naked) void _GetPageIndex_CPropertySheet__QAEHPAVCPropertyPage___Z_00517954() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x51796f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA FE FF FF: call 0x517871
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 18: jge 0x517994
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4C 02 01 00: call 0x527bd4
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x517992
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x517997
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D2: jmp 0x517966
        __asm _emit 0xeb
        __asm _emit 0xd2
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
