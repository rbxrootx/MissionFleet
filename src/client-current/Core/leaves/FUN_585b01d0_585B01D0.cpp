// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B01D0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_585b01d0_585B01D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 48 ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [eax + 0a4h], 1
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 FE FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x585b0206
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 87 00 00: call 0x585b89b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585b0221
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C FF FF FF: call 0x585b0130
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x585b0221
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 8A 00 00: call 0x585b8c20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 6C 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dd4h]
        ; Exact mapped bytes E8 F7 FF 0B 00: call 0x58670230
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
