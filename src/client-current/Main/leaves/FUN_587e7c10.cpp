// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E7C10 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_587e7c10() {
    __asm {
        mov eax, dword ptr [ecx + 21ef4h]
        mov dl, byte ptr [esp + 4]
        push esi
        ; Exact mapped bytes 66 8B 70 24: mov si, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x24
        push edi
        and dl, 1
        mov edi, 0fffeh
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0B F2: or si, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf2
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 21ef8h]
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov esi, edi
        ; Exact mapped bytes 66 23 C6: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        pop edi
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
