// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF910 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_584cf910_584CF910() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f3ddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 588988a8h
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 B7 02 00 00: call 0x584cfc00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x584cf95a
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0fh
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 17 82 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 588988ach
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 99 02 00 00: call 0x584cfc00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x584cf97a
        __asm _emit 0x75
        __asm _emit 0x0f
        push 11h
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 F9 81 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x584cf9a2
        __asm _emit 0xeb
        __asm _emit 0x28
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 5E 50 FB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x50
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 77 0F: ja 0x584cf995
        __asm _emit 0x77
        __asm _emit 0x0f
        push 0eh
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 DE 81 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x584cf9a2
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 10h
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 CF 81 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 14h], esp
        push 589604e0h
        ; Exact mapped bytes E8 1C A1 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 E7 FE FF FF: call 0x584cf8a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 A3 81 FF FF: call 0x584c7b70
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 53 A3 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
