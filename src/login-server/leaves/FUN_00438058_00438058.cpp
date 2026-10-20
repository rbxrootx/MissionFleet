// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438058 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00438058_00438058() {
    __asm {
        mov eax, 43b307h
        ; Exact mapped bytes E8 A6 75 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 98h
        push ebx
        push esi
        push edi
        xor esi, esi
        mov dword ptr [ebp - 10h], esp
        push esi
        push esi
        push 1
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 45 FA FF FF: call 0x437ac7
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp + 8], 0ffffffffh
        mov dword ptr [ebp - 4], esi
        lea ecx, [ebp - 0a4h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 AA FA FF FF: call 0x437b42
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 06: jne 0x4380a3
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp + 8], eax
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 85 FA FF FF: call 0x437b37
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
