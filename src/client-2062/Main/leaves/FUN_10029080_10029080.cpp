// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029080 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_10029080_10029080() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        xor eax, 0aah
        ; Exact mapped bytes 66 89 46 58: mov word ptr [esi + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        and eax, 0ffffh
        xor ecx, 0aah
        xor eax, 0aah
        ; Exact mapped bytes 66 89 4E 5A: mov word ptr [esi + 0x5a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x5a
        mov ecx, dword ptr [esi + 424h]
        xor edx, 0aah
        push eax
        ; Exact mapped bytes 66 89 56 5C: mov word ptr [esi + 0x5c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5c
        ; Exact mapped bytes E8 2E 12 00 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 46 58: mov ax, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 4E 5A: mov cx, word ptr [esi + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5a
        xor eax, 0aah
        xor ecx, 0aah
        add eax, ecx
        mov ecx, dword ptr [esi + 428h]
        push eax
        ; Exact mapped bytes E8 09 12 00 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 5C: mov dx, word ptr [esi + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x5c
        ; Exact mapped bytes 66 8B 46 58: mov ax, word ptr [esi + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        xor ecx, ecx
        xor edx, 0aah
        ; Exact mapped bytes 66 8B 4E 5A: mov cx, word ptr [esi + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5a
        xor eax, 0aah
        add edx, eax
        xor ecx, 0aah
        add edx, ecx
        mov ecx, dword ptr [esi + 42ch]
        push edx
        ; Exact mapped bytes E8 D6 11 00 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9F DB FF FF: call 0x10026cc0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
