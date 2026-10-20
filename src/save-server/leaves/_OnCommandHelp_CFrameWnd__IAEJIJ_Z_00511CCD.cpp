// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511CCD .. +0x77 bytes.
extern "C" __declspec(naked) void _OnCommandHelp_CFrameWnd__IAEJIJ_Z_00511CCD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 31: jne 0x511d0d
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 3A FC FF: call 0x4d5717
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x511cfc
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 10000h
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 11: jmp 0x511d0d
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8ch]
        add eax, 20000h
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x511d3c
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes E8 58 FD 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x511d35
        __asm _emit 0x74
        __asm _emit 0x14
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x511d3e
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
