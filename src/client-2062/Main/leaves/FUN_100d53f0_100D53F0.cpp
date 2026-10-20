// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D53F0 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_100d53f0_100D53F0() {
    __asm {
        push -1
        push 10173278h
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
        push ebx
        mov ebx, ecx
        push ebp
        push edi
        mov dword ptr [esp + 0ch], ebx
        mov dword ptr [ebx], 10176454h
        mov ecx, dword ptr [ebx + 64h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 09: je 0x100d542b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 64h], ebp
        mov ecx, dword ptr [ebx + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d543b
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 68h], ebp
        mov ecx, dword ptr [ebx + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d544b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 6ch], ebp
        mov ecx, dword ptr [ebx + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100d545b
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 70h], ebp
        push esi
        lea esi, [ebx + 74h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100d5472
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100d5464
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 7ch]
        mov ebp, 6
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100d5497
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x100d5485
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebp
        ; Exact mapped bytes 75 E0: jne 0x100d5480
        __asm _emit 0x75
        __asm _emit 0xe0
        mov esi, 6
        mov ecx, dword ptr [ebx + 0c4h]
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100d54bd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0c4h], edi
        dec esi
        ; Exact mapped bytes 75 E5: jne 0x100d54a5
        __asm _emit 0x75
        __asm _emit 0xe5
        mov ecx, dword ptr [ebx + 60h]
        pop esi
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100d54d1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 60h], edi
        mov ecx, ebx
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 C0 D9 02 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop ebp
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
        ret
    }
}
