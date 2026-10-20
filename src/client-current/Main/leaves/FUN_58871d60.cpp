// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58871D60 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58871d60() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 BC 45 A2 58: mov eax, dword ptr [0x58a245bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        add eax, 24h
        mov edx, 0fffdh
        push edi
        mov edi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 FC 22 08 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 75 05: jne 0x58871da2
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x58871da9
        __asm _emit 0xeb
        __asm _emit 0x07
        movzx eax, word ptr [eax + 5eh]
        shr eax, 0ch
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 0b8h]
        push edx
        push edi
        push eax
        ; Exact mapped bytes E8 10 32 FF FF: call 0x58864fd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
