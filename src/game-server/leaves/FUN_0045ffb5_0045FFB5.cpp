// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045FFB5 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_0045ffb5_0045FFB5() {
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
        ; Exact mapped bytes E8 B6 F3 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 AA 16 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 8
        ; Exact mapped bytes E8 A9 17 0D 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x17
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 40 14 0D 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 00 15 0D 00: call 0x53150a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x0d
        __asm _emit 0x00
        imul eax, eax, 3e8h
        cdq
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x460040
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 8
        lea edx, [ebp - 0ch]
        push edx
        push 0
        push 1000000h
        push 8002c001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 71 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x460042
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 94 87 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x87
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
