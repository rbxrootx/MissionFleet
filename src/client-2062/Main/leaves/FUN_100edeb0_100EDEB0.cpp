// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDEB0 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_100edeb0_100EDEB0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov eax, dword ptr [ebp]
        push edi
        mov dword ptr [esi + 1268h], eax
        mov ecx, dword ptr [ebp + 4]
        xor edi, edi
        mov dword ptr [esi + 126ch], ecx
        cmp ebx, edi
        ; Exact mapped bytes 7D 06: jge 0x100ededc
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ebx, dword ptr [esi + 5c44h]
        mov eax, 51eb851fh
        mov dword ptr [esi + 5c44h], ebx
        imul ebx
        sar edx, 5
        mov eax, edx
        mov ecx, esi
        shr eax, 1fh
        add edx, eax
        mov byte ptr [esi + 331h], dl
        ; Exact mapped bytes E8 50 D4 FF FF: call 0x100eb350
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 218h]
        mov eax, dword ptr [esi + 0e74h]
        add ebx, 384h
        mov edx, dword ptr [ecx + 44h]
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        mov eax, dword ptr [esi + 5c0ch]
        xor edx, 0aaaaaaaah
        shr ecx, 6
        and ecx, 0ffh
        mov dword ptr [eax + 9ch], edi
        mov dword ptr [eax + 0a4h], ecx
        mov ecx, 1
        mov dword ptr [eax + 0a0h], edx
        mov dword ptr [eax + 0ach], ebx
        mov dword ptr [eax + 0cch], ecx
        mov dword ptr [eax + 0c8h], edi
        mov dword ptr [eax + 58h], edi
        mov dword ptr [eax + 0bch], edi
        mov dword ptr [eax + 0c4h], 40000000h
        mov dword ptr [eax + 54h], ecx
        mov ecx, dword ptr [esi + 5c0ch]
        mov dword ptr [ecx + 0d0h], esi
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 5c0ch]
        mov ecx, dword ptr [eax + 104e0h]
        mov dword ptr [edx + 0c8h], ecx
        mov eax, dword ptr [esi + 5c0ch]
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
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 60h], ecx
        mov dword ptr [eax + 84h], ecx
        mov dword ptr [eax + 6ch], ecx
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
