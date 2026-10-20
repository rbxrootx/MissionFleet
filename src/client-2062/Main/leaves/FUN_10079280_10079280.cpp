// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10079280 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_10079280_10079280() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea ecx, [esp + 10h]
        test edi, edi
        push eax
        push ecx
        setg bl
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp ebx, 1
        ; Exact mapped bytes 75 56: jne 0x100792ff
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea edx, [esp + 10h]
        push edi
        push edx
        push 1c5h
        ; Exact mapped bytes E8 EF 47 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 0ch]
        push eax
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 B9 B9 01 00: call 0x10094c90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        push 0
        push 0f230h
        push esi
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes E8 CA 2A FA FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 2D: jne 0x10079330
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [esp + 2ch]
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x10079315
        __asm _emit 0x75
        __asm _emit 0x0a
        push eax
        push eax
        push eax
        push 1c6h
        ; Exact mapped bytes EB 10: jmp 0x10079325
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x10079330
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 0
        push 1c7h
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 80 47 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes E8 88 2A FA FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
