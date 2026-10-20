// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B5A3 .. +0x99 bytes.
extern "C" __declspec(naked) void _OnBarCheck_COleIPFrameWnd__IAEHI_Z_0056B5A3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 91 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x56b5c8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 92 FA FF: call 0x514876
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 6E: jmp 0x56b636
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0dch], 0
        ; Exact mapped bytes 74 2A: je 0x56b5fe
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 57 91 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56b5fe
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 7A 92 FA FF: call 0x514876
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 38: jmp 0x56b636
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0h], 0
        ; Exact mapped bytes 74 2A: je 0x56b634
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 21 91 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56b634
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 44 92 FA FF: call 0x514876
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x56b636
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
