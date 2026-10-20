// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437F3F .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00437f3f_00437F3F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        ; Exact mapped bytes 8B 35 C0 C4 43 00: mov esi, dword ptr [0x43c4c0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 3
        xor ebx, ebx
        push 0fh
        push 0fh
        lea eax, [ebp - 1ch]
        push ebx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x437f7f
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1
        pop ebx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 08 C4 43 00: call dword ptr [0x43c408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 3
        push 0fh
        push 0fh
        lea eax, [ebp - 1ch]
        push 0
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 75 E4: jne 0x437f63
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, ebx
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
