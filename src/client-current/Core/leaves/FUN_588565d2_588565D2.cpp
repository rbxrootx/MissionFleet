// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588565D2 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_588565d2_588565D2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x588565f2
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 8B BE 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 BD A9 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 4D: jmp 0x5885663f
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp + 10h]
        push ebx
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x5885661c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ebx, dword ptr [ebp + 18h]
        movzx eax, bl
        inc eax
        mov byte ptr [ecx], 0
        cmp edx, eax
        ; Exact mapped bytes 77 09: ja 0x58856611
        __asm _emit 0x77
        __asm _emit 0x09
        ; Exact mapped bytes E8 62 BE 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes EB 12: jmp 0x58856623
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, dword ptr [ebp + 14h]
        lea eax, [esi - 2]
        cmp eax, 22h
        ; Exact mapped bytes 76 13: jbe 0x5885662f
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes E8 4E BE 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 80 A9 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 0F: jmp 0x5885663e
        __asm _emit 0xeb
        __asm _emit 0x0f
        push ebx
        push esi
        push edx
        push ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 FD FF FF: call 0x588563c2
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebx
        pop esi
        pop ebp
        ret
    }
}
