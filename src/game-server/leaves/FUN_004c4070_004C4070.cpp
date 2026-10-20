// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C4070 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_004c4070_004C4070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push esi
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 3ffh
        and eax, 0ffffh
        or ah, 4
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        push 78h
        lea ecx, [ebp - 7ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4c40ae
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 44: jmp 0x4c40f2
        __asm _emit 0xeb
        __asm _emit 0x44
        lea eax, [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 29 02 00 00: call 0x4c42e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 2E: je 0x4c40ed
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x4c40ed
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D B0 F0 5D 00: mov ecx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 8F 02 00 00: call 0x4c4360
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        ; Exact mapped bytes 8B 15 B0 F0 5D 00: mov edx, dword ptr [0x5df0b0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 EE 52 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 75 04: jne 0x4c40ed
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4c40f2
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
