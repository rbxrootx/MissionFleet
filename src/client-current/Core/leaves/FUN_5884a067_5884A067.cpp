// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A067 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_5884a067_5884A067() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 4A FB FF FF: call 0x58849bc0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        mov ebx, dword ptr [ebp + 10h]
        pop ecx
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5884a109
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1af68h]
        lea esi, [edi + 1af64h]
        dec eax
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 72 0F: jb 0x5884a0a4
        __asm _emit 0x72
        __asm _emit 0x0f
        push esi
        push dword ptr [edi + 1af60h]
        push dword ptr [edi]
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        add esp, 0ch
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi + 1af60h]
        mov byte ptr [ecx + eax], bl
        mov ecx, ebx
        inc dword ptr [esi]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edi + 1af60h]
        shr ecx, 8
        mov byte ptr [edx + eax], cl
        inc dword ptr [esi]
        mov eax, dword ptr [edi + 1af68h]
        dec eax
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 72 0F: jb 0x5884a0dd
        __asm _emit 0x72
        __asm _emit 0x0f
        push esi
        push dword ptr [edi + 1af60h]
        push dword ptr [edi]
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        add esp, 0ch
        mov eax, dword ptr [esi]
        mov dl, bl
        mov ecx, dword ptr [edi + 1af60h]
        not dl
        mov byte ptr [ecx + eax], dl
        mov ecx, ebx
        inc dword ptr [esi]
        not ecx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edi + 1af60h]
        shr ecx, 8
        mov byte ptr [edx + eax], cl
        inc dword ptr [esi]
        add dword ptr [edi + 1af6ch], 20h
        cmp dword ptr [edi + 1af54h], 0
        ; Exact mapped bytes 74 22: je 0x5884a134
        __asm _emit 0x74
        __asm _emit 0x22
        lea esi, [edi + 1af64h]
        push esi
        push dword ptr [edi + 1af60h]
        push dword ptr [edi]
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        push esi
        push dword ptr [ebp + 0ch]
        mov dword ptr [esi], ebx
        push dword ptr [edi]
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        add esp, 18h
        ; Exact mapped bytes EB 3E: jmp 0x5884a172
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [edi + 1af64h]
        lea eax, [ecx + ebx]
        cmp eax, dword ptr [edi + 1af68h]
        ; Exact mapped bytes 76 12: jbe 0x5884a157
        __asm _emit 0x76
        __asm _emit 0x12
        push 588c248ch
        push 0
        push edi
        ; Exact mapped bytes E8 3E F4 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 1B: jmp 0x5884a172
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [edi + 1af60h]
        push ebx
        push dword ptr [ebp + 0ch]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 27 27 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        add dword ptr [edi + 1af64h], ebx
        mov eax, ebx
        shl eax, 3
        add dword ptr [edi + 1af6ch], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
