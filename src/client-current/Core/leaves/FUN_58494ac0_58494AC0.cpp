// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58494AC0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_58494ac0_58494AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 5f5e100h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 72 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 1E FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 33: je 0x58494b2b
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 73 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 0B 00 00: call 0x58495650
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7E 12: jle 0x58494b1e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 73 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 35 0B 00 00: call 0x58495650
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 75 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C7: jmp 0x58494af2
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BD 71 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 1E FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x58494b77
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 73 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 A8 00 00: call 0x5849f460
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 75 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D6: jmp 0x58494b4d
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov esp, ebp
        pop ebp
        ret
    }
}
