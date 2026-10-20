// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CED6E .. +0x5E bytes.
extern "C" __declspec(naked) void _OnCommandHelp_CDialog__IAEJIJ_Z_004CED6E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x4ced95
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 0F: je 0x4ced95
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        add edx, 20000h
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x4cedc4
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes E8 D0 2C 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x4cedbd
        __asm _emit 0x74
        __asm _emit 0x14
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4cedc6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
