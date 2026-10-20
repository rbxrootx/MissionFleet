// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041531D .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_0041531d_0041531D() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        cmp eax, ebx
        ; Exact mapped bytes 7C 02: jl 0x41532d
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, ebx
        mov ecx, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes E8 8E 8C 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        cmp ebx, eax
        ; Exact mapped bytes 7F 69: jg 0x4153a6
        __asm _emit 0x7f
        __asm _emit 0x69
        ; Exact mapped bytes 66 83 7D 24 FF: cmp word ptr [ebp + 0x24], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0xff
        ; Exact mapped bytes 74 07: je 0x41534b
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 7D 24 FC: cmp word ptr [ebp + 0x24], -4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x24
        __asm _emit 0xfc
        ; Exact mapped bytes 75 5B: jne 0x4153a6
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp + 20h]
        dec ebx
        push esi
        inc eax
        push edi
        push eax
        ; Exact mapped bytes E8 94 8C 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 14h]
        mov edi, dword ptr [ebp + 18h]
        add eax, ebx
        sub esi, ebx
        mov dword ptr [edi], eax
        inc esi
        lea eax, [ebp + 14h]
        push eax
        push esi
        push dword ptr [edi]
        push 1
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 33 72 01 00: call 0x42c5ac
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 E6: je 0x415365
        __asm _emit 0x74
        __asm _emit 0xe6
        pop edi
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes 74 11: je 0x415398
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x415398
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E C5 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 20h]
        add ebx, eax
        push ebx
        ; Exact mapped bytes E8 1E 8C 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
