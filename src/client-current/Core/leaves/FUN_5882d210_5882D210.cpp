// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D210 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_5882d210_5882D210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x5882d230
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 54 3A 02 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5882d24e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 7E: jae 0x5882d2d4
        __asm _emit 0x73
        __asm _emit 0x7e
        ; Exact mapped bytes E8 11 3A 02 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 0A 3A 02 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 02 3A 02 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 FA 39 02 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        imul esi, eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], esi
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        xor eax, 7c8ba106h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 10h]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 10h]
        mov edi, dword ptr [ebp - 4]
        mov eax, 0f3a91cd0h
        xor edx, edx
        div dword ptr [esi + edi*4]
        imul eax, eax, 1e1h
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x5882d245
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 14h], 0
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
