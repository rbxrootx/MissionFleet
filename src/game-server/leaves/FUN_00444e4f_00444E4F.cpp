// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444E4F .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_00444e4f_00444E4F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57afc3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 1ch], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AC 60 0F 00: call 0x53af32
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 95 6E 0F 00: call 0x53bd2a
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 26 61 0F 00: call 0x53afc6
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 160h
        ; Exact mapped bytes E8 88 67 09 00: call 0x4db636
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x444ed7
        __asm _emit 0x75
        __asm _emit 0x24
        push 5b6790h
        push 69h
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 83 62 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b67a0h
        push 67h
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 72 62 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 45: jmp 0x444f1c
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 160h
        ; Exact mapped bytes E8 51 67 09 00: call 0x4db636
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x444f1c
        __asm _emit 0x75
        __asm _emit 0x33
        push 5b67b4h
        push 69h
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4D 62 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b67c4h
        push 68h
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3C 62 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        push 5b67d0h
        push 6bh
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2B 62 0F 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 2
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F3 E4 0A 00: call 0x4f3427
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 18 60 0F 00: call 0x53af5b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 89 38 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
