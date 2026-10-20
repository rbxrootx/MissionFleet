// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511BA2 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_00511ba2_00511BA2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 05: jne 0x511bbc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x511c68
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        push 367h
        push 367h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x511c11
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        push 0
        push 367h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 98 BF 68 00: call dword ptr [0x68bf98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x511c0b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fah
        push 673dc0h
        ; Exact mapped bytes E8 3A 71 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511c0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x511bdd
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact mapped bytes FF 15 DC BE 68 00: call dword ptr [0x68bedc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x511c25
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 60 BC 68 00: call dword ptr [0x68bc60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F8 10 FC FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 102h
        push 673dc0h
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 1D 86 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 50h], 0
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 25 9A 01 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
