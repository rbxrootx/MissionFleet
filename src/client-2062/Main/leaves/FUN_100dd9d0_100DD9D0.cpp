// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD9D0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_100dd9d0_100DD9D0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 58h], 100h
        and eax, 0e1ffh
        or eax, 107h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x100dda0c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100dda0c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x100dda0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov al, byte ptr [esi + 139fh]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 CB FB FF FF: call 0x100dd600
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 98h]
        xor ecx, ecx
        test al, al
        ; Exact mapped bytes 76 1E: jbe 0x100dda5f
        __asm _emit 0x76
        __asm _emit 0x1e
        lea eax, [esi + 119ch]
        mov edx, dword ptr [eax - 200h]
        inc ecx
        mov dword ptr [eax], edx
        xor edx, edx
        mov dl, byte ptr [esi + 98h]
        add eax, 4
        cmp ecx, edx
        ; Exact mapped bytes 7C E8: jl 0x100dda47
        __asm _emit 0x7c
        __asm _emit 0xe8
        mov al, byte ptr [esi + 139dh]
        mov dword ptr [esi + 94h], 0
        mov byte ptr [esi + 139eh], al
        mov eax, dword ptr [esi + 0d9ch]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100dda8d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 13a0h]
        push 0
        push eax
        ; Exact mapped bytes E8 43 EB FC FF: call 0x100ac5d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 86 A4 13 00 00 FF FF: mov word ptr [esi + 0x13a4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
