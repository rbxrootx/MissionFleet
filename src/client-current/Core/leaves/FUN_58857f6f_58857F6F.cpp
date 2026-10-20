// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857F6F .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_58857f6f_58857F6F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x58857f90
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 EE A4 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 1F 90 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        leave
        ret
        push esi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 83 FF FF FF: call 0x58857f1f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58857fd1
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ecx, [ebp - 8]
        push ecx
        push dword ptr [ebp + 18h]
        push eax
        push 58857e13h
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 F8 43 89 58: call dword ptr [0x588943f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x58857fe0
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 43 A4 00 00: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor esi, esi
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B6 FE FF FF: call 0x58857e91
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
        mov ecx, dword ptr [ebp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58857fec
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E1: jmp 0x58857fd3
        __asm _emit 0xeb
        __asm _emit 0xe1
    }
}
