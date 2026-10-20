// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9890 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_584a9890_584A9890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1ch
        ; Exact mapped bytes E8 DE E0 FD FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 FF D9 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dl, byte ptr [eax]
        mov byte ptr [ebp - 1], dl
        movzx eax, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], al
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 3], cl
        push ecx
        mov esi, esp
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 DE D9 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 C3 79 FF FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 C7 D9 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 7C 89 FF FF: call 0x584a2270
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 3]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F F7 FF FF: call 0x584a9030
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
