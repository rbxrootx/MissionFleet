// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831C85 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_58831c85_58831C85() {
    __asm {
        push 10h
        push 588ec5a0h
        ; Exact mapped bytes E8 CF 0A 00 00: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [ebp - 20h], ebx
        mov byte ptr [ebp - 19h], bl
        mov dword ptr [ebp - 4], ebx
        cmp ebx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 1B: je 0x58831cbc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        add dword ptr [ebp + 8], eax
        inc ebx
        mov dword ptr [ebp - 20h], ebx
        ; Exact mapped bytes EB E0: jmp 0x58831c9c
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov al, 1
        mov byte ptr [ebp - 19h], al
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 18 00 00 00: call 0x58831ce5
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
