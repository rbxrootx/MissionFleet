// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A02D0 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_587a02d0() {
    __asm {
        mov al, byte ptr [esp + 4]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov byte ptr [ebx + 4], al
        xor edi, edi
        and al, 1
        ; Exact mapped bytes 66 0F B6 E8: movzx bp, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xe8
        lea esi, [ebx + 18h]
        ; Exact mapped bytes EB 06: jmp 0x587a02f0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        movzx ecx, word ptr [eax + 24h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B CD: or cx, bp
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 20h]
        movzx ecx, word ptr [eax + 24h]
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B CD: or cx, bp
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 40h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov byte ptr [ebx + edi + 5], 1
        mov ecx, dword ptr [esi]
        push 1eh
        ; Exact mapped bytes E8 F3 29 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0ffh
        ; Exact mapped bytes E8 A7 29 16 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, 8
        ; Exact mapped bytes 7C AE: jl 0x587a02f0
        __asm _emit 0x7c
        __asm _emit 0xae
        pop edi
    }
}
