// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C78C0 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_587c78c0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 50h], 40000000h
        push edi
        ; Exact mapped bytes 75 1D: jne 0x587c78ee
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x587c78ee
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 AD 00 14 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + edi*4 + 0ach]
        mov ecx, dword ptr [esi + 0a0h]
        add dword ptr [eax + 50h], ecx
        mov ebp, 1
        add dword ptr [esi + edi*4 + 5ch], ebp
        mov eax, dword ptr [esi + edi*4 + 5ch]
        cmp eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x587c79da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + edi*4 + 5ch], ebx
        mov ecx, esi
        cmp dword ptr [esi + 9ch], ebx
        ; Exact mapped bytes 74 40: je 0x587c796b
        __asm _emit 0x74
        __asm _emit 0x40
        push ebp
        push edi
        ; Exact mapped bytes E8 EE FE FF FF: call 0x587c7820
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + eax*4]
        add edx, edx
        sub ecx, edx
        ; Exact mapped bytes 75 14: jne 0x587c7962
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [esi + edi*4 + 0ach]
        mov dword ptr [esi + edi*4 + 7ch], ebp
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [eax + 50h], ecx
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes E8 AE FE FF FF: call 0x587c7820
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + eax*4]
        add edx, edx
        sub ecx, edx
        ; Exact mapped bytes 75 06: jne 0x587c7994
        __asm _emit 0x75
        __asm _emit 0x06
        mov ebx, ebp
        mov dword ptr [esi + edi*4 + 7ch], ebx
        cmp dword ptr [esi + edi*4 + 7ch], 0
        ; Exact mapped bytes 75 10: jne 0x587c79ab
        __asm _emit 0x75
        __asm _emit 0x10
        dec dword ptr [esi + 0c0h]
        mov dword ptr [esi + 90h], 0
        test ebx, ebx
        ; Exact mapped bytes 74 B3: je 0x587c7962
        __asm _emit 0x74
        __asm _emit 0xb3
        mov eax, dword ptr [esi + 0a8h]
        inc eax
        imul eax, dword ptr [esi + 94h]
        mov dword ptr [esi + 90h], 40000000h
        mov edi, dword ptr [esi + edi*4 + 0ach]
        add dword ptr [edi + 50h], eax
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
