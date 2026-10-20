// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858E45 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_58858e45_58858E45() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        cmp eax, 1ah
        ; Exact mapped bytes 76 29: jbe 0x58858e88
        __asm _emit 0x76
        __asm _emit 0x29
        ; Exact mapped bytes E8 F6 95 00 00: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0fh
        ; Exact mapped bytes E8 00 96 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes E8 31 81 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CA 81 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x58858e8f
        __asm _emit 0x75
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB ED: jmp 0x58858e7c
        __asm _emit 0xeb
        __asm _emit 0xed
        add eax, 40h
        push 3ah
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        pop eax
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        push 5ch
        pop eax
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FA: mov word ptr [ebp - 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfa
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 E4 41 89 58: call dword ptr [0x588941e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 C0: je 0x58858e7a
        __asm _emit 0x74
        __asm _emit 0xc0
        xor eax, eax
        cmp ecx, 1
        setne al
        ; Exact mapped bytes EB B8: jmp 0x58858e7c
        __asm _emit 0xeb
        __asm _emit 0xb8
    }
}
