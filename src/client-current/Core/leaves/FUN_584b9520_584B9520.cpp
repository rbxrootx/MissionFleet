// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9520 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_584b9520_584B9520() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 0C ED FC FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x584b95aa
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 8]
        add eax, 6ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 EB FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584b955f
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 22 E5 FC FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 6ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1C EC FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 53 E4 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 24: je 0x584b95a8
        __asm _emit 0x74
        __asm _emit 0x24
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B4 E4 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 FD C2 FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x584b95a6
        __asm _emit 0x74
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9E E4 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 0A: jmp 0x584b95b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB A8: jmp 0x584b9550
        __asm _emit 0xeb
        __asm _emit 0xa8
        ; Exact mapped bytes EB 04: jmp 0x584b95ae
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x584b95b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
