// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850550 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_58850550_58850550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov ebx, dword ptr [esp + 58h]
        mov dword ptr [ebp - 50h], 80000026h
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 40h], 0
        lea eax, [ebp - 50h]
        mov ebp, dword ptr [ebx]
        mov esi, dword ptr [ebx + 18h]
        ; Exact mapped bytes 64 3B 35 00 00 00 00: cmp esi, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 12 00 00 00: je 0x588505a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push 0
        push eax
        push 588505a2h
        push esi
        ; Exact mapped bytes E8 A5 C8 02 00: call 0x5887ce47
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        pop esi
        pop ebx
        cmp esi, 0
        ; Exact mapped bytes 0F 84 3F 00 00 00: je 0x588505ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 20h]
        push eax
        ; Exact mapped bytes E8 D5 05 00 00: call 0x58850b8b
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, eax
        ; Exact mapped bytes 0F 84 21 00 00 00: je 0x588505df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 20h]
        cmp eax, 56433230h
        ; Exact mapped bytes 0F 85 13 00 00 00: jne 0x588505df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        or eax, eax
        ; Exact mapped bytes 0F 84 15 00 00 00: je 0x588505ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 0D 00 00 00: jmp 0x588505ec
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 87 00 00 00: call 0x58850670
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 0
        mov eax, dword ptr [ebx + 14h]
        ; Exact mapped bytes E8 2A 01 00 00: call 0x58850720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ebx
        mov ebx, dword ptr [edx + 4]
        mov edi, dword ptr [edx + 8]
        mov esi, dword ptr [edx + 0ch]
        mov eax, dword ptr [esp + 5ch]
        cmp eax, 1
        adc eax, 0
        mov esp, dword ptr [edx + 10h]
        add esp, 4
        ; Exact mapped bytes FF 62 14: jmp dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x14
    }
}
