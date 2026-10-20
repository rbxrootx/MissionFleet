// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041BA7B .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0041ba7b_0041BA7B() {
    __asm {
        cmp byte ptr [ecx + 18h], 0
        push esi
        push edi
        ; Exact mapped bytes 74 29: je 0x41baac
        __asm _emit 0x74
        __asm _emit 0x29
        mov esi, dword ptr [ecx + 0ch]
        xor edi, edi
        test esi, esi
        ; Exact mapped bytes 76 18: jbe 0x41baa4
        __asm _emit 0x76
        __asm _emit 0x18
        mov edx, dword ptr [esp + 0ch]
        mov ecx, dword ptr [ecx + 10h]
        add ecx, 8
        mov eax, dword ptr [edx]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 0C: je 0x41baa8
        __asm _emit 0x74
        __asm _emit 0x0c
        inc edi
        add ecx, 30h
        cmp edi, esi
        ; Exact mapped bytes 72 F4: jb 0x41ba98
        __asm _emit 0x72
        __asm _emit 0xf4
        xor al, al
        ; Exact mapped bytes EB 21: jmp 0x41bac9
        __asm _emit 0xeb
        __asm _emit 0x21
        mov dword ptr [edx], edi
        ; Exact mapped bytes EB 1B: jmp 0x41bac7
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ecx + 10h]
        mov esi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [ecx + 0ch]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [esi]
        lea ecx, [ecx + edx - 1]
        cmp eax, ecx
        ; Exact mapped bytes 77 E1: ja 0x41baa4
        __asm _emit 0x77
        __asm _emit 0xe1
        sub eax, edx
        mov dword ptr [esi], eax
        mov al, 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
