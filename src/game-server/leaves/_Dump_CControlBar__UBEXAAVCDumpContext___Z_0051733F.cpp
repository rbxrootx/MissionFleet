// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051733F .. +0xE3 bytes.
extern "C" __declspec(naked) void _Dump_CControlBar__UBEXAAVCDumpContext___Z_0051733F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 B8 FD FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 5c8b80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FA D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 5c8b94h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DF D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        push eax
        push 5c8ba8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C4 D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 5c8bbch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A9 D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        push 5c8bd4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8E D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        push 5c8be8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 5c8bf8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 D7 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 58 D9 01 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c8c0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF D6 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd6
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
