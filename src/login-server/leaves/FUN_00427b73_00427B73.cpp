// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427B73 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_00427b73_00427B73() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        xor edx, edx
        cmp eax, edx
        push esi
        mov dword ptr [ebp - 4], 404eh
        mov dword ptr [ebx], edx
        mov dword ptr [ebx + 4], edx
        mov dword ptr [ebx + 8], edx
        ; Exact mapped bytes 76 51: jbe 0x427be7
        __asm _emit 0x76
        __asm _emit 0x51
        push edi
        mov dword ptr [ebp + 10h], eax
        mov esi, ebx
        lea edi, [ebp - 10h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        push ebx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes E8 70 FF FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 6A FF FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        push ebx
        ; Exact mapped bytes E8 02 FF FF FF: call 0x427aba
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 5A FF FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 0ch], 0
        and dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F BE 00: movsx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 10h]
        push eax
        push ebx
        ; Exact mapped bytes E8 E1 FE FF FF: call 0x427aba
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        inc dword ptr [ebp + 8]
        dec dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 B6: jne 0x427b9a
        __asm _emit 0x75
        __asm _emit 0xb6
        xor edx, edx
        pop edi
        cmp dword ptr [ebx + 8], edx
        ; Exact mapped bytes 75 28: jne 0x427c14
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebx + 4]
        mov eax, ecx
        shr eax, 10h
        mov dword ptr [ebx + 8], eax
        mov eax, dword ptr [ebx]
        mov esi, eax
        shr esi, 10h
        shl ecx, 10h
        or esi, ecx
        shl eax, 10h
        add dword ptr [ebp - 4], 0fff0h
        mov dword ptr [ebx + 4], esi
        mov dword ptr [ebx], eax
        ; Exact mapped bytes EB D3: jmp 0x427be7
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esi, 8000h
        test dword ptr [ebx + 8], esi
        ; Exact mapped bytes 75 10: jne 0x427c2e
        __asm _emit 0x75
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 F4 FE FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp - 4], 0ffffh
        pop ecx
        ; Exact mapped bytes EB EB: jmp 0x427c19
        __asm _emit 0xeb
        __asm _emit 0xeb
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        pop esi
        ; Exact mapped bytes 66 89 43 0A: mov word ptr [ebx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0a
        pop ebx
        leave
        ret
    }
}
