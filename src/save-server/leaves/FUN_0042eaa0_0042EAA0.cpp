// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EAA0 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_0042eaa0_0042EAA0() {
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
        ; Exact mapped bytes 76 06: jbe 0x42ead5
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 12 79 03 00: call 0x4663f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x42eaf3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 83 8F 00 00 00: jae 0x42eb8e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 78 03 00: call 0x466400
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 F5 78 03 00: call 0x466400
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 ED 78 03 00: call 0x466400
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        imul esi, eax
        ; Exact mapped bytes E8 E5 78 03 00: call 0x466400
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x78
        __asm _emit 0x03
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
        ; Exact mapped bytes 74 33: je 0x42eb89
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
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x42eaea
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
        ; Exact mapped bytes E8 4C 62 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
