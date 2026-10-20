// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E88AE .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004e88ae_004E88AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 29 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        push 5cfee8h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5cfee0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F C2 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 84 C4 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 31 C2 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 96 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x4e892a
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 A7 04 00: call 0x533017
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4e892a
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E A7 04 00: call 0x533091
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push 5cfef4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA C1 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 C4 04 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x4e8901
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 5cfef8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 C1 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc1
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
