// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046BA0 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_10046ba0_10046BA0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 08 C9 FF FF: call 0x100434b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 2dch]
        mov ecx, esi
        xor edx, 0aaaaaaaah
        mov eax, edx
        mov dword ptr [esi + 2dch], edx
        push eax
        ; Exact mapped bytes E8 8C C7 FF FF: call 0x10043350
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [esi + 218h]
        mov dword ptr [esi + 2dch], eax
        and ecx, 0fh
        cmp eax, ecx
        ; Exact mapped bytes 7D 02: jge 0x10046bd9
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ecx, eax
        mov dword ptr [esi + 0e0h], ecx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 88h]
        push ebx
        mov ebx, dword ptr [edx + 4]
        cmp ecx, ebx
        pop ebx
        ; Exact mapped bytes 75 15: jne 0x10046c09
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push eax
        mov eax, dword ptr [esi + 138h]
        push eax
        ; Exact mapped bytes E8 B7 7A 05 00: call 0x1009e6c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2dch]
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 2dch], eax
        pop esi
        ret
    }
}
