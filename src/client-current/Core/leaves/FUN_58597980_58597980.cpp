// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597980 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_58597980_58597980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 1ch], 0ffffffffh
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585979a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 8D 9A 00 00 00: jge 0x58597a51
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585979c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7D 78: jge 0x58597a4c
        __asm _emit 0x7d
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx*8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + ecx*8]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx*8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*8 + 4]
        add eax, 300h
        mov ecx, dword ptr [ebp + 8]
        sub eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        add edx, eax
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7D 1D: jge 0x58597a47
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x585979c0
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x585979a0
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 9ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
