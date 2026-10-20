// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885B633 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_5885b633_5885B633() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x5885b64b
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes E8 6C 6B 01 00: call 0x588721b4
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        leave
        ret
        xor eax, eax
        push esi
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov byte ptr [ebp - 4], al
        ; Exact mapped bytes E8 C3 CF FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 CB FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5885b67e
        __asm _emit 0x74
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x5885b689
        __asm _emit 0xeb
        __asm _emit 0x0b
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2E 6B 01 00: call 0x588721b4
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov esi, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x5885b698
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 15 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        leave
        ret
    }
}
