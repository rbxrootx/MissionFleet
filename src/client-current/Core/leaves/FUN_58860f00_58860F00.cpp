// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860F00 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_58860f00_58860F00() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 8]
        mov cl, byte ptr [edx]
        lea eax, [ecx - 30h]
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x58860f1e
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        add eax, -30h
        ; Exact mapped bytes EB 1C: jmp 0x58860f3a
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea eax, [ecx - 61h]
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58860f2d
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        add eax, -57h
        ; Exact mapped bytes EB 0D: jmp 0x58860f3a
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ecx - 41h]
        cmp al, 19h
        ; Exact mapped bytes 77 36: ja 0x58860f6a
        __asm _emit 0x77
        __asm _emit 0x36
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        add eax, -37h
        cmp eax, 9
        ; Exact mapped bytes 77 2B: ja 0x58860f6a
        __asm _emit 0x77
        __asm _emit 0x2b
        push 0ah
        lea eax, [ebp - 4]
        xor ebx, ebx
        push eax
        push edx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes E8 AE 67 FF FF: call 0x588576fe
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 0ch
        or ecx, edx
        ; Exact mapped bytes 74 17: je 0x58860f70
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 74 0F: je 0x58860f70
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [esi + 18h], eax
        mov dword ptr [esi + 1ch], edx
        mov dword ptr [esi + 8], ecx
        mov al, 1
        pop esi
        pop ebx
        leave
        ret
        mov dword ptr [esi + 10h], ebx
        xor al, al
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 0ch], 16h
        ; Exact mapped bytes EB D8: jmp 0x58860f6c
        __asm _emit 0xeb
        __asm _emit 0xd8
    }
}
