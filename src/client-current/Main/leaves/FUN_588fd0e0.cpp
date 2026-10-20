// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FD0E0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_588fd0e0() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        push esi
        xor esi, esi
        push edi
        mov edi, ecx
        test ebp, ebp
        ; Exact mapped bytes 76 1C: jbe 0x588fd10b
        __asm _emit 0x76
        __asm _emit 0x1c
        push ebx
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [ebx + esi*8 + 4]
        mov ecx, dword ptr [ebx + esi*8]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 68h]
        ; Exact mapped bytes E8 4B 2A 00 00: call 0x588ffb50
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp esi, ebp
        ; Exact mapped bytes 72 EA: jb 0x588fd0f4
        __asm _emit 0x72
        __asm _emit 0xea
        pop ebx
        mov eax, dword ptr [edi + 90h]
        push 0
        push 0
        push 0
        xor edx, edx
        ; Exact mapped bytes 66 89 97 94 00 00 00: mov word ptr [edi + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov dword ptr [edi + 98h], 1
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        mov edx, 7dh
        push 0
        ; Exact mapped bytes 66 89 97 94 00 00 00: mov word ptr [edi + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 80015101h
        ; Exact mapped bytes E8 1E 3B 07 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        push edi
        push 12h
        push 589a2240h
        push 2710h
        ; Exact mapped bytes E8 8C E9 E6 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 7B E6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
