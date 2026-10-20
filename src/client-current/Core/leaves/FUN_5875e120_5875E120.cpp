// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875E120 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5875e120_5875E120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5875e142
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 55: jge 0x5875e19d
        __asm _emit 0x7d
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0ch]
        lea ecx, [edx + ecx + 11f4h]
        ; Exact mapped bytes E8 63 88 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x88
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x5875e16d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 DF D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x5875e185
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 DD D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E 71 D3 FF: call 0x58495300
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DD: jmp 0x5875e162
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        shl eax, 4
        mov ecx, dword ptr [ebp - 0ch]
        lea ecx, [ecx + eax + 11f4h]
        ; Exact mapped bytes E8 D6 38 E0 FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x38
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9C: jmp 0x5875e139
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov esp, ebp
        pop ebp
        ret
    }
}
