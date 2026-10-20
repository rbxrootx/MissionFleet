// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A0D0 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_0041a0d0_0041A0D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        push esi
        mov esi, ecx
        test bl, 80h
        ; Exact mapped bytes 74 0A: je 0x41a0ea
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        and eax, 3
        cmp al, 3
        ; Exact mapped bytes 74 54: je 0x41a147
        __asm _emit 0x74
        __asm _emit 0x54
        test bl, 2
        ; Exact mapped bytes 74 0B: je 0x41a103
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 2ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 30h]
        ; Exact mapped bytes EB 09: jmp 0x41a10c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 10h]
        test bl, 1
        mov dword ptr [ebp + 1ch], eax
        ; Exact mapped bytes 74 0E: je 0x41a122
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 34h]
        mov ecx, dword ptr [esi + 38h]
        sub eax, dword ptr [esi + 2ch]
        sub ecx, dword ptr [esi + 30h]
        ; Exact mapped bytes EB 06: jmp 0x41a128
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 18h]
        push edi
        mov edi, ebx
        not edi
        shr edi, 3
        and edi, 1
        mov edx, dword ptr [esi]
        push edi
        push ecx
        push eax
        mov ecx, esi
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        test bl, 40h
        ; Exact mapped bytes 74 0C: je 0x41a158
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 5
        mov ecx, esi
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and bl, 3fh
        or ebx, 3
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x41a168
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push ebx
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        push dword ptr [esi + 20h]
        ; Exact mapped bytes FF 15 D4 C4 43 00: call dword ptr [0x43c4d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
