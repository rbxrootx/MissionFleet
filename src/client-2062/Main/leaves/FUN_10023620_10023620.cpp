// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023620 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_10023620_10023620() {
    __asm {
        push -1
        push 1016d8feh
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
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 1017562ch
        mov edi, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 60h]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr [esp + 18h], 2
        ; Exact mapped bytes 74 16: je 0x1002366f
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10023665
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 EA: jne 0x10023659
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [esi + 5ch]
        cmp ecx, ecx
        mov eax, ecx
        ; Exact mapped bytes 74 0E: je 0x10023689
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edi, dword ptr [eax]
        add eax, 4
        mov dword ptr [edx], edi
        add edx, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x1002367b
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [esi + 60h], edx
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esp + 0ch], ecx
        push eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 E4 90 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], ebx
        mov eax, dword ptr [esi + 5ch]
        push eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes E8 CE 90 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 8
        mov ecx, esi
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 3F F5 0D 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
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
        ret
    }
}
