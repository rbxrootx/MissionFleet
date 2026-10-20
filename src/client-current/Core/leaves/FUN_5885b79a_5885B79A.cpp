// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885B79A .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_5885b79a_5885B79A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 75 15: jne 0x5885b7cc
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 B3 6C 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 E4 57 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 75: jmp 0x5885b841
        __asm _emit 0xeb
        __asm _emit 0x75
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 E5: je 0x5885b7b7
        __asm _emit 0x74
        __asm _emit 0xe5
        push esi
        push dword ptr [ebp + 14h]
        push edi
        ; Exact mapped bytes E8 54 D9 FF FF: call 0x58859130
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push dword ptr [ebp + 1ch]
        lea ecx, [ebp - 98h]
        mov esi, eax
        ; Exact mapped bytes E8 E9 C4 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 20h]
        lea eax, [edi + esi]
        mov dword ptr [ebp - 88h], edi
        mov dword ptr [ebp - 84h], eax
        lea ecx, [ebp - 7ch]
        lea eax, [ebp - 94h]
        mov dword ptr [ebp - 80h], edi
        push eax
        push dword ptr [ebp + 18h]
        lea eax, [ebp - 88h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 29 23 00 00: call 0x5885db4b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 7ch]
        ; Exact mapped bytes E8 13 50 00 00: call 0x5886083d
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 8ch], 0
        pop esi
        ; Exact mapped bytes 74 0D: je 0x5885b841
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 98h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 04 58 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
