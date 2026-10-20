// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517D62 .. +0x54 bytes.
extern "C" __declspec(naked) void _OnSysCommand_CPropertySheet__IAEXIJ_Z_00517D62() {
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
        ; Exact mapped bytes 74 02: je 0x517d8c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x517da8
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 10: je 0x517da8
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 38 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x517db0
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 79 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
