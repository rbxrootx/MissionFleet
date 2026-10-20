// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056814C .. +0xFE bytes.
extern "C" __declspec(naked) void _Dump_COleMessageFilter__UBEXAAVCDumpContext___Z_0056814C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB A7 FD FF: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5ce57ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED CB FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 5ce590h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A CB FC FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 5ce5a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 CB FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 5ce5b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C CB FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 5ce5d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 CB FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        push eax
        push 5ce5e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 CB FC FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        push edx
        push 5ce5fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 C9 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 CB FC FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        push 5ce610h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB C8 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC CA FC FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5ce620h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 C8 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
