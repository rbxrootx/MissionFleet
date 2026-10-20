// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589767A0 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_589767a0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        xor edi, edi
        mov ebp, dword ptr [esi + 8]
        mov ebx, dword ptr [esi + 18h]
        mov eax, dword ptr [esi + 10h]
        imul ebx, ebp
        test eax, eax
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7E 77: jle 0x58976835
        __asm _emit 0x7e
        __asm _emit 0x77
        ; Exact mapped bytes EB 04: jmp 0x589767c4
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 14h]
        sub eax, edi
        cmp ecx, eax
        ; Exact mapped bytes 7D 02: jge 0x589767cf
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 1ch]
        add ecx, edi
        sub edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7C 02: jl 0x589767df
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, edx
        mov edx, dword ptr [esi + 4]
        sub edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7C 02: jl 0x589767ea
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x58976835
        __asm _emit 0x7e
        __asm _emit 0x47
        imul eax, ebp
        mov ebp, eax
        mov al, byte ptr [esp + 1ch]
        test al, al
        ; Exact mapped bytes 74 16: je 0x58976811
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi]
        push ebp
        push ebx
        lea edx, [esi + 28h]
        mov ecx, dword ptr [eax + edi*4]
        mov eax, dword ptr [esp + 1ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 56 2C: call dword ptr [esi + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x2c
        ; Exact mapped bytes EB 13: jmp 0x58976824
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [esi]
        push ebp
        lea eax, [esi + 28h]
        push ebx
        mov edx, dword ptr [ecx + edi*4]
        mov ecx, dword ptr [esp + 1ch]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 10h]
        add edi, edx
        add esp, 14h
        add ebx, ebp
        cmp edi, eax
        ; Exact mapped bytes 7C 8B: jl 0x589767c0
        __asm _emit 0x7c
        __asm _emit 0x8b
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
