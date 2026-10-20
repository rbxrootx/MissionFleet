// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00499400 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00499400_00499400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x4994a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x4994a3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 200h
        lea eax, [ebp - 200h]
        push eax
        ; Exact mapped bytes E8 DB 6D 01 00: call 0x4b0220
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 208h], eax
        cmp dword ptr [ebp - 208h], 200h
        ; Exact mapped bytes 72 21: jb 0x49947b
        __asm _emit 0x72
        __asm _emit 0x21
        push 5caf2ch
        push 0
        push 142h
        push 5caf20h
        push 2
        ; Exact mapped bytes E8 BE 76 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49947b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x49944e
        __asm _emit 0x75
        __asm _emit 0xcd
        push 5caf18h
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 200h]
        push edx
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
