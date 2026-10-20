// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046026A .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_0046026a_0046026A() {
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
        ; Exact mapped bytes E8 01 F1 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 F5 13 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 F4 14 0D 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8B 11 0D 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4B 12 0D 00: call 0x53150a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        imul eax, eax, 3e8h
        cdq
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 38: je 0x46030a
        __asm _emit 0x74
        __asm _emit 0x38
        push 0
        push 0
        push 0
        mov ecx, 20h
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 58 C1 04 00: call 0x4ac440
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc1
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
        ; Exact mapped bytes E8 2F 6F 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x46030c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CA 84 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x84
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
