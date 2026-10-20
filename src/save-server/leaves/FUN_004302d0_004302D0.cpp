// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004302D0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004302d0_004302D0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [esp + 10h]
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        sub eax, edi
        sar eax, 1
        cmp ebp, eax
        ; Exact mapped bytes 76 0D: jbe 0x4302f4
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 AF 5A 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ebx, dword ptr [esp + 18h]
        xor edi, edi
        ; Exact mapped bytes 66 39 3B: cmp word ptr [ebx], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3b
        ; Exact mapped bytes 74 0C: je 0x43030b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, ebx
        add eax, 2
        inc edi
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 F6: jne 0x430301
        __asm _emit 0x75
        __asm _emit 0xf6
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        sub ecx, eax
        mov edx, 7ffffffeh
        sar ecx, 1
        sub edx, edi
        cmp ecx, edx
        ; Exact mapped bytes 76 0D: jbe 0x43032c
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 D7 5C 00 00: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov al, byte ptr [esp + 14h]
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 14h], al
        mov eax, dword ptr [esi]
        lea edx, [ebx + edi*2]
        push ecx
        push edx
        lea ecx, [eax + ebp*2]
        push ebx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D5 50 00 00: call 0x435420
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
