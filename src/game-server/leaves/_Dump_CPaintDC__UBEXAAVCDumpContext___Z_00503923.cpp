// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503923 .. +0x9C bytes.
extern "C" __declspec(naked) void _Dump_CPaintDC__UBEXAAVCDumpContext___Z_00503923() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 87 D3 FF FF: call 0x500cbf
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 5c6fb8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 11 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 78 13 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 5c6fc4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 11 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5D 13 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 5c6fd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 11 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE 13 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1ch
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FA 23 03 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 5c6fe4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 11 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 48 D2 FF FF: call 0x500bf4
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 5c6ff8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 11 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
