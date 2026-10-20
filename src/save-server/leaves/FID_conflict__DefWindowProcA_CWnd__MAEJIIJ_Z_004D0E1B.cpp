// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0E1B .. +0x8B bytes.
extern "C" __declspec(naked) void FID_conflict__DefWindowProcA_CWnd__MAEJIIJ_Z_004D0E1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 22: je 0x4d0e4f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 51: jmp 0x4d0ea0
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 88 00 00 00: call dword ptr [eax + 0x88]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1B: jne 0x4d0e83
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 00 BF 68 00: call dword ptr [0x68bf00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x4d0ea0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
