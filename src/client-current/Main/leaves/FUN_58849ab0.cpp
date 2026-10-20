// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849AB0 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_58849ab0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        push edi
        xor edi, edi
        xor edx, edx
        cmp eax, 190h
        ; Exact mapped bytes 7E 03: jle 0x58849ac8
        __asm _emit 0x7e
        __asm _emit 0x03
        lea edi, [edx + 1]
        mov ecx, dword ptr [ecx + 4]
        cmp ecx, 12ch
        ; Exact mapped bytes 7E 05: jle 0x58849ad8
        __asm _emit 0x7e
        __asm _emit 0x05
        mov edx, 1
        test edi, edi
        ; Exact mapped bytes 75 31: jne 0x58849b0d
        __asm _emit 0x75
        __asm _emit 0x31
        add eax, 32h
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x58849af0
        __asm _emit 0x75
        __asm _emit 0x0d
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 A4 97 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x58849b41
        __asm _emit 0xeb
        __asm _emit 0x51
        add ecx, 0ffffff60h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 91 97 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 66 89 8E C4 00 00 00: mov word ptr [esi + 0xc4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x58849b48
        __asm _emit 0xeb
        __asm _emit 0x3b
        add eax, 0ffffff42h
        test edx, edx
        ; Exact mapped bytes 75 17: jne 0x58849b2d
        __asm _emit 0x75
        __asm _emit 0x17
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 71 97 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, 2
        ; Exact mapped bytes 66 89 96 C4 00 00 00: mov word ptr [esi + 0xc4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x58849b48
        __asm _emit 0xeb
        __asm _emit 0x1b
        add ecx, 0ffffff60h
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 54 97 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes 66 89 86 C4 00 00 00: mov word ptr [esi + 0xc4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        movzx eax, word ptr [esi + 0c4h]
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], ecx
        push eax
        mov ecx, esi
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes E8 7D FD FF FF: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
