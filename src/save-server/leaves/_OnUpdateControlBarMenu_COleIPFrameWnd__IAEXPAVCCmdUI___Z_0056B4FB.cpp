// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B4FB .. +0xA8 bytes.
extern "C" __declspec(naked) void _OnUpdateControlBarMenu_COleIPFrameWnd__IAEXPAVCCmdUI___Z_0056B4FB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 92 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x56b523
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 92 FA FF: call 0x5147f9
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 7A: jmp 0x56b59d
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0dch], 0
        ; Exact mapped bytes 74 2D: je 0x56b55c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 F9 91 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56b55c
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dch]
        ; Exact mapped bytes E8 9F 92 FA FF: call 0x5147f9
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 41: jmp 0x56b59d
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 2D: je 0x56b595
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 C0 91 FA FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56b595
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 66 92 FA FF: call 0x5147f9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x56b59d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 C7 FC FF: call 0x537d2d
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc7
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
