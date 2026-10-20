// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10084FE0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_10084fe0_10084FE0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 500h
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x1008509f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        lea edi, [esi + 94h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 05 F7 07 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf7
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x10085004
        __asm _emit 0x75
        __asm _emit 0xf3
        lea edi, [esi + 6ch]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 F0 F6 07 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x10085019
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 101ace48h
        mov edx, dword ptr [ecx + 80h]
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 9ch]
        push 101ace48h
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085068
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x10085068
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0ach]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085082
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10085082
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, esi
        and edx, 0e1ffh
        or edx, 105h
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E8 F3 04 00 00: call 0x10085590
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebx
        pop esi
        ret
    }
}
