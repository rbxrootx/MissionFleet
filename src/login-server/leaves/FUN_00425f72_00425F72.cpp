// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425F72 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_00425f72_00425F72() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 1
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push esi
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x42600d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp + 10h], ebx
        and dword ptr [ebp + 10h], 3
        mov esi, eax
        ; Exact mapped bytes 75 0B: jne 0x425f9d
        __asm _emit 0x75
        __asm _emit 0x0b
        shl esi, 2
        mov eax, dword ptr [esi + 44d118h]
        ; Exact mapped bytes EB 09: jmp 0x425fa6
        __asm _emit 0xeb
        __asm _emit 0x09
        shl esi, 2
        mov eax, dword ptr [esi + 44d14ch]
        mov edx, ebx
        lea ecx, [eax + 1]
        imul edx, edx, 16dh
        lea eax, [ebx - 1]
        push edi
        sar eax, 2
        mov edi, ecx
        push 7
        add edi, eax
        lea eax, [edx + edi - 63dbh]
        pop edi
        cdq
        idiv edi
        mov eax, dword ptr [ebp + 18h]
        pop edi
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 7F 0E: jg 0x425fe0
        __asm _emit 0x7f
        __asm _emit 0x0e
        imul eax, eax, 7
        sub eax, edx
        add eax, dword ptr [ebp + 1ch]
        lea ecx, [ecx + eax - 7]
        ; Exact mapped bytes EB 0A: jmp 0x425fea
        __asm _emit 0xeb
        __asm _emit 0x0a
        imul eax, eax, 7
        sub eax, edx
        add eax, dword ptr [ebp + 1ch]
        add ecx, eax
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 75 38: jne 0x426028
        __asm _emit 0x75
        __asm _emit 0x38
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 08: jne 0x425ffe
        __asm _emit 0x75
        __asm _emit 0x08
        mov esi, dword ptr [esi + 44d11ch]
        ; Exact mapped bytes EB 06: jmp 0x426004
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [esi + 44d150h]
        cmp ecx, esi
        ; Exact mapped bytes 7E 20: jle 0x426028
        __asm _emit 0x7e
        __asm _emit 0x20
        sub ecx, 7
        ; Exact mapped bytes EB 1B: jmp 0x426028
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 14h]
        test bl, 3
        ; Exact mapped bytes 75 09: jne 0x42601e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [eax*4 + 44d118h]
        ; Exact mapped bytes EB 07: jmp 0x426025
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, dword ptr [eax*4 + 44d14ch]
        add ecx, dword ptr [ebp + 20h]
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 2B: jne 0x426059
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 89 0D 04 D1 44 00: mov dword ptr [0x44d104], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 28h]
        ; Exact mapped bytes 89 1D 00 D1 44 00: mov dword ptr [0x44d100], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 2ch]
        imul eax, eax, 3e8h
        add eax, dword ptr [ebp + 30h]
        ; Exact mapped bytes A3 08 D1 44 00: mov dword ptr [0x44d108], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 55: jmp 0x4260ae
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes 89 0D 14 D1 44 00: mov dword ptr [0x44d114], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 28h]
        imul eax, eax, 3ch
        ; Exact mapped bytes 03 05 70 D0 44 00: add eax, dword ptr [0x44d070]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add eax, dword ptr [ebp + 2ch]
        imul eax, eax, 3e8h
        add eax, dword ptr [ebp + 30h]
        ; Exact mapped bytes A3 18 D1 44 00: mov dword ptr [0x44d118], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 79 0D: jns 0x426091
        __asm _emit 0x79
        __asm _emit 0x0d
        add eax, 5265c00h
        dec ecx
        ; Exact mapped bytes A3 18 D1 44 00: mov dword ptr [0x44d118], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4260a2
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, 5265c00h
        cmp eax, edx
        ; Exact mapped bytes 7C 0E: jl 0x4260a8
        __asm _emit 0x7c
        __asm _emit 0x0e
        sub eax, edx
        inc ecx
        ; Exact mapped bytes A3 18 D1 44 00: mov dword ptr [0x44d118], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 14 D1 44 00: mov dword ptr [0x44d114], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 10 D1 44 00: mov dword ptr [0x44d110], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0x44
        __asm _emit 0x00
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
