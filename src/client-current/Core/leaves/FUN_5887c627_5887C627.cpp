// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C627 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_5887c627_5887C627() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 7E 0D: jle 0x5887c641
        __asm _emit 0x7e
        __asm _emit 0x0d
        push esi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 83 CD FD FF: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov esi, eax
        mov eax, dword ptr [ebp + 1ch]
        test eax, eax
        ; Exact mapped bytes 7E 0B: jle 0x5887c653
        __asm _emit 0x7e
        __asm _emit 0x0b
        push eax
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 6F CD FD FF: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x5887c675
        __asm _emit 0x74
        __asm _emit 0x1e
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x5887c675
        __asm _emit 0x74
        __asm _emit 0x1a
        xor ecx, ecx
        push ecx
        push ecx
        push ecx
        push eax
        push dword ptr [ebp + 18h]
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 30 FF FF: call 0x5886f6ca
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x5887c68a
        __asm _emit 0xeb
        __asm _emit 0x15
        sub esi, eax
        mov eax, esi
        sar eax, 1fh
        and eax, 0fffffffeh
        add eax, 3
        test esi, esi
        push 2
        pop ecx
        cmove eax, ecx
        pop esi
        pop ebp
        ret
    }
}
