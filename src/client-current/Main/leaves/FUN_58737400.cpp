// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58737400 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_58737400() {
    __asm {
        sub esp, 88h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 84h], eax
        mov al, 1
        mov edx, ecx
        mov ecx, dword ptr [esp + 90h]
        mov byte ptr [esp], al
        mov byte ptr [esp + 1], al
        mov eax, dword ptr [esp + 8ch]
        push esi
        mov byte ptr [esp + 6], 0
        mov byte ptr [esp + 10h], al
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x5873745c
        __asm _emit 0x74
        __asm _emit 0x21
        lea eax, [eax + eax*4]
        mov eax, dword ptr [edx + eax*4 + 110h]
        ; Exact mapped bytes 66 8B 70 04: mov si, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 03 31: add si, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x31
        ; Exact mapped bytes 66 03 41 04: add ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x04
        movzx esi, si
        movzx eax, ax
        ; Exact mapped bytes EB 12: jmp 0x5873746e
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [edx + ecx*4 + 110h]
        movzx esi, word ptr [eax + 4]
        movzx eax, word ptr [eax + 8]
        ; Exact mapped bytes 66 89 44 24 0E: mov word ptr [esp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0e
        push 9
        lea eax, [esp + 0ch]
        mov byte ptr [esp + 0bh], 9
        mov ecx, dword ptr [esp + 8]
        push eax
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [edx + 0ch]
        push 0ch
        ; Exact mapped bytes 66 89 74 24 18: mov word ptr [esp + 0x18], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 CA CD 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 88h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 35 57 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 88h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
