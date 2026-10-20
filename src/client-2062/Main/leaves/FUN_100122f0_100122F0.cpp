// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100122F0 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_100122f0_100122F0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        sub esp, 8
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 06: je 0x10012307
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 84h], eax
        mov ebp, dword ptr [esp + 20h]
        mov eax, dword ptr [esi + 60h]
        lea edx, [esp + 10h]
        mov ecx, dword ptr [eax + ebp*4]
        mov eax, dword ptr [esp + 1ch]
        push edx
        push eax
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov edx, dword ptr [esi + 60h]
        test ebp, ebp
        mov eax, dword ptr [edx + ebp*4]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 14h]
        lea ecx, [ecx + edx + 12h]
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 0F: je 0x1001235c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 1ch]
        sub edx, ecx
        lea edi, [eax + 12h]
        cmp edx, edi
        ; Exact mapped bytes 7D 0A: jge 0x10012366
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 14h]
        lea eax, [ecx + eax + 12h]
        mov dword ptr [esi + 1ch], eax
        lea edx, [ebp + 1]
        mov eax, dword ptr [esi + 18h]
        imul edx, dword ptr [esp + 14h]
        lea edx, [edx + eax + 10h]
        mov eax, dword ptr [esi + 78h]
        test eax, eax
        mov dword ptr [esi + 20h], edx
        ; Exact mapped bytes 75 17: jne 0x10012396
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 1ch]
        sub eax, ecx
        mov ecx, dword ptr [esi + 40h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 6ch]
        sar eax, 1
        sub edx, eax
        ; Exact mapped bytes EB 10: jmp 0x100123a6
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [esi + 40h]
        mov ebx, dword ptr [esi + 1ch]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 6ch]
        add edx, eax
        sub edx, ebx
        add edx, ecx
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 A0 C9 0E 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40h]
        mov ebx, dword ptr [esi + 70h]
        mov edi, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [eax + 8]
        add ecx, edx
        mov edx, dword ptr [esi + 18h]
        add ecx, ebx
        sub ecx, edi
        lea eax, [ecx + edx - 50h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 EC C9 0E 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 8]
        xor edi, edi
        add ebx, 7
        test ebp, ebp
        ; Exact mapped bytes 7C 21: jl 0x10012401
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 60h]
        push ebx
        mov eax, dword ptr [ecx + edi*4]
        or byte ptr [eax + 24h], 1
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [edx + edi*4]
        ; Exact mapped bytes E8 CA C9 0E 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        add ebx, edx
        inc edi
        cmp edi, ebp
        ; Exact mapped bytes 7E DF: jle 0x100123e0
        __asm _emit 0x7e
        __asm _emit 0xdf
        cmp edi, dword ptr [esi + 74h]
        ; Exact mapped bytes 7D 17: jge 0x1001241d
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, 0fffeh
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + edi*4]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 7C EE: jl 0x1001240b
        __asm _emit 0x7c
        __asm _emit 0xee
        mov ecx, dword ptr [esi + 60h]
        or byte ptr [esi + 24h], 5
        mov dword ptr [esi + 64h], 0
        mov eax, dword ptr [ecx + ebp*4]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x10012445
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10012445
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esp + 24h]
        pop edi
        pop esi
        mov eax, dword ptr [edx + ebp*4]
        pop ebp
        pop ebx
        mov dword ptr [eax + 60h], ecx
        add esp, 8
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
