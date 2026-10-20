// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FFAF .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_0042ffaf_0042FFAF() {
    __asm {
        mov eax, 43a8b8h
        ; Exact mapped bytes E8 4F F6 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 F0 5C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 E5 5C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 BF 1B 00 00: call 0x431b95
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x42fff3
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 8B 3D 4C C5 43 00: mov edi, dword ptr [0x43c54c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        push ebx
        push 1fh
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        push 1
        push ebx
        push ebx
        push 1fh
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 0F 09 00 00: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 26 08 00 00: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov esi, eax
        push ebx
        push 1fh
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        push 1
        push ebx
        push ebx
        push 1fh
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 ED 08 00 00: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 28 C4 43 00: call dword ptr [0x43c428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x430046
        __asm _emit 0x74
        __asm _emit 0x07
        push ebx
        push ebx
        push 1fh
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 8ch]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 2C C4 43 00: call dword ptr [0x43c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        pop edi
        ; Exact mapped bytes 75 0D: jne 0x430070
        __asm _emit 0x75
        __asm _emit 0x0d
        push -1
        push ebx
        push 0f107h
        ; Exact mapped bytes E8 DF 4C 00 00: call 0x434d4f
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 3A 5C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 29 1B 00 00: call 0x431baa
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
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
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
