// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831C10 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58831c10_58831C10() {
    __asm {
        push ebx
        mov eax, dword ptr [esp + 14h]
        or eax, eax
        ; Exact mapped bytes 75 18: jne 0x58831c31
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esp + 8]
        div ecx
        mov eax, edx
        xor edx, edx
        ; Exact mapped bytes EB 50: jmp 0x58831c81
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, eax
        mov ebx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 8]
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        ; Exact mapped bytes 75 F4: jne 0x58831c3f
        __asm _emit 0x75
        __asm _emit 0xf4
        div ebx
        mov ecx, eax
        mul dword ptr [esp + 14h]
        xchg ecx, eax
        mul dword ptr [esp + 10h]
        add edx, ecx
        ; Exact mapped bytes 72 0E: jb 0x58831c6a
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp edx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 77 08: ja 0x58831c6a
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 72 0E: jb 0x58831c72
        __asm _emit 0x72
        __asm _emit 0x0e
        cmp eax, dword ptr [esp + 8]
        ; Exact mapped bytes 76 08: jbe 0x58831c72
        __asm _emit 0x76
        __asm _emit 0x08
        sub eax, dword ptr [esp + 10h]
        sbb edx, dword ptr [esp + 14h]
        sub eax, dword ptr [esp + 8]
        sbb edx, dword ptr [esp + 0ch]
        neg edx
        neg eax
        sbb edx, 0
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
