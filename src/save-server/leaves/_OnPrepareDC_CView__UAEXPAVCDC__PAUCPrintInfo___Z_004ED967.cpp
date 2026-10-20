// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED967 .. +0x59 bytes.
extern "C" __declspec(naked) void _OnPrepareDC_CView__UAEXPAVCDC__PAUCPrintInfo___Z_004ED967() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 19fh
        push 677b4ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DD C8 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 31: je 0x4ed9ba
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 AB 03 00: call 0x5284a4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 12: jne 0x4ed9aa
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 09: je 0x4ed9aa
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x4ed9b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
