// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B5730 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_100b5730_100B5730() {
    __asm {
        push ebx
        push ebp
        push edi
        mov edi, ecx
        xor eax, eax
        xor ebp, ebp
        lea ecx, [edi + 88h]
        xor ebx, ebx
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [edi + 84h]
        cmp eax, ebp
        mov dword ptr [edi + 9ch], ebp
        mov dword ptr [edi + 0a0h], ebp
        mov dword ptr [edi + 0a4h], ebp
        mov dword ptr [edi + 0a8h], ebp
        mov dword ptr [edi + 0ach], ebp
        ; Exact mapped bytes 7E 3A: jle 0x100b57b1
        __asm _emit 0x7e
        __asm _emit 0x3a
        push esi
        lea esi, [edi + 0b4h]
        mov ecx, dword ptr [esi - 4]
        push ebp
        ; Exact mapped bytes E8 99 9F 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 91 9F 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi - 4]
        push -64h
        ; Exact mapped bytes E8 C7 99 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push -64h
        ; Exact mapped bytes E8 BE 99 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 84h]
        inc ebx
        add esi, 8
        cmp ebx, eax
        ; Exact mapped bytes 7C CE: jl 0x100b577e
        __asm _emit 0x7c
        __asm _emit 0xce
        pop esi
        pop edi
        pop ebp
        pop ebx
        ret
    }
}
