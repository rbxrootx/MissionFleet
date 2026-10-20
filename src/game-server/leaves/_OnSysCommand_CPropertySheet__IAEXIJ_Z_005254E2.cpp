// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005254E2 .. +0x54 bytes.
extern "C" __declspec(naked) void _OnSysCommand_CPropertySheet__IAEXIJ_Z_005254E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 2
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0fff0h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0f060h
        ; Exact mapped bytes 74 02: je 0x52550c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x525528
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 10: je 0x525528
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B3 66 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x525530
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 C3 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
