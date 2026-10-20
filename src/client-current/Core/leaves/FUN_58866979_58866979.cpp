// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866979 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58866979_58866979() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0E: jne 0x58866995
        __asm _emit 0x75
        __asm _emit 0x0e
        push dword ptr [ebp + 0ch]
        push 0
        ; Exact mapped bytes E8 12 FF FF FF: call 0x588668a3
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
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
        ; Exact mapped bytes E8 79 1C FF FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 17 FF FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588669c8
        __asm _emit 0x74
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 0F: jmp 0x588669d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 FE FF FF: call 0x588668a3
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov esi, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x588669e6
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 62 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop esi
        leave
        ret
    }
}
