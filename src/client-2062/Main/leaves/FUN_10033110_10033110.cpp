// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10033110 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_10033110_10033110() {
    __asm {
        push -1
        push 1016e358h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 24h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push esi
        push edi
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 24h]
        push 0
        push 0
        push edi
        push ebx
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 62 B8 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb8
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esi], 1017523ch
        test eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x10033188
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [eax]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        push 102h
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esi], 101757fch
        ; Exact mapped bytes E8 BE BF 0C 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [ebx + ebx*4]
        ; Exact mapped bytes 66 81 66 24 FF BF: and word ptr [esi + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 70h], 0
        lea ecx, [eax + eax*4]
        lea eax, [edi + edi*4]
        shl ecx, 2
        lea edx, [eax + eax*4]
        mov dword ptr [esi + 68h], ecx
        shl edx, 2
        mov ecx, 6
        xor eax, eax
        lea edi, [esi + 74h]
        mov dword ptr [esi + 6ch], edx
        mov dword ptr [esi + 94h], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 9ch], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
