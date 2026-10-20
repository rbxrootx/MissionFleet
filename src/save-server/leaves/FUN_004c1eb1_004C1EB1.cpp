// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1EB1 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004c1eb1_004C1EB1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 84 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        push 6769cch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 6769c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 69 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B1 6B 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5E 69 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 3E 06 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 34: jle 0x4c1f2d
        __asm _emit 0x7e
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 4B 06 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4c1f2d
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB 4B 06 00: call 0x526ad1
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 6769d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 69 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F9 6B 06 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB D7: jmp 0x4c1f04
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 6769dch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 69 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x69
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
