// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500BF4 .. +0x7B bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_ABUtagRECT___Z_00500BF4() {
    __asm {
        push ebp
        mov ebp, esp
        push 5c6e94h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 5c6e8ch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 5c6e84h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c6e7ch
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 5c6e78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C5 40 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DA 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B7 40 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A9 40 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BE 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9B 40 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B0 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
