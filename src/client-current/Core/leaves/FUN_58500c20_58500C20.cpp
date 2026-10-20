// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500C20 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58500c20_58500C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], 3a98h
        mov dword ptr [ebp - 0ch], 14dh
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4C: je 0x58500c8c
        __asm _emit 0x74
        __asm _emit 0x4c
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 FD FF FF: call 0x58500960
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 36: jne 0x58500c8c
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 18: jle 0x58500c76
        __asm _emit 0x7e
        __asm _emit 0x18
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 F6 FF FF: call 0x585002d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B F6 FF FF: call 0x58500310
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB BB: jmp 0x58500c47
        __asm _emit 0xeb
        __asm _emit 0xbb
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
