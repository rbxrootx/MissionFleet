// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005DF80 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_1005df80_1005DF80() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        xor ebp, ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [ebx + 8ch], ebp
        mov dword ptr [ebx + 94h], ebp
        mov dword ptr [ebx + 98h], ebp
        mov dword ptr [ebx + 330h], ebp
        mov dword ptr [ebx + 334h], ebp
        mov dword ptr [ebx + 464h], ebp
        mov dword ptr [ebx + 468h], ebp
        mov dword ptr [ebx + 0d18h], ebp
        mov dword ptr [ebx + 0d1ch], ebp
        mov dword ptr [ebx + 0d20h], ebp
        mov dword ptr [ebx + 0d24h], ebp
        mov dword ptr [ebx + 0d28h], ebp
        mov dword ptr [ebx + 0d2ch], ebp
        mov dword ptr [ebx + 0d30h], ebp
        mov dword ptr [ebx + 0d38h], ebp
        mov dword ptr [ebx + 0d34h], ebp
        ; Exact mapped bytes 89 1D DC 56 1C 10: mov dword ptr [0x101c56dc], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 43 24: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x24
        and eax, 0fffch
        push edi
        or al, 4
        lea edi, [ebx + 0ce8h]
        mov ecx, 8
        ; Exact mapped bytes 66 89 43 24: mov word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x24
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        and eax, 0edffh
        push 1
        or ah, 0dh
        push 66h
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov dword ptr [ebx + 0d74h], ebp
        ; Exact mapped bytes 66 89 43 24: mov word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        lea eax, [ebx + 0d70h]
        push eax
        push ebp
        push ebx
        push 1005df40h
        push ebp
        push ebp
        ; Exact mapped bytes FF 15 E8 50 17 10: call dword ptr [0x101750e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        mov dword ptr [ebx + 0d6ch], eax
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
