// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5930 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004b5930_004B5930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x4b593c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 58: jmp 0x4b5994
        __asm _emit 0xeb
        __asm _emit 0x58
        push 9
        ; Exact mapped bytes E8 AD F8 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 61 02 00 00: call 0x4b5bb0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x4b5977
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 08 03 00 00: call 0x4b5c70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 9
        ; Exact mapped bytes E8 1E F9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 1D: jmp 0x4b5994
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 9
        ; Exact mapped bytes E8 12 F9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 5C 02 5E 00: mov ecx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 74 22 5E 00: call dword ptr [0x5e2274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
