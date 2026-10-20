// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D92E .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_0041d92e_0041D92E() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        xor ebx, ebx
        test esi, esi
        push edi
        ; Exact mapped bytes 74 44: je 0x41d97f
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 3D 14 C5 43 00: mov edi, dword ptr [0x43c514]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push -10h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        and eax, 0c0000000h
        cmp eax, 40000000h
        ; Exact mapped bytes 75 2B: jne 0x41d97f
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 25: je 0x41d97f
        __asm _emit 0x74
        __asm _emit 0x25
        push dword ptr [esi + 1ch]
        mov ebx, esi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6D 19 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        push -14h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, 10000h
        ; Exact mapped bytes 75 04: jne 0x41d97f
        __asm _emit 0x75
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 C2: jne 0x41d941
        __asm _emit 0x75
        __asm _emit 0xc2
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
