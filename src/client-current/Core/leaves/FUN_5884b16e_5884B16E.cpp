// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B16E .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_5884b16e_5884B16E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        xor esi, esi
        mov dword ptr [ebp - 28h], eax
        push edi
        mov edx, esi
        lea edi, [ebx + 0fe4h]
        inc ecx
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        lea edi, [edi + 2]
        ; Exact mapped bytes 66 03 C2: add ax, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 66 03 C0: add ax, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xc0
        movzx edx, ax
        ; Exact mapped bytes 66 89 54 4D DC: mov word ptr [ebp + ecx*2 - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xdc
        inc ecx
        cmp ecx, 0fh
        ; Exact mapped bytes 7E E6: jle 0x5884b197
        __asm _emit 0x7e
        __asm _emit 0xe6
        movzx ecx, word ptr [ebx + 1002h]
        add ecx, edx
        cmp ecx, 8000h
        push 588c2404h
        sete al
        movzx eax, al
        push eax
        push ebx
        ; Exact mapped bytes E8 BE E3 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 10h], esi
        ; Exact mapped bytes 7C 2C: jl 0x5884b206
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov edi, dword ptr [ebp - 28h]
        movzx edx, word ptr [edi + esi*4 + 2]
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x5884b200
        __asm _emit 0x74
        __asm _emit 0x1a
        movzx eax, word ptr [ebp + edx*2 - 24h]
        mov ecx, eax
        inc eax
        push edx
        push ecx
        ; Exact mapped bytes 66 89 44 55 DC: mov word ptr [ebp + edx*2 - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes E8 A3 E9 FF FF: call 0x58849b9d
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes 66 89 04 B7: mov word ptr [edi + esi*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xb7
        inc esi
        cmp esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E D7: jle 0x5884b1dd
        __asm _emit 0x7e
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 3D 5E FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
