// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D81D .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0041d81d_0041D81D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 93 13 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 6F 12 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 66 15 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41d877
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x41d8a0
        __asm _emit 0xeb
        __asm _emit 0x29
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D1 14 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x41d89e
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 BA FF FF: call 0x4192eb
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41d8a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 36 AF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
