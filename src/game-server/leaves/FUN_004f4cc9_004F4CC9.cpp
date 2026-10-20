// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4CC9 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004f4cc9_004F4CC9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 6E 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f4ce2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 55: jmp 0x4f4d37
        __asm _emit 0xeb
        __asm _emit 0x55
        push 887h
        push 5c5574h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 6B 64 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4f4d2e
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4f4d2e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB D0: jmp 0x4f4cfe
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 48 CC FF FF: call 0x4f197f
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
