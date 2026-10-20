// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886343E .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5886343e_5886343E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 310h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58863462
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x58863483
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 08 F0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 39 DB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5886347e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 2E: jmp 0x588634b1
        __asm _emit 0xeb
        __asm _emit 0x2e
        lea ecx, [ebp - 310h]
        push ecx
        lea ecx, [ebp + 0ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 2A 00 00 00: call 0x588634be
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        lea ecx, [ebp - 310h]
        push ecx
        push eax
        ; Exact mapped bytes E8 06 95 FF FF: call 0x5885c9a8
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        add esp, 18h
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x588634b1
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 94 DB FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
