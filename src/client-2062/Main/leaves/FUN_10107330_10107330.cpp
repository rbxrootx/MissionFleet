// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10107330 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_10107330_10107330() {
    __asm {
        sub esp, 10h
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        push ebp
        mov ebp, ecx
        mov ecx, eax
        push esi
        shl ecx, 5
        sub ecx, eax
        mov eax, dword ptr [edx + 90h]
        shl ecx, 2
        add eax, ecx
        push edi
        xor esi, esi
        mov dword ptr [esp + 10h], ecx
        mov edi, dword ptr [eax + 3ch]
        mov dword ptr [esp + 14h], esi
        cmp edi, esi
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes 0F 8E F1 00 00 00: jle 0x10107460
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov edi, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 38h]
        mov ebx, esi
        and ebx, 1
        imul edi, ebx
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 0F 8E A4 00 00 00: jle 0x1010742c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, esi
        mov esi, dword ptr [esp + 28h]
        add eax, ebx
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [edx + 94h]
        mov eax, dword ptr [eax + esi*4]
        mov eax, dword ptr [eax + ecx*4]
        cmp eax, -1
        ; Exact mapped bytes 74 66: je 0x1010740b
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [esp + 2ch]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 5A: jle 0x1010740b
        __asm _emit 0x7e
        __asm _emit 0x5a
        test eax, eax
        ; Exact mapped bytes 7C 56: jl 0x1010740b
        __asm _emit 0x7c
        __asm _emit 0x56
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 4C: je 0x1010740b
        __asm _emit 0x74
        __asm _emit 0x4c
        mov esi, eax
        shl esi, 6
        add ecx, esi
        test ecx, ecx
        ; Exact mapped bytes 74 41: je 0x1010740b
        __asm _emit 0x74
        __asm _emit 0x41
        mov esi, dword ptr [esp + 1ch]
        mov edx, dword ptr [ebp]
        push esi
        push edi
        push ecx
        push eax
        mov eax, dword ptr [esp + 40h]
        mov ecx, ebp
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 34h]
        mov esi, eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 33 7D FF FF: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 38h]
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 67 7D FF FF: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        push esi
        push eax
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 99 FC FF FF: call 0x101070a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [esp + 14h]
        add eax, ecx
        inc ebx
        mov esi, dword ptr [eax + 40h]
        mov eax, dword ptr [eax + 38h]
        add edi, esi
        mov esi, dword ptr [esp + 10h]
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 5C FF FF FF: jl 0x10107388
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edx + 90h]
        mov ebx, dword ptr [esp + 1ch]
        add eax, ecx
        inc esi
        mov dword ptr [esp + 10h], esi
        mov edi, dword ptr [eax + 44h]
        add ebx, edi
        mov edi, dword ptr [eax + 3ch]
        cmp esi, edi
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 0F 8C 1F FF FF FF: jl 0x10107370
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
