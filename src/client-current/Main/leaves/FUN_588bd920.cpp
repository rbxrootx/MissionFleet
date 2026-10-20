// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BD920 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_588bd920() {
    __asm {
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 3d4h]
        mov esi, dword ptr [ecx + 88h]
        push edi
        lea edi, [ebp + 3d4h]
        ; Exact mapped bytes E8 34 A8 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, -7
        cmp eax, esi
        ; Exact mapped bytes 7D 2E: jge 0x588bd971
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov ecx, dword ptr [edi]
        cmp dword ptr [ecx + 88h], 7
        ; Exact mapped bytes 7E 23: jle 0x588bd971
        __asm _emit 0x7e
        __asm _emit 0x23
        push ebx
        ; Exact mapped bytes E8 1C A8 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        inc esi
        mov ebx, 2
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 28 A8 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F0: jne 0x588bd960
        __asm _emit 0x75
        __asm _emit 0xf0
        pop ebx
        pop edi
        pop esi
        mov ecx, ebp
        pop ebp
        ; Exact mapped bytes E9 15 F3 FF FF: jmp 0x588bcc90
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
