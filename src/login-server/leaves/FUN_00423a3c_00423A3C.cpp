// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423A3C .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00423a3c_00423A3C() {
    __asm {
        ; Exact mapped bytes A1 5C 10 45 00: mov eax, dword ptr [0x45105c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 4C 10 45 00: mov ecx, dword ptr [0x45104c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push edi
        xor edi, edi
        cmp eax, ecx
        ; Exact mapped bytes 75 30: jne 0x423a7f
        __asm _emit 0x75
        __asm _emit 0x30
        lea eax, [ecx + ecx*4 + 50h]
        shl eax, 2
        push eax
        ; Exact mapped bytes FF 35 60 10 45 00: push dword ptr [0x451060]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 48 C1 43 00: call dword ptr [0x43c148]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 61: je 0x423acf
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 83 05 4C 10 45 00 10: add dword ptr [0x45104c], 0x10
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes A3 60 10 45 00: mov dword ptr [0x451060], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 10 45 00: mov eax, dword ptr [0x45105c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 10 45 00: mov ecx, dword ptr [0x451060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        push 41c4h
        push 8
        lea eax, [eax + eax*4]
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        lea esi, [ecx + eax*4]
        ; Exact mapped bytes FF 15 28 C1 43 00: call dword ptr [0x43c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, edi
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 74 2A: je 0x423acf
        __asm _emit 0x74
        __asm _emit 0x2a
        push 4
        push 2000h
        push 100000h
        push edi
        ; Exact mapped bytes FF 15 80 C1 43 00: call dword ptr [0x43c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, edi
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 75 14: jne 0x423ad3
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [esi + 10h]
        push edi
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C1 43 00: call dword ptr [0x43c12c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x423aea
        __asm _emit 0xeb
        __asm _emit 0x17
        or dword ptr [esi + 8], 0ffffffffh
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], edi
        ; Exact mapped bytes FF 05 5C 10 45 00: inc dword ptr [0x45105c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        or dword ptr [eax], 0ffffffffh
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
