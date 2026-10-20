// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2BF9 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004d2bf9_004D2BF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 89 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d2c12
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 55: jmp 0x4d2c67
        __asm _emit 0xeb
        __asm _emit 0x55
        push 887h
        push 671a64h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 3B 76 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4d2c5e
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4d2c5e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB D0: jmp 0x4d2c2e
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 48 CC FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
