// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10052AA0 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_10052aa0_10052AA0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov eax, dword ptr [esi + 0f8h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x10052b89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 194h]
        mov edx, 19h
        mov edi, 0fffeh
        mov ecx, dword ptr [eax - 64h]
        add eax, 4
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 EC: jne 0x10052ac6
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, 0fffffffeh
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 208h]
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 458h]
        mov dword ptr [esi + 45ch], eax
        mov eax, dword ptr [esi + 0e8h]
        mov dword ptr [esi + 0f8h], 40000000h
        mov dword ptr [esi + 454h], ebp
        mov edx, dword ptr [esi + eax*8 + 294h]
        mov ebx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + eax*8 + 298h]
        mov edi, edx
        sub edi, ebx
        mov ebx, eax
        sub ebx, dword ptr [ecx + 8]
        push eax
        push edx
        ; Exact mapped bytes E8 36 4F FF FF: call 0x10047a70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 44ch]
        push ebx
        push edi
        ; Exact mapped bytes E8 D9 90 FD FF: call 0x1002bc20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 984h]
        xor ecx, ecx
        cmp eax, ebp
        ; Exact mapped bytes 0F 8E BE 00 00 00: jle 0x10052c15
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esi + 774h]
        mov eax, dword ptr [edx]
        add edx, 4
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [eax + 70h], 40000000h
        add ebp, edi
        mov dword ptr [eax + 68h], ebp
        mov ebp, dword ptr [eax + 8]
        add ebp, ebx
        inc ecx
        mov dword ptr [eax + 6ch], ebp
        mov eax, dword ptr [esi + 984h]
        cmp ecx, eax
        ; Exact mapped bytes 7C D9: jl 0x10052b5d
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x10052c15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 E8 00 00 00: mov ax, word ptr [esi + 0xe8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, al
        ; Exact mapped bytes 66 89 86 AA 09 00 00: mov word ptr [esi + 0x9aa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        ; Exact mapped bytes 66 8B 14 4D B6 92 19 10: mov dx, word ptr [ecx*2 + 0x101992b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x4d
        __asm _emit 0xb6
        __asm _emit 0x92
        __asm _emit 0x19
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 46ch]
        dec eax
        ; Exact mapped bytes 66 89 96 D8 00 00 00: mov word ptr [esi + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 470h]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 66 8B 86 AA 09 00 00: mov ax, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 C0 4E 06 00: call 0x100b7aa0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 0f8h], ebp
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 2
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 458h]
        mov dword ptr [esi + 454h], 40000000h
        mov dword ptr [esi + 45ch], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 4B 11 00 00: call 0x10053d60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
