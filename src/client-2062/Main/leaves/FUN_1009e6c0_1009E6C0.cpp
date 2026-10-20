// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E6C0 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_1009e6c0_1009E6C0() {
    __asm {
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 24h]
        xor ebx, ebx
        push edi
        mov edx, dword ptr [esi + eax*4 + 0cf4h]
        cmp edx, ebx
        ; Exact mapped bytes 74 07: je 0x1009e6e7
        __asm _emit 0x74
        __asm _emit 0x07
        mov dl, byte ptr [edx]
        and edx, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1009e6e9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        and edx, 0ffffh
        mov edi, edx
        xor edx, edx
        mov dl, byte ptr [esi + eax + 1d8h]
        mov dword ptr [esp + 1ch], edi
        mov ebp, edx
        xor edx, edx
        mov dl, byte ptr [esi + eax + 1f8h]
        cmp edi, 5
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 14h], ebp
        lea edx, [edx + ebp*2]
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes 75 06: jne 0x1009e723
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes EB 0D: jmp 0x1009e730
        __asm _emit 0xeb
        __asm _emit 0x0d
        xor edx, edx
        cmp edi, 6
        setne dl
        inc edx
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esp + 2ch]
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [ecx + eax*8 + 190h], edx
        mov edx, dword ptr [esp + 30h]
        mov dword ptr [ecx + eax*8 + 194h], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, ebp
        mov esi, 9cch
        mov ebx, dword ptr [eax + 4]
        lea edi, [ecx + 194h]
        mov dword ptr [esp + 2ch], ebx
        add ebx, 1f8h
        mov eax, dword ptr [esp + 14h]
        xor edx, edx
        mov dl, byte ptr [ebx - 20h]
        cmp eax, edx
        ; Exact mapped bytes 75 42: jne 0x1009e7b8
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [esp + 18h]
        xor eax, eax
        mov al, byte ptr [ebx]
        cmp edx, eax
        ; Exact mapped bytes 75 36: jne 0x1009e7b8
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esi + edx + 328h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1009e798
        __asm _emit 0x74
        __asm _emit 0x07
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes EB 02: jmp 0x1009e79a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 1ch]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 75 11: jne 0x1009e7b8
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [edi - 4]
        mov edx, dword ptr [esp + 28h]
        add ebp, eax
        mov eax, dword ptr [edi]
        add edx, eax
        mov dword ptr [esp + 28h], edx
        add esi, 4
        inc ebx
        add edi, 8
        cmp esi, 0a4ch
        ; Exact mapped bytes 7C A2: jl 0x1009e769
        __asm _emit 0x7c
        __asm _emit 0xa2
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 20h]
        lea edx, [edx + eax*2]
        mov ecx, dword ptr [ecx + edx*4 + 7ch]
        mov edx, dword ptr [esp + 28h]
        push edx
        push ebp
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
