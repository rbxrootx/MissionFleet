// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887926E .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5887926e_5887926E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        xor eax, eax
        push esi
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov byte ptr [ebp - 4], al
        ; Exact mapped bytes E8 98 F3 FD FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 DB EE FD FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588792a9
        __asm _emit 0x74
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x588792c8
        __asm _emit 0xeb
        __asm _emit 0x1f
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp - 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 00 00 00: call 0x588792fc
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov esi, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x588792d7
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 39 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        pop esi
        leave
        ret
    }
}
