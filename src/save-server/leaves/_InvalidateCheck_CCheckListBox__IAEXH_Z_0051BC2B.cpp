// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BC2B .. +0x5C bytes.
extern "C" __declspec(naked) void _InvalidateCheck_CCheckListBox__IAEXH_Z_0051BC2B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8B 65 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, 68709ch
        ; Exact mapped bytes E8 CA 83 02 00: call 0x544010
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 71 67 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 2A 01 00: call 0x52e746
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 2]
        mov dword ptr [ebp - 8], ecx
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4A 67 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 03 01 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0x7c
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
