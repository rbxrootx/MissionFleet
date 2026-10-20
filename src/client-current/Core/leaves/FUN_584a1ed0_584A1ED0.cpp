// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1ED0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_584a1ed0_584A1ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 8
        ; Exact mapped bytes E8 9E 5A FE FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 BF 53 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x53
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 9E 53 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 83 F3 FF FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 87 53 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3C 03 00 00: call 0x584a2270
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 3]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F EF FF FF: call 0x584a0e90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
