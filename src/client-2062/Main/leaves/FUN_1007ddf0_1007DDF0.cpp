// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007DDF0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_1007ddf0_1007DDF0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x1007de3a
        __asm _emit 0x74
        __asm _emit 0x3a
        push ebx
        push edi
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 36 60 08 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov ebx, eax
        ; Exact mapped bytes E8 7C 60 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        sub eax, ebx
        mov ecx, dword ptr [esi + 8]
        imul eax, edi
        lea edx, [eax + ecx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        push edx
        ; Exact mapped bytes E8 94 0F 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0f
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        pop edi
        pop ebx
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 0C: jmp 0x1007de46
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        pop esi
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007de59
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 37 60 08 00: jmp 0x10103e90
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ret
    }
}
