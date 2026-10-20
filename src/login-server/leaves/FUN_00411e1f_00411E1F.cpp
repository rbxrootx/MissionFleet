// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411E1F .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00411e1f_00411E1F() {
    __asm {
        mov eax, 43a488h
        ; Exact mapped bytes E8 DF D7 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 4], 0
        push ebx
        push esi
        not eax
        push edi
        mov esi, ecx
        shr eax, 1
        mov dword ptr [ebp - 10h], esp
        push dword ptr [ebp + 8]
        and eax, 1
        lea ecx, [esi + 18h]
        mov dword ptr [ebp - 14h], esi
        mov dword ptr [esi + 3ch], eax
        ; Exact mapped bytes E8 E1 BE 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 5F 03 00 00: call 0x4121bc
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes E8 11 04 00 00: call 0x412278
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x411e7c
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 AD 04 00 00: call 0x412330
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 2D 05 00 00: call 0x4123b7
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB DC: jmp 0x411e6b
        __asm _emit 0xeb
        __asm _emit 0xdc
    }
}
