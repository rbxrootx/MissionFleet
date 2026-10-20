// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB390 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_584bb390_584BB390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 CC FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb3c0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B1 FD FF FF: call 0x584bb170
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB CD FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F2 C5 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x584bb413
        __asm _emit 0x74
        __asm _emit 0x2e
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 53 C6 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1D: jne 0x584bb411
        __asm _emit 0x75
        __asm _emit 0x1d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 44 C6 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0D: jne 0x584bb411
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 34 C6 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 8
        ; Exact mapped bytes EB 04: jmp 0x584bb415
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 9E: jmp 0x584bb3b1
        __asm _emit 0xeb
        __asm _emit 0x9e
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
