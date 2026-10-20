// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505880 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58505880_58505880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 4A: jae 0x585058d8
        __asm _emit 0x73
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x585058ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 25: jae 0x585058d8
        __asm _emit 0x73
        __asm _emit 0x25
        movzx edx, byte ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BC 56 00 00: call 0x5850af80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x585058d6
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 05: jmp 0x585058db
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB CA: jmp 0x585058a2
        __asm _emit 0xeb
        __asm _emit 0xca
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
