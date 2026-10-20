// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4530 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_584a4530_584A4530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a4552
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 7D 50: jge 0x584a45ad
        __asm _emit 0x7d
        __asm _emit 0x50
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax + 1ch], 0
        ; Exact mapped bytes 7E 40: jle 0x584a45ab
        __asm _emit 0x7e
        __asm _emit 0x40
        imul edx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 1ch]
        sub ecx, 1
        imul edx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 1ch], ecx
        imul ecx, dword ptr [ebp - 4], 38h
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx + 1ch], 0
        ; Exact mapped bytes 75 19: jne 0x584a45ab
        __asm _emit 0x75
        __asm _emit 0x19
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1ch]
        sub edx, 1
        imul eax, dword ptr [ebp - 4], 38h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 1ch], edx
        ; Exact mapped bytes EB 9C: jmp 0x584a4549
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a45bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 3E: jge 0x584a4608
        __asm _emit 0x7d
        __asm _emit 0x3e
        imul edx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx + 1ch], -1
        ; Exact mapped bytes 75 2E: jne 0x584a4606
        __asm _emit 0x75
        __asm _emit 0x2e
        imul ecx, dword ptr [ebp - 4], 38h
        imul edx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + edx + 40h]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + ecx + 18h]
        imul ecx, dword ptr [ebp - 4], 38h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx + 40h], edx
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EB E7 FF FF: call 0x584a2df0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x584a45b6
        __asm _emit 0xeb
        __asm _emit 0xae
        mov esp, ebp
        pop ebp
        ret
    }
}
