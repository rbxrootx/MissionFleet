// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004357F3 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004357f3_004357F3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        test esi, esi
        ; Exact mapped bytes 74 4A: je 0x43584a
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
        ; Exact mapped bytes 7D 22: jge 0x435832
        __asm _emit 0x7d
        __asm _emit 0x22
        cmp edi, 1
        ; Exact mapped bytes 74 1D: je 0x435832
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
        ; Exact mapped bytes E8 C2 E8 FF FF: call 0x4340ea
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        ; Exact mapped bytes EB 48: jmp 0x43587a
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 8B 3D A8 C0 43 00: mov edi, dword ptr [0x43c0a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 58h
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 5ah
        mov ebx, eax
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 0B: jmp 0x435855
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 1D A0 FB 44 00: mov ebx, dword ptr [0x44fba0]
        __asm _emit 0x8b
        __asm _emit 0x1d
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
        ; Exact mapped bytes 8B 3D D0 C1 43 00: mov edi, dword ptr [0x43c1d0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        mov ebx, 9ech
        push ebx
        mov dword ptr [ebp - 4], eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push dword ptr [ebp - 4]
        mov dword ptr [esi], eax
        push ebx
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
