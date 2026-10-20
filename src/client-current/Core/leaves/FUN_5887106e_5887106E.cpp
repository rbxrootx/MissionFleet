// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887106E .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5887106e_5887106E() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sub esp, 18h
        mov eax, dword ptr [eax + 0ch]
        nop
        shr eax, 3
        test al, 1
        ; Exact mapped bytes 74 04: je 0x58871088
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 1
        leave
        ret
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        mov eax, dword ptr [eax + 0ch]
        nop
        test al, 0c0h
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 07: je 0x5887109f
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 58: je 0x588710f7
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [eax + 10h]
        nop
        push eax
        ; Exact mapped bytes E8 48 89 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        cmp esi, -1
        ; Exact mapped bytes 74 46: je 0x588710f7
        __asm _emit 0x74
        __asm _emit 0x46
        xor ebx, ebx
        lea eax, [ebp - 10h]
        inc ebx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push ebx
        push eax
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        push esi
        ; Exact mapped bytes FF 15 90 41 89 58: call dword ptr [0x58894190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x588710f7
        __asm _emit 0x74
        __asm _emit 0x25
        lea eax, [ebp - 18h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 94 41 89 58: call dword ptr [0x58894194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588710f7
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 08: jne 0x588710f1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 02: je 0x588710f3
        __asm _emit 0x74
        __asm _emit 0x02
        xor bl, bl
        mov al, bl
        ; Exact mapped bytes EB 02: jmp 0x588710f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop esi
        pop ebx
        leave
        ret
    }
}
