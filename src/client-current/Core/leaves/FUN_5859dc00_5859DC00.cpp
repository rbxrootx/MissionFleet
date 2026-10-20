// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859DC00 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_5859dc00_5859DC00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0fffffffeh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9fch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 100h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b8h]
        imul ecx, dword ptr [eax + 0bch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 08 05 96 58: mov ecx, dword ptr [0x58960508]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 0dch], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 0C 05 96 58: mov eax, dword ptr [0x5896050c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 0e0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0c8h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ech], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a08h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A D8 00 00 00: mov word ptr [edx + 0xd8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0a0ch
        push eax
        ; Exact mapped bytes E8 FC F0 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a12h
        push ecx
        ; Exact mapped bytes E8 E6 F0 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
