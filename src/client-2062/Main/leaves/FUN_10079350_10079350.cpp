// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10079350 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_10079350_10079350() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 8B 3D A8 50 17 10: mov edi, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 58h]
        mov eax, dword ptr [eax + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x10079374
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        ret
        mov eax, dword ptr [esi + 58h]
        mov eax, dword ptr [eax + 80h]
        push eax
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x100793c1
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push eax
        push eax
        push 1c9h
        ; Exact mapped bytes E8 10 47 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes E8 10 2A FA FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 58h]
        pop edi
        or byte ptr [eax + 24h], 1
        mov esi, dword ptr [esi + 58h]
        or byte ptr [esi + 24h], 2
        pop esi
        ret
        mov eax, dword ptr [esi + 58h]
        mov eax, dword ptr [eax + 80h]
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 4
        ; Exact mapped bytes 7D 19: jge 0x100793eb
        __asm _emit 0x7d
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1c3h
        ; Exact mapped bytes E8 C8 46 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 80h]
        mov ecx, dword ptr [edx + 0d8h]
        push eax
        ; Exact mapped bytes E8 5A B6 01 00: call 0x10094a60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x10079423
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 207h
        ; Exact mapped bytes E8 90 46 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        ret
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C8 37 FD FF: call 0x1004cc00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        ret
    }
}
