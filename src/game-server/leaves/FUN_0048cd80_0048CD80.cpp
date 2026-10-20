// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048CD80 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_0048cd80_0048CD80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        push edi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x48cdb5
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 32 CA 01 00: call 0x4a97f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x48cdd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x48ce6e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C CA 01 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 15 CA 01 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 0D CA 01 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 05 CA 01 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        imul esi, eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], esi
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        xor eax, 7c8ba106h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 33: je 0x48ce69
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [edx + 0ch]
        mov edi, dword ptr [ebp - 4]
        mov eax, 0f3a91cd0h
        xor edx, edx
        div dword ptr [esi + edi*4]
        imul eax, eax, 1e1h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + edx*4]
        add ecx, eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x48cdca
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 10h], 0
        pop edi
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5C B9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
