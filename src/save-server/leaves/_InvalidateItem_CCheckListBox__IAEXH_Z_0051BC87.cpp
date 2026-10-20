// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BC87 .. +0x3F bytes.
extern "C" __declspec(naked) void _InvalidateItem_CCheckListBox__IAEXH_Z_0051BC87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2F 65 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 22 67 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 99 2A 01 00: call 0x52e746
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0B 67 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3D 03 01 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x03
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
