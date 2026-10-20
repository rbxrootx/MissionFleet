// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58804FF0 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_58804ff0() {
    __asm {
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x58805001
        __asm _emit 0x7d
        __asm _emit 0x02
        xor edx, edx
        push ebx
        push ebp
        push esi
        mov ebx, 40000000h
        test eax, eax
        ; Exact mapped bytes 7D 04: jge 0x58805011
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58805016
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp eax, 10h
        ; Exact mapped bytes 7D 2B: jge 0x58805041
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov esi, dword ptr [ecx + 0b4h]
        mov ebp, 10h
        sub ebp, eax
        add ebp, ebp
        cmp esi, ebp
        ; Exact mapped bytes 7C 0C: jl 0x58805035
        __asm _emit 0x7c
        __asm _emit 0x0c
        lea eax, [esi + eax*2 - 20h]
        mov dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes EB 3F: jmp 0x58805074
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes EB 33: jmp 0x58805074
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp eax, 2f0h
        ; Exact mapped bytes 7E 2F: jle 0x58805077
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov esi, dword ptr [ecx + 0b4h]
        mov ebp, 486h
        sub ebp, eax
        add ebp, ebp
        cmp esi, ebp
        ; Exact mapped bytes 7F 0F: jg 0x5880506a
        __asm _emit 0x7f
        __asm _emit 0x0f
        lea eax, [esi + eax*2 - 5e0h]
        mov dword ptr [ecx + 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58805074
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ecx + 0b4h], 32ch
        mov dword ptr [ecx + 64h], ebx
        cmp edx, 10h
        ; Exact mapped bytes 7D 35: jge 0x588050b1
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ecx + 0b0h]
        mov esi, 10h
        sub esi, edx
        add esi, esi
        cmp eax, esi
        ; Exact mapped bytes 7C 11: jl 0x588050a0
        __asm _emit 0x7c
        __asm _emit 0x11
        pop esi
        lea edx, [eax + edx*2 - 20h]
        pop ebp
        mov dword ptr [ecx + 64h], ebx
        mov dword ptr [ecx + 0b0h], edx
        pop ebx
        ret
        pop esi
        pop ebp
        mov dword ptr [ecx + 64h], ebx
        mov dword ptr [ecx + 0b0h], 0
        pop ebx
        ret
        cmp edx, 3f0h
        ; Exact mapped bytes 7E 34: jle 0x588050ed
        __asm _emit 0x7e
        __asm _emit 0x34
        mov eax, dword ptr [ecx + 0b0h]
        mov esi, 580h
        sub esi, edx
        add esi, esi
        cmp eax, esi
        ; Exact mapped bytes 7F 14: jg 0x588050e0
        __asm _emit 0x7f
        __asm _emit 0x14
        pop esi
        lea eax, [eax + edx*2 - 7e0h]
        pop ebp
        mov dword ptr [ecx + 64h], ebx
        mov dword ptr [ecx + 0b0h], eax
        pop ebx
        ret
        mov dword ptr [ecx + 0b0h], 320h
        mov dword ptr [ecx + 64h], ebx
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
