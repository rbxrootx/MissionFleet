// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588566B4 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588566b4_588566B4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 10h]
        push esi
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x588566d4
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 A9 BD 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 DB A8 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 50: jmp 0x58856724
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp + 14h]
        push ebx
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x588566fe
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebx, dword ptr [ebp + 1ch]
        movzx eax, bl
        inc eax
        mov byte ptr [ecx], 0
        cmp edx, eax
        ; Exact mapped bytes 77 09: ja 0x588566f3
        __asm _emit 0x77
        __asm _emit 0x09
        ; Exact mapped bytes E8 80 BD 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes EB 12: jmp 0x58856705
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, dword ptr [ebp + 18h]
        lea eax, [esi - 2]
        cmp eax, 22h
        ; Exact mapped bytes 76 13: jbe 0x58856711
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes E8 6C BD 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 9E A8 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 12: jmp 0x58856723
        __asm _emit 0xeb
        __asm _emit 0x12
        push ebx
        push esi
        push edx
        push ecx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 FD FF FF: call 0x58856513
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop ebx
        pop esi
        pop ebp
        ret
    }
}
