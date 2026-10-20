// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DEFF0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_100deff0_100DEFF0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 2b4h]
        and eax, 0e4fdh
        mov dword ptr [esi + 58h], 0
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100df023
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 2
        ; Exact mapped bytes 75 05: jne 0x100df028
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov edi, dword ptr [esi + 2b4h]
        mov ebx, dword ptr [esi + 30h]
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 C7 FE 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 5F FF 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [esi + 2a8h]
        push edx
        push 0ee48h
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop edi
        pop esi
        pop ebx
        ret
    }
}
