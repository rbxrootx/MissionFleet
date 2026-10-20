// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501A00 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_58501a00_58501A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 30h
        ; Exact mapped bytes E8 6E 5F F8 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 8F 58 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 6E 58 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 53 F8 F9 FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        push ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 57 58 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C 08 FA FF: call 0x584a2270
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0xfa
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 3]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F F5 FF FF: call 0x58500fa0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
