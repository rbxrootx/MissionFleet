// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586410C0 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_586410c0_586410C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5864118e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586410e5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 6ch]
        ; Exact mapped bytes E8 F7 85 EE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 36: jge 0x58641134
        __asm _emit 0x7d
        __asm _emit 0x36
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED FA 17 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0x17
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B7 FA 20 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfa
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x58641132
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5C: jmp 0x5864118e
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes EB A8: jmp 0x586410dc
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 10h], ecx
        push 83add7h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 F3 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 14h], ecx
        push 83add7h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 F3 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
