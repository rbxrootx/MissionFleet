// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10099590 .. +0x18B bytes.
extern "C" __declspec(naked) void FUN_10099590_10099590() {
    __asm {
        push -1
        push 10170dd8h
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
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [ecx], 10175f5ch
        xor ebp, ebp
        lea esi, [ecx + 244h]
        mov dword ptr [esp + 1ch], ebp
        mov ebx, 6
        mov edi, 2
        mov ecx, dword ptr [esi - 30h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100995da
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 30h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100995e8
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 DC: jne 0x100995ca
        __asm _emit 0x75
        __asm _emit 0xdc
        dec ebx
        ; Exact mapped bytes 75 D4: jne 0x100995c5
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [esp + 10h]
        mov ebx, 0fh
        lea esi, [eax + 19ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10099613
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10099605
        __asm _emit 0x75
        __asm _emit 0xec
        dec ebx
        ; Exact mapped bytes 75 E4: jne 0x10099600
        __asm _emit 0x75
        __asm _emit 0xe4
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 184h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10099636
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 184h], ebp
        add esi, 64h
        mov ebx, 0fh
        mov edi, 3
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10099651
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10099643
        __asm _emit 0x75
        __asm _emit 0xec
        dec ebx
        ; Exact mapped bytes 75 E4: jne 0x1009963e
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [esp + 10h]
        mov edi, 0fh
        lea esi, [eax + 118h]
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10099677
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10099669
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esp + 10h]
        mov ebx, 6
        lea esi, [eax + 154h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1009969f
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10099691
        __asm _emit 0x75
        __asm _emit 0xec
        dec ebx
        ; Exact mapped bytes 75 E4: jne 0x1009968c
        __asm _emit 0x75
        __asm _emit 0xe4
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 188h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100996c2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 188h], ebp
        add esi, 18ch
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100996db
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100996cd
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x100996f9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax + 60h], ebp
        mov ecx, eax
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 98 97 06 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
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
