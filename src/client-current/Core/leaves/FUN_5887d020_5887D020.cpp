// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D020 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_5887d020_5887D020() {
    __asm {
        push esi
        mov eax, dword ptr [esp + 14h]
        or eax, eax
        ; Exact mapped bytes 75 28: jne 0x5887d051
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr [esp + 8]
        div ecx
        mov esi, eax
        mov eax, ebx
        mul dword ptr [esp + 10h]
        mov ecx, eax
        mov eax, esi
        mul dword ptr [esp + 10h]
        add edx, ecx
        ; Exact mapped bytes EB 47: jmp 0x5887d098
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, eax
        mov ebx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 8]
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        ; Exact mapped bytes 75 F4: jne 0x5887d05f
        __asm _emit 0x75
        __asm _emit 0xf4
        div ebx
        mov esi, eax
        mul dword ptr [esp + 14h]
        mov ecx, eax
        mov eax, dword ptr [esp + 10h]
        mul esi
        add edx, ecx
        ; Exact mapped bytes 72 0E: jb 0x5887d08d
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp edx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 77 08: ja 0x5887d08d
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 72 0F: jb 0x5887d096
        __asm _emit 0x72
        __asm _emit 0x0f
        cmp eax, dword ptr [esp + 8]
        ; Exact mapped bytes 76 09: jbe 0x5887d096
        __asm _emit 0x76
        __asm _emit 0x09
        dec esi
        sub eax, dword ptr [esp + 10h]
        sbb edx, dword ptr [esp + 14h]
        xor ebx, ebx
        sub eax, dword ptr [esp + 8]
        sbb edx, dword ptr [esp + 0ch]
        neg edx
        neg eax
        sbb edx, 0
        mov ecx, edx
        mov edx, ebx
        mov ebx, ecx
        mov ecx, eax
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
