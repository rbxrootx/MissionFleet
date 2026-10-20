// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561AF0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58561af0_58561AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 BC 4E F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58561b14
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F A5 F2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 67: je 0x58561b81
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE A3 F2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 3F: je 0x58561b66
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 A3 F2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x58561b51
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58561b58
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 A3 F2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 A3 F2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 8
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 B8 F4 2C 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 88: jmp 0x58561b09
        __asm _emit 0xeb
        __asm _emit 0x88
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 E4 FE FF FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
