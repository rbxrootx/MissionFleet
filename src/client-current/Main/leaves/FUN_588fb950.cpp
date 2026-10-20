// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FB950 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_588fb950() {
    __asm {
        mov eax, dword ptr [ecx + 68h]
        push ebx
        mov bl, byte ptr [esp + 8]
        mov dl, bl
        push esi
        movzx esi, word ptr [eax + 24h]
        and dl, 1
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        push edi
        mov edi, 0fffbh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        lea edi, [edx*4]
        ; Exact mapped bytes 66 0B F7: or si, di
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf7
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 68h]
        movzx esi, word ptr [eax + 24h]
        mov edi, 0fffdh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        add edx, edx
        ; Exact mapped bytes 66 0B F2: or si, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf2
        pop edi
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        pop esi
        mov byte ptr [ecx + 0a4h], bl
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
