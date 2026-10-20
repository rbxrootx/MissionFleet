// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F87B0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_586f87b0_586F87B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 82 EE 00 00 00: jb 0x586f88b1
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1fh
        ; Exact mapped bytes 0F 83 E4 00 00 00: jae 0x586f88b1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 EF FF FF: call 0x586f76e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x586f88b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx*4 + 1cch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2e0h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1cch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 EC FF FF: call 0x586f7420
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 D8 D8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 264h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FF 6F DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 35ch], 0ffffffffh
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f8860
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1fh
        ; Exact mapped bytes 7D 4B: jge 0x586f88b1
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 41: je 0x586f88af
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1cch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2F: jne 0x586f88af
        __asm _emit 0x75
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1cch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2e0h]
        mov dword ptr [ebp - 18h], eax
        push 588b327fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 D7 D8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd7
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A6: jmp 0x586f8857
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
