// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2BEE .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004c2bee_004C2BEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 95 77 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        push 67c6c0h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 67c6b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 5C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 74 5E 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 21 5C 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 30 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x4c2c6a
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 41 06 00: call 0x526de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x41
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4c2c6a
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 07 42 06 00: call 0x526e5a
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 67c6cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA 5B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 63 5E 06 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x4c2c41
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 67c6d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 5B 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
