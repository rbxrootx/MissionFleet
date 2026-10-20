// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C720 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_5882c720() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 170h], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5882c7dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push ebx
        push edi
        ; Exact mapped bytes E8 33 BA 0D 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xba
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 170h]
        mov edi, ebx
        sub edi, eax
        ; Exact mapped bytes E8 50 9D F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax + ebx*4 + 180h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 9D C5 F4 FF: call 0x58778d00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 118h]
        push 0ff000000h
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x5882c79a
        __asm _emit 0x74
        __asm _emit 0x27
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 64 C2 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 0b8h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edi, dword ptr [esi + edi*4 + 0ach]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes EB 26: jmp 0x5882c7c0
        __asm _emit 0xeb
        __asm _emit 0x26
        push 5898d61ch
        ; Exact mapped bytes E8 3C C2 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 0ach]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov edi, dword ptr [esi + edi*4 + 0b8h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 170h]
        ; Exact mapped bytes E8 F5 9B F5 FF: call 0x587863c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 154h]
        movzx eax, ax
        push eax
        ; Exact mapped bytes E8 86 AB 0D 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
