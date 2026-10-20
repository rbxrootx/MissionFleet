// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435881 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00435881_00435881() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        test esi, esi
        ; Exact mapped bytes 74 4A: je 0x4358d8
        __asm _emit 0x74
        __asm _emit 0x4a
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 15 B4 C0 43 00: call dword ptr [0x43c0b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, 7
        ; Exact mapped bytes 7D 22: jge 0x4358c0
        __asm _emit 0x7d
        __asm _emit 0x22
        cmp edi, 1
        ; Exact mapped bytes 74 1D: je 0x4358c0
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [esi]
        push 3
        mov ecx, esi
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 CB E7 FF FF: call 0x434081
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        ; Exact mapped bytes EB 48: jmp 0x435908
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 8B 1D A8 C0 43 00: mov ebx, dword ptr [0x43c0a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 58h
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 5ah
        mov edi, eax
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes EB 0B: jmp 0x4358e3
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 3D A0 FB 44 00: mov edi, dword ptr [0x44fba0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 FB 44 00: mov eax, dword ptr [0x44fba4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov ebx, 9ech
        push ebx
        push edi
        push dword ptr [esi]
        ; Exact mapped bytes 8B 3D D0 C1 43 00: mov edi, dword ptr [0x43c1d0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        mov dword ptr [esi], eax
        push dword ptr [ebp - 4]
        push dword ptr [esi + 4]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 4], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
