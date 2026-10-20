// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D1E4 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0041d1e4_0041D1E4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 8], 80010001h
        ; Exact mapped bytes 74 70: je 0x41d264
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x41d264
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [eax + 4ch]
        lea edx, [ebp - 4]
        push edx
        push 440820h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 24: jl 0x41d233
        __asm _emit 0x7c
        __asm _emit 0x24
        lea edx, [esi + 10h]
        mov eax, dword ptr [ebp - 4]
        push edx
        xor edx, edx
        cmp dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax]
        setne dl
        push edx
        push dword ptr [esi + 8]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 31: jmp 0x41d264
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, esi
        ; Exact mapped bytes E8 2D 00 00 00: call 0x41d267
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x41d264
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 0ch]
        push 0dh
        pop edx
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 05: je 0x41d252
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, 800dh
        mov ecx, dword ptr [esi]
        push edi
        push eax
        push edx
        push dword ptr [esi + 8]
        mov edi, dword ptr [ecx]
        push ecx
        ; Exact mapped bytes FF 57 68: call dword ptr [edi + 0x68]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x68
        add esp, 10h
        pop edi
        pop esi
        leave
        ret
    }
}
