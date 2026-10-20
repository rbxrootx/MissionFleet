// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043810F .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_0043810f_0043810F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        cmp dword ptr [eax - 1ch], edi
        ; Exact mapped bytes 75 39: jne 0x438159
        __asm _emit 0x75
        __asm _emit 0x39
        cmp dword ptr [ebp + 0ch], 1
        push esi
        ; Exact mapped bytes 74 06: je 0x43812d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 27: jne 0x438154
        __asm _emit 0x75
        __asm _emit 0x27
        mov esi, 36ah
        push edi
        push esi
        push esi
        lea eax, [ebp - 1ch]
        push edi
        push eax
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x438154
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        push edi
        push esi
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 80 C3 43 00: call dword ptr [0x43c380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes EB 13: jmp 0x43816c
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 0A: je 0x438169
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 74 04: je 0x438169
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x43816c
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [eax - 8]
        pop edi
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
