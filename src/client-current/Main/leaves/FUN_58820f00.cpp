// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820F00 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58820f00() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebp, ebp
        xor ebx, ebx
        lea edi, [esi + 64h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea eax, [esi + 64h]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x58820f2b
        __asm _emit 0x74
        __asm _emit 0x14
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 21 F5 FF FF: call 0x58820440
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 86 98 0C 00 00: movsx eax, word ptr [esi + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 0C: je 0x58820f37
        __asm _emit 0x74
        __asm _emit 0x0c
        inc ebx
        add edi, 18h
        cmp ebx, 80h
        ; Exact mapped bytes 7C D9: jl 0x58820f10
        __asm _emit 0x7c
        __asm _emit 0xd9
        mov ecx, dword ptr [esi + 30h]
        push esi
        ; Exact mapped bytes E8 A0 8A 02 00: call 0x588499e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 A5 78 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 9A 78 0E 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        pop edi
        mov ecx, esi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
