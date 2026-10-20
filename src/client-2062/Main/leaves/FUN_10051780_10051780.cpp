// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10051780 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_10051780_10051780() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 44ch]
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 CD A3 FD FF: call 0x1002bb70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 990h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 4b0h
        ; Exact mapped bytes E8 A9 67 FF FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [esi + 214h]
        mov ebp, 19h
        xor ebx, ebx
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 54 D9 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 F2: jne 0x100517c4
        __asm _emit 0x75
        __asm _emit 0xf2
        push 100h
        mov ecx, esi
        ; Exact mapped bytes E8 42 D9 0A 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0fch]
        mov dword ptr [esi + 58h], ebx
        cmp eax, 64h
        mov edi, 40000000h
        ; Exact mapped bytes 75 19: jne 0x1005180a
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 20ch]
        mov dword ptr [eax + 28h], 100h
        mov dword ptr [eax + 84h], ebx
        mov dword ptr [eax + 8ch], edi
        or eax, 0ffffffffh
        mov ecx, 0fffffffeh
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 9ch], eax
        mov eax, dword ptr [esi + 1f8h]
        mov dword ptr [esi + 90h], ecx
        mov dword ptr [esi + 94h], ecx
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1fch]
        push 12ch
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 458h]
        mov dword ptr [esi + 454h], ebx
        mov dword ptr [esi + 45ch], eax
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8F 0D 09 00: call 0x100e2600
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 984h]
        xor ecx, ecx
        cmp eax, ebx
        mov dword ptr [esi + 0fch], 0c8h
        ; Exact mapped bytes 7E 1A: jle 0x100518a1
        __asm _emit 0x7e
        __asm _emit 0x1a
        lea edx, [esi + 774h]
        mov eax, dword ptr [edx]
        inc ecx
        add edx, 4
        mov dword ptr [eax + 7ch], ebx
        mov dword ptr [eax + 74h], edi
        cmp ecx, dword ptr [esi + 984h]
        ; Exact mapped bytes 7C EC: jl 0x1005188d
        __asm _emit 0x7c
        __asm _emit 0xec
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
