// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015C20 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_10015c20_10015C20() {
    __asm {
        ; Exact mapped bytes A1 0C 58 1C 10: mov eax, dword ptr [0x101c580c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 12: jle 0x10015c44
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10015c44
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [eax + 140h]
        ; Exact mapped bytes EB 02: jmp 0x10015c46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0ch]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 4E 8D 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 29: je 0x10015c9f
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [esi], 10175434h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 58h], 0
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
