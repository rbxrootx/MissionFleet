// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005655FB .. +0xA8 bytes.
extern "C" __declspec(naked) void _OnUpdateControlBarMenu_COleIPFrameWnd__IAEXPAVCCmdUI___Z_005655FB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 7A FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x565623
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 7A FC FF: call 0x52d0da
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 7A: jmp 0x56569d
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0dch], 0
        ; Exact mapped bytes 74 2D: je 0x56565c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 DA 79 FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56565c
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dch]
        ; Exact mapped bytes E8 80 7A FC FF: call 0x52d0da
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 41: jmp 0x56569d
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 74 2D: je 0x565695
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 A1 79 FC FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x565695
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 47 7A FC FF: call 0x52d0da
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x56569d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 62 FD FF: call 0x53b8e9
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x62
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
