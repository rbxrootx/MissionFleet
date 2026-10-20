// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100547C0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_100547c0_100547C0() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 100h
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes E8 3F A9 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 120h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 7E 57: jle 0x10054844
        __asm _emit 0x7e
        __asm _emit 0x57
        push ebp
        lea esi, [edi + 198h]
        mov ebp, 0fff0h
        mov ecx, dword ptr [esi]
        push 12ch
        push 320h
        ; Exact mapped bytes E8 C6 A4 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 CF 30 FC FF: call 0x100178e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push 0
        push 320h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 A7 A4 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        add esi, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi + 120h]
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 7C B8: jl 0x100547f9
        __asm _emit 0x7c
        __asm _emit 0xb8
        xor ebx, ebx
        pop ebp
        mov ecx, dword ptr [edi + 3e8h]
        push -47h
        push 137h
        ; Exact mapped bytes E8 1A 32 FF FF: call 0x10047a70
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 3e8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [edi + 194h]
        mov eax, dword ptr [ecx + 8]
        push eax
        push 384h
        ; Exact mapped bytes E8 3B 30 FC FF: call 0x100178b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 194h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        lea ecx, [edi + 320h]
        mov edx, 6
        mov esi, 40000000h
        mov eax, dword ptr [ecx]
        add ecx, 4
        dec edx
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], esi
        ; Exact mapped bytes 75 F2: jne 0x10054890
        __asm _emit 0x75
        __asm _emit 0xf2
        mov dword ptr [edi + 58h], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
