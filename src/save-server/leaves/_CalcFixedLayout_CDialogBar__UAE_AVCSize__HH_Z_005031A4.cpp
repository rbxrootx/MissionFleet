// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005031A4 .. +0x6E bytes.
extern "C" __declspec(naked) void _CalcFixedLayout_CDialogBar__UAE_AVCSize__HH_Z_005031A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 45: je 0x5031f8
        __asm _emit 0x74
        __asm _emit 0x45
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x5031c4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x5031cb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 7fffh
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x5031da
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 7fffh
        ; Exact mapped bytes EB 09: jmp 0x5031e3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD E9 02 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 14: jmp 0x50320c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [eax + 7ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
