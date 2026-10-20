// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430743 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_00430743_00430743() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, ecx
        mov ebx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes FF 15 E0 C4 43 00: call dword ptr [0x43c4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        movzx eax, ax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 8]
        push 435d3bh
        mov ecx, 44dcc0h
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E8 3E 66 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b8h]
        cmp eax, dword ptr [edi + 1ch]
        ; Exact mapped bytes 74 0D: je 0x43078d
        __asm _emit 0x74
        __asm _emit 0x0d
        push dword ptr [ebp + 10h]
        push ebx
        ; Exact mapped bytes E8 B5 02 00 00: call 0x430a3e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x430792
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 24: jmp 0x4307b6
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [ebp - 0ch]
        push 0
        push ecx
        movzx ecx, word ptr [ebp + 0ch]
        or ecx, 4e0000h
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [edi]
        push ecx
        push dword ptr [ebp - 4]
        mov ecx, edi
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
