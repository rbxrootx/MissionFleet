// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F150 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_5882f150() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 7d0h
        ; Exact mapped bytes 73 14: jae 0x5882f170
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 1
        push esi
        ; Exact mapped bytes E8 16 6D F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0bb8h
        ; Exact mapped bytes 73 14: jae 0x5882f18b
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 2
        push esi
        ; Exact mapped bytes E8 FB 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0fa0h
        ; Exact mapped bytes 73 14: jae 0x5882f1a6
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 3
        push esi
        ; Exact mapped bytes E8 E0 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1388h
        ; Exact mapped bytes 73 14: jae 0x5882f1c1
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 4
        push esi
        ; Exact mapped bytes E8 C5 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1770h
        ; Exact mapped bytes 73 14: jae 0x5882f1dc
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 5
        push esi
        ; Exact mapped bytes E8 AA 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1b58h
        ; Exact mapped bytes 73 14: jae 0x5882f1f7
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 6
        push esi
        ; Exact mapped bytes E8 8F 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1f40h
        ; Exact mapped bytes 73 14: jae 0x5882f212
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 7
        push esi
        ; Exact mapped bytes E8 74 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2328h
        ; Exact mapped bytes 73 14: jae 0x5882f22d
        __asm _emit 0x73
        __asm _emit 0x14
        mov ecx, dword ptr [ecx + 6ch]
        mov esi, 8
        push esi
        ; Exact mapped bytes E8 59 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 6ch]
        cmp eax, 2710h
        sbb esi, esi
        add esi, 0ah
        push esi
        ; Exact mapped bytes E8 40 6C F5 FF: call 0x58785e80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
