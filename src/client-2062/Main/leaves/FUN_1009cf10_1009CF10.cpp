// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009CF10 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_1009cf10_1009CF10() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 4]
        and eax, 0e4fdh
        mov dword ptr [edi + 50h], ecx
        or eax, 405h
        mov dword ptr [edi + 54h], 400h
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0ach]
        mov dword ptr [eax + 50h], 0
        mov dword ptr [eax + 54h], 0ffffffc4h
        mov ecx, dword ptr [edi + 0ach]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ebx, 3dh
        lea esi, [edi + 80h]
        mov eax, dword ptr [edi + 54h]
        mov ecx, dword ptr [esi - 4]
        add eax, 68h
        push eax
        push ebx
        ; Exact mapped bytes E8 92 A7 FA FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 54h]
        add ecx, 9ah
        push ecx
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 80 A7 FA FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi - 4]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        add ebx, 4ch
        add esi, 8
        cmp ebx, 16dh
        ; Exact mapped bytes 7C C1: jl 0x1009cf5e
        __asm _emit 0x7c
        __asm _emit 0xc1
        mov ecx, dword ptr [edi + 2a8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [edi + 74h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [edi + 78h]
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ret
    }
}
