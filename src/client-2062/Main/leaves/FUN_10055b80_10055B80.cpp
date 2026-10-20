// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055B80 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_10055b80_10055B80() {
    __asm {
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 10h]
        mov ebp, ecx
        ; Exact mapped bytes 66 8B 47 12: mov ax, word ptr [edi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        and eax, 0fffh
        push eax
        ; Exact mapped bytes E8 22 1F 06 00: call 0x100b7ac0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push edi
        mov edx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes 66 8B C2: mov ax, dx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc2
        mov dword ptr [ebp + 64h], edx
        ; Exact mapped bytes 66 89 85 16 01 00 00: mov word ptr [ebp + 0x116], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4F 12: mov cx, word ptr [edi + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x12
        and ecx, 0fffh
        ; Exact mapped bytes 66 89 8D 18 01 00 00: mov word ptr [ebp + 0x118], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2A 77 06 00: call 0x100bd300
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        mov al, byte ptr [edi + 14h]
        xor ebx, ebx
        test al, 0f0h
        ; Exact mapped bytes 76 2B: jbe 0x10055c0a
        __asm _emit 0x76
        __asm _emit 0x2b
        push esi
        lea esi, [edi + 2eh]
        mov dl, byte ptr [esi + 1]
        mov al, byte ptr [esi]
        push edx
        lea ecx, [esi - 18h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 37 6A 06 00: call 0x100bc630
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        xor edx, edx
        inc ebx
        mov dl, byte ptr [edi + 14h]
        add esi, 1ah
        shr edx, 4
        cmp ebx, edx
        ; Exact mapped bytes 7C DA: jl 0x10055be3
        __asm _emit 0x7c
        __asm _emit 0xda
        pop esi
        mov dword ptr [ebp + 6ch], 40000000h
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 94 72 06 00: call 0x100bceb0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
