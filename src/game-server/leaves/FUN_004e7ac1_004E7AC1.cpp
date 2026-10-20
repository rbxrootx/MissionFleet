// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7AC1 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004e7ac1_004E7AC1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 37 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c8f5ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c8f54h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C D0 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 71 D2 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1E D0 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A A4 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x4e7b3d
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D B1 04 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4e7b3d
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 B1 04 00: call 0x532d08
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 5c8f68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 CF 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B9 D2 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x4e7b14
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 5c8f6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 CF 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcf
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
