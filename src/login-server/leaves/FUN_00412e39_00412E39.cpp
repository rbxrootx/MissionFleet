// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412E39 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00412e39_00412E39() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 35 FD FF FF: call 0x412b7c
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x412e59
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [esi + 0fch], eax
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x412eed
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x412eed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100h]
        push edi
        mov edi, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x412e7d
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, edi
        ; Exact mapped bytes 72 08: jb 0x412e7d
        __asm _emit 0x72
        __asm _emit 0x08
        mov dword ptr [esi + 0fch], edi
        ; Exact mapped bytes EB 5F: jmp 0x412edc
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, esi
        ; Exact mapped bytes E8 20 0D 00 00: call 0x413ba4
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + edi]
        push eax
        ; Exact mapped bytes E8 5F AA 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esi + 2dh], 4
        pop ecx
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes 75 42: jne 0x412edc
        __asm _emit 0x75
        __asm _emit 0x42
        push ebx
        push 0
        push esi
        push 0fh
        lea ecx, [ebp - 38h]
        mov dword ptr [esi + 0fch], edi
        ; Exact mapped bytes E8 C1 25 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        mov ebx, dword ptr [esi + 0e8h]
        and dword ptr [esi + 0e8h], 0
        mov dword ptr [esi + 100h], edi
        lea edi, [esi + 0e8h]
        mov ecx, esi
        ; Exact mapped bytes E8 4C 11 00 00: call 0x414025
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi], ebx
        pop ebx
        push dword ptr [esi + 0fch]
        push 9
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 9C 96 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
