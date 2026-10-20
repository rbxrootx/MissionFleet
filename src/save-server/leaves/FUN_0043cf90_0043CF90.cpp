// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CF90 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_0043cf90_0043CF90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F1 97 02 00: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 4C: jne 0x43cff7
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A8 50 68 00: mov ecx, dword ptr [0x6850a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 1B: jne 0x43cfd5
        __asm _emit 0x75
        __asm _emit 0x1b
        push 6711b4h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 39 00 00 00: call 0x43d000
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 64b9d0h
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 4B 89 02 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AF 97 02 00: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x43cff5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 02: jmp 0x43cff7
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B4: jmp 0x43cfab
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
