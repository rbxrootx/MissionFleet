// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861C60 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_58861c60_58861C60() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        or edx, 0ffffffffh
        push ebx
        mov ebx, dword ptr [ebp + 8]
        cmp ebx, edx
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x58861d59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 55 60 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, 100h
        ; Exact mapped bytes 73 29: jae 0x58861cb3
        __asm _emit 0x73
        __asm _emit 0x29
        cmp byte ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, bl
        mov eax, dword ptr [eax + 94h]
        movzx edx, byte ptr [eax + ecx]
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x58861d59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        and dword ptr [eax + 350h], 0fffffffdh
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x58861d59
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        mov byte ptr [ebp - 2], al
        cmp dword ptr [edx + 4], 1
        ; Exact mapped bytes 7E 27: jle 0x58861ce8
        __asm _emit 0x7e
        __asm _emit 0x27
        mov eax, ebx
        sar eax, 8
        mov dword ptr [ebp - 8], eax
        movzx ecx, al
        mov eax, dword ptr [edx]
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 39 3C 48: cmp word ptr [eax + ecx*2], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3c
        __asm _emit 0x48
        pop edi
        ; Exact mapped bytes 7D 10: jge 0x58861ce8
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        push 2
        mov byte ptr [ebp - 4], al
        mov byte ptr [ebp - 3], bl
        pop eax
        ; Exact mapped bytes EB 19: jmp 0x58861d01
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 82 07 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax], 2ah
        xor eax, eax
        mov edx, dword ptr [ebp - 14h]
        inc eax
        mov byte ptr [ebp - 4], bl
        mov byte ptr [ebp - 3], cl
        push 1
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov byte ptr [ebp - 6], cl
        lea ecx, [ebp - 8]
        push dword ptr [edx + 8]
        push 3
        push ecx
        push eax
        lea eax, [ebp - 4]
        push eax
        push 100h
        push dword ptr [edx + 0a8h]
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B0 06 01 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58861d37
        __asm _emit 0x75
        __asm _emit 0x04
        mov edx, ebx
        ; Exact mapped bytes EB 12: jmp 0x58861d49
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx edx, byte ptr [ebp - 8]
        cmp eax, 1
        ; Exact mapped bytes 74 09: je 0x58861d49
        __asm _emit 0x74
        __asm _emit 0x09
        movzx eax, byte ptr [ebp - 7]
        shl edx, 8
        or edx, eax
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x58861d59
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 18h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        pop ebx
        leave
        ret
    }
}
