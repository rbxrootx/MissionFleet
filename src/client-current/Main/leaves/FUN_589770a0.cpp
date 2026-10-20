// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589770A0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_589770a0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 18h]
        mov esi, dword ptr [ebx + edi*4 + 48h]
        test esi, esi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes 75 16: jne 0x589770ce
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebx]
        push ebx
        mov dword ptr [eax + 14h], 34h
        mov ecx, dword ptr [ebx]
        mov dword ptr [ecx + 18h], edi
        mov edx, dword ptr [ebx]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        xor ebp, ebp
        mov eax, esi
        mov ecx, 40h
        ; Exact mapped bytes 66 81 38 FF 00: cmp word ptr [eax], 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 76 05: jbe 0x589770e3
        __asm _emit 0x76
        __asm _emit 0x05
        mov ebp, 1
        add eax, 2
        dec ecx
        ; Exact mapped bytes 75 EE: jne 0x589770d7
        __asm _emit 0x75
        __asm _emit 0xee
        mov al, byte ptr [esi + 80h]
        test al, al
        ; Exact mapped bytes 75 79: jne 0x5897716c
        __asm _emit 0x75
        __asm _emit 0x79
        push 0dbh
        push ebx
        ; Exact mapped bytes E8 52 FC FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebp
        neg eax
        sbb eax, eax
        and eax, 40h
        add eax, 43h
        push eax
        push ebx
        ; Exact mapped bytes E8 9F FC FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, ebp
        shl ecx, 4
        add ecx, edi
        push ecx
        push ebx
        ; Exact mapped bytes E8 51 FC FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov edi, 589a37c0h
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 14h]
        xor esi, esi
        ; Exact mapped bytes 66 8B 34 50: mov si, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x34
        __asm _emit 0x50
        test ebp, ebp
        ; Exact mapped bytes 74 0F: je 0x58977146
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, esi
        shr ecx, 8
        push ecx
        push ebx
        ; Exact mapped bytes E8 2D FC FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        and esi, 0ffh
        push esi
        push ebx
        ; Exact mapped bytes E8 1D FC FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, 4
        add esp, 8
        cmp edi, 589a38c0h
        ; Exact mapped bytes 7C C6: jl 0x58977127
        __asm _emit 0x7c
        __asm _emit 0xc6
        mov edx, dword ptr [esp + 14h]
        mov byte ptr [edx + 80h], 1
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
