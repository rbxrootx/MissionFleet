// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567A56 .. +0x9B bytes.
extern "C" __declspec(naked) void _Dump_COleLinkingDoc__UBEXAAVCDumpContext___Z_00567A56() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA AA FE FF: call 0x552523
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        push edx
        push 5d0d28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B D0 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC D2 FC FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        push 5d0d3ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D D0 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 D2 FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 20: je 0x567ad1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        push 5d0d50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 D0 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC D2 FC FF: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x567ade
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5d0d60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D D0 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5d0d74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 D0 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd0
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
