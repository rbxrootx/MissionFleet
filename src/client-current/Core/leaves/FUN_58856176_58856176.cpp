// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856176 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58856176_58856176() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        add eax, ebx
        mov dword ptr [ebp - 8], eax
        cmp ebx, eax
        ; Exact mapped bytes 74 42: je 0x588561e3
        __asm _emit 0x74
        __asm _emit 0x42
        push edi
        mov edi, dword ptr [ebp + 10h]
        movzx eax, byte ptr [ebx]
        push esi
        push eax
        ; Exact mapped bytes E8 79 FE FF FF: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 1A: jne 0x588561cd
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp byte ptr [esi + 1ch], al
        ; Exact mapped bytes 74 27: je 0x588561df
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [esi + 18h], 2ah
        ; Exact mapped bytes 75 21: jne 0x588561df
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        push esi
        push 3fh
        ; Exact mapped bytes E8 5F FE FF FF: call 0x58856028
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 04: je 0x588561d1
        __asm _emit 0x74
        __asm _emit 0x04
        inc dword ptr [edi]
        ; Exact mapped bytes EB 03: jmp 0x588561d4
        __asm _emit 0xeb
        __asm _emit 0x03
        or dword ptr [edi], 0ffffffffh
        inc ebx
        cmp ebx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 08: je 0x588561e2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes EB C6: jmp 0x588561a5
        __asm _emit 0xeb
        __asm _emit 0xc6
        or dword ptr [edi], 0ffffffffh
        pop edi
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [esi + 18h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [esi + 1ch], eax
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
