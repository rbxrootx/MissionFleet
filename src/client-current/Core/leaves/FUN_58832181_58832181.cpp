// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832181 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58832181_58832181() {
    __asm {
        push 10h
        push 588ec668h
        ; Exact mapped bytes E8 D3 05 00 00: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [ebp - 20h], ebx
        mov byte ptr [ebp - 19h], bl
        mov dword ptr [ebp - 4], ebx
        cmp ebx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 74 21: je 0x588321be
        __asm _emit 0x74
        __asm _emit 0x21
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 18: call dword ptr [ebp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 10h]
        add dword ptr [ebp + 8], eax
        add dword ptr [ebp + 0ch], eax
        inc ebx
        mov dword ptr [ebp - 20h], ebx
        ; Exact mapped bytes EB DA: jmp 0x58832198
        __asm _emit 0xeb
        __asm _emit 0xda
        mov al, 1
        mov byte ptr [ebp - 19h], al
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 18 00 00 00: call 0x588321e7
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
