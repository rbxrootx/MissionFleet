// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041BB16 .. +0x1AA bytes.
extern "C" __declspec(naked) void FUN_0041bb16_0041BB16() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 48h], edi
        ; Exact mapped bytes 74 11: je 0x41bb38
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes E8 94 01 00 00: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x41bcbc
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 40h], edi
        push ebx
        ; Exact mapped bytes 74 39: je 0x41bb77
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [esi + 38h], edi
        ; Exact mapped bytes 7E 17: jle 0x41bb5a
        __asm _emit 0x7e
        __asm _emit 0x17
        xor ebx, ebx
        mov eax, ebx
        add eax, dword ptr [esi + 40h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        inc edi
        add ebx, 10h
        cmp edi, dword ptr [esi + 38h]
        ; Exact mapped bytes 7C EB: jl 0x41bb45
        __asm _emit 0x7c
        __asm _emit 0xeb
        cmp dword ptr [esi + 38h], 0
        ; Exact mapped bytes 7E 12: jle 0x41bb72
        __asm _emit 0x7e
        __asm _emit 0x12
        push dword ptr [esi + 40h]
        ; Exact mapped bytes E8 AD 1D 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 3ch]
        ; Exact mapped bytes E8 A5 1D 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor edi, edi
        mov dword ptr [esi + 40h], edi
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [esi + 38h], edi
        cmp ecx, edi
        ; Exact mapped bytes 7E 14: jle 0x41bb95
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [esi + 14h]
        add eax, 24h
        mov edx, dword ptr [eax]
        add eax, 28h
        mov edx, dword ptr [edx + 0ch]
        add dword ptr [esi + 38h], edx
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x41bb87
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 38h]
        cmp eax, edi
        ; Exact mapped bytes 7E 10: jle 0x41bbac
        __asm _emit 0x7e
        __asm _emit 0x10
        lea eax, [eax + eax*2]
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 44 1D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 3ch], eax
        xor edi, edi
        cmp dword ptr [esi + 10h], edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [ebp - 0ch], edi
        ; Exact mapped bytes 0F 8E 98 00 00 00: jle 0x41bc55
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edi
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + eax + 24h]
        mov ebx, dword ptr [eax + 4]
        test ebx, ebx
        ; Exact mapped bytes 74 71: je 0x41bc42
        __asm _emit 0x74
        __asm _emit 0x71
        lea edi, [edi + edi*2]
        shl edi, 4
        mov eax, ebx
        mov ebx, dword ptr [ebx]
        mov ecx, esi
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [esi + 14h]
        push eax
        mov eax, dword ptr [esi + 3ch]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 DE FC FF FF: call 0x41b8d3
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + 3ch]
        shl eax, 4
        mov dword ptr [ecx + edi + 18h], eax
        mov eax, dword ptr [esi + 3ch]
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [eax + edi + 1ch], 0
        mov eax, dword ptr [esi + 3ch]
        or dword ptr [eax + edi + 24h], 0ffffffffh
        mov eax, dword ptr [esi + 3ch]
        or dword ptr [eax + edi + 20h], 0ffffffffh
        mov eax, dword ptr [esi + 3ch]
        inc dword ptr [ebp - 4]
        mov dword ptr [eax + edi + 28h], 1
        mov eax, dword ptr [esi + 3ch]
        mov ecx, dword ptr [ecx + 98h]
        mov dword ptr [eax + edi + 2ch], ecx
        add edi, 30h
        test ebx, ebx
        ; Exact mapped bytes 75 98: jne 0x41bbd7
        __asm _emit 0x75
        __asm _emit 0x98
        mov edi, dword ptr [ebp - 4]
        inc dword ptr [ebp - 0ch]
        add dword ptr [ebp - 8], 28h
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 0F 8C 6B FF FF FF: jl 0x41bbc0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 38h]
        mov eax, dword ptr [esi + 8]
        mov edi, ecx
        push 0
        mov edx, dword ptr [eax]
        shl edi, 4
        push edi
        push dword ptr [esi + 3ch]
        push ecx
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov eax, dword ptr [esi + 38h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 0D: je 0x41bc83
        __asm _emit 0x74
        __asm _emit 0x0d
        shl eax, 4
        push eax
        ; Exact mapped bytes E8 6D 1C 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 40h], eax
        xor edi, edi
        cmp dword ptr [esi + 38h], ebx
        ; Exact mapped bytes 7E 23: jle 0x41bcad
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, ebx
        push 10h
        add eax, dword ptr [esi + 40h]
        push 0
        push eax
        ; Exact mapped bytes E8 47 2E 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40h]
        add esp, 0ch
        ; Exact mapped bytes 66 83 24 03 00: and word ptr [ebx + eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        inc edi
        add ebx, 10h
        cmp edi, dword ptr [esi + 38h]
        ; Exact mapped bytes 7C DD: jl 0x41bc8a
        __asm _emit 0x7c
        __asm _emit 0xdd
        mov ecx, esi
        ; Exact mapped bytes E8 0C 00 00 00: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        pop ebx
        pop edi
        pop esi
        leave
        ret
    }
}
