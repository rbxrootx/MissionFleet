// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046089A .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_0046089a_0046089A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 CB EA 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 D6 0D 0D 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        push -1
        push 0
        push 0
        push 16h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 3D 0E 0D 00: call 0x531728
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 16 0E 0D 00: call 0x53170d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 ED 0D 0D 00: call 0x5316f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F4 E7 06 00: call 0x4cf100
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 18h
        ; Exact mapped bytes E8 96 0D 0D 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 76 EA 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        push eax
        ; Exact mapped bytes E8 6A 0D 0D 00: call 0x531694
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 18h
        ; Exact mapped bytes E8 69 0E 0D 00: call 0x5317a2
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 00 0B 0D 00: call 0x531442
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C0 0B 0D 00: call 0x53150a
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x0d
        __asm _emit 0x00
        cdq
        push 0
        push 3e8h
        push edx
        push eax
        ; Exact mapped bytes E8 A7 BA 04 00: call 0x4ac400
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x460988
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 8
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 2000000h
        push 8002c001h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 68 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x46098a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 4C 7E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7e
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
