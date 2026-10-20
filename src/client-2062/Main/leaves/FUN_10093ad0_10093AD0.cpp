// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10093AD0 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_10093ad0_10093AD0() {
    __asm {
        push -1
        push 10170a91h
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
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10175ef0h
        mov ecx, dword ptr [esi + 94h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], 2
        ; Exact mapped bytes 74 0C: je 0x10093b14
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 94h], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093b2a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 98h], ebp
        push ebx
        push edi
        lea edi, [esi + 0a4h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10093b45
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10093b37
        __asm _emit 0x75
        __asm _emit 0xec
        lea edi, [esi + 0ach]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10093b64
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10093b56
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, esi
        ; Exact mapped bytes E8 9F 14 00 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F8 14 00 00: call 0x10095070
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x10093b90
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0bch], ebp
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093ba6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c0h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093bbc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c4h], ebp
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093bd2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c8h], ebp
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093be8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0cch], ebp
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093bfe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d0h], ebp
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093c14
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d4h], ebp
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093c2a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d8h], ebp
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093c40
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10093c56
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ch], ebp
        mov eax, dword ptr [esi + 88h]
        push eax
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes E8 1E 8B 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [esi + 88h], ebp
        mov dword ptr [esi + 8ch], ebp
        mov dword ptr [esi + 90h], ebp
        mov eax, dword ptr [esi + 78h]
        push eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 FF 8A 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov ecx, esi
        mov dword ptr [esi + 78h], ebp
        mov dword ptr [esi + 7ch], ebp
        mov dword ptr [esi + 80h], ebp
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 FD F1 06 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        pop ebp
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
