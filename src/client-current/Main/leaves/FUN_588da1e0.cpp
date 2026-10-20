// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DA1E0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_588da1e0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        mov eax, dword ptr [ebp]
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi + 1684h], eax
        mov ecx, dword ptr [ebp + 4]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr [esi + 1688h], ecx
        ; Exact mapped bytes 7D 06: jge 0x588da20c
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ebx, dword ptr [esi + 6060h]
        mov eax, 51eb851fh
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov ecx, esi
        mov dword ptr [esi + 6060h], ebx
        mov byte ptr [esi + 355h], al
        ; Exact mapped bytes E8 50 DE FF FF: call 0x588d8080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 23ch]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [esi + 100ch]
        movzx ecx, word ptr [eax + 8]
        mov eax, dword ptr [esi + 6028h]
        mov dword ptr [eax + 9ch], edi
        mov dword ptr [eax + 0c8h], edi
        mov dword ptr [eax + 58h], edi
        mov dword ptr [eax + 0bch], edi
        mov dword ptr [eax + 0c4h], 40000000h
        shr ecx, 6
        and ecx, 0ffh
        mov dword ptr [eax + 0a4h], ecx
        xor edx, 0aaaaaaaah
        mov dword ptr [eax + 0a0h], edx
        mov ecx, 1
        mov dword ptr [eax + 0cch], ecx
        mov dword ptr [eax + 54h], ecx
        add ebx, 384h
        mov dword ptr [eax + 0ach], ebx
        mov ecx, dword ptr [esi + 6028h]
        mov dword ptr [ecx + 0d0h], esi
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10524h]
        mov edx, dword ptr [esi + 6028h]
        mov dword ptr [edx + 0c8h], ecx
        mov eax, dword ptr [esi + 6028h]
        mov dword ptr [eax + 5ch], edi
        mov dword ptr [eax + 8ch], edi
        mov dword ptr [eax + 7ch], edi
        mov dword ptr [eax + 90h], edi
        mov dword ptr [eax + 80h], edi
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [eax + 64h], ecx
        mov dword ptr [eax + 88h], ecx
        mov dword ptr [eax + 70h], ecx
        mov ecx, dword ptr [ebp]
        mov dword ptr [eax + 60h], ecx
        mov dword ptr [eax + 84h], ecx
        mov dword ptr [eax + 6ch], ecx
        cmp dword ptr [esi + 6070h], edi
        ; Exact mapped bytes 74 12: je 0x588da316
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [esi + 6028h]
        mov eax, dword ptr [esi + 6060h]
        mov dword ptr [edx + 0ach], eax
        ; Exact mapped bytes 66 8B 8E 60 60 00 00: mov cx, word ptr [esi + 0x6060]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        pop edi
        ; Exact mapped bytes 66 89 8E F0 64 00 00: mov word ptr [esi + 0x64f0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 64f4h], edx
        mov dword ptr [esi + 64f8h], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
