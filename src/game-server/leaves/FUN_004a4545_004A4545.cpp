// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4545 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_004a4545_004A4545() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 6D 09 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5E: je 0x4a45bd
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 70 09 00: call 0x53b58f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D0 6D 09 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6d
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x4a4590
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 13: jle 0x4a45a9
        __asm _emit 0x7e
        __asm _emit 0x13
        push 400h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 6B 09 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB DE: jmp 0x4a4587
        __asm _emit 0xeb
        __asm _emit 0xde
        push 400h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 71 09 00: call 0x53b760
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 B0 0B 00: call 0x55f62f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
