// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D253 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0045d253_0045D253() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 9B E4 0E 00: call 0x54b6ff
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 E3 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45d27e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 26 E3 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x45d299
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2C E5 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB E4 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 6A: jmp 0x45d303
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE E2 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45d2b3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 E2 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45d2ce
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F7 E4 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 E4 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 35: jmp 0x45d303
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 AB F5 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 5D E8: fstp qword ptr [ebp - 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 99 F5 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DC 6D E8: fsubr qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 E4 0E 00: call 0x54b727
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
