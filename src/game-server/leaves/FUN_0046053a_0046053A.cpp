// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046053A .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_0046053a_0046053A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 31 EE 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 25 11 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 24 12 0D 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BB 0E 0D 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7B 0F 0D 00: call 0x53150a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0x00
        imul eax, eax, 3e8h
        cdq
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x4605da
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        push 0
        mov ecx, 20h
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 BE 04 00: call 0x4ac440
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        and edx, 0
        push eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        and eax, 0
        push edx
        push 80025100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 6C 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4605dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 FA 81 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
