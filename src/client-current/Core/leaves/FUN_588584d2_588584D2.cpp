// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588584D2 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_588584d2_588584D2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 06: jne 0x588584f2
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 4D: je 0x5885853f
        __asm _emit 0x74
        __asm _emit 0x4d
        lea ecx, [ebp - 24h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 18 43 89 58: call dword ptr [0x58894318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5885853f
        __asm _emit 0x74
        __asm _emit 0x3e
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 24h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 E8 41 89 58: call dword ptr [0x588941e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5885853f
        __asm _emit 0x74
        __asm _emit 0x2a
        movzx eax, word ptr [ebp - 8]
        push -1
        push eax
        movzx eax, word ptr [ebp - 0ah]
        push eax
        movzx eax, word ptr [ebp - 0ch]
        push eax
        movzx eax, word ptr [ebp - 0eh]
        push eax
        movzx eax, word ptr [ebp - 12h]
        push eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 2E 79 01 00: call 0x5886fe68
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 05: jmp 0x58858544
        __asm _emit 0xeb
        __asm _emit 0x05
        or edx, 0ffffffffh
        mov eax, edx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 02 8B FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
