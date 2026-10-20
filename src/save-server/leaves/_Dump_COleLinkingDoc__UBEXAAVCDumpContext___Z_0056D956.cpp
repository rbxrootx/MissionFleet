// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D956 .. +0x9B bytes.
extern "C" __declspec(naked) void _Dump_COleLinkingDoc__UBEXAAVCDumpContext___Z_0056D956() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 36 FE FF: call 0x550f93
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        push edx
        push 67d500h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB AE FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC B0 FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        push 67d514h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD AE FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 B0 FB FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 20: je 0x56d9d1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        push 67d528h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 AE FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC B0 FB FF: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x56d9de
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67d538h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D AE FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        push 67d54ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 AE FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
