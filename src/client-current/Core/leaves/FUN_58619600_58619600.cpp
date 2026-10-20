// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58619600 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_58619600_58619600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 98h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B 4B EB FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 98h]
        ; Exact mapped bytes E8 89 B3 E6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        add ecx, 104h
        mov eax, dword ptr [ebp - 34h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1D C0 19 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 74 02: je 0x586196a2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 7D: jmp 0x5861971f
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 E2 29 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 50 C0 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        ; Exact mapped bytes E8 A4 29 E7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 14h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 12 C0 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
