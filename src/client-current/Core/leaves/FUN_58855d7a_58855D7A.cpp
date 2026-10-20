// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855D7A .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_58855d7a_58855D7A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push -1
        push 5887ddd0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov esi, dword ptr [edi + 8]
        cmp byte ptr [esi + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x58855db3
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 ED 00 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        mov esi, dword ptr [edi + 30h]
        xor edi, edi
        cmp dword ptr [ebx + 8], 0fde9h
        ; Exact mapped bytes 75 34: jne 0x58855df8
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 7E 5E: jle 0x58855e27
        __asm _emit 0x7e
        __asm _emit 0x5e
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 59: je 0x58855e27
        __asm _emit 0x74
        __asm _emit 0x59
        push esi
        ; Exact mapped bytes E8 04 80 01 00: call 0x5886ddd8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        xor edx, edx
        inc edx
        lea eax, [ecx - 1]
        cmp eax, 3
        lea eax, [edi + 1]
        cmovbe edx, ecx
        cmp ecx, 4
        cmovne eax, edi
        add esi, edx
        lea edi, [eax + 1]
        cmp edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C D3: jl 0x58855dc9
        __asm _emit 0x7c
        __asm _emit 0xd3
        ; Exact mapped bytes EB 2F: jmp 0x58855e27
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 7E 2A: jle 0x58855e27
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 74 24: je 0x58855e27
        __asm _emit 0x74
        __asm _emit 0x24
        push 8000h
        movzx eax, al
        push eax
        push dword ptr [ebx]
        ; Exact mapped bytes E8 E2 03 00 00: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [esi + 1]
        test eax, eax
        cmove ecx, esi
        inc edi
        lea esi, [ecx + 1]
        cmp edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C D6: jl 0x58855dfd
        __asm _emit 0x7c
        __asm _emit 0xd6
        mov eax, edi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
