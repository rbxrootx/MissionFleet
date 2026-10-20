// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF760 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_584ef760_584EF760() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 8010h
        ; Exact mapped bytes E8 83 23 34 00: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8010h], ecx
        mov dword ptr [ebp - 8008h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 8000h
        push 1
        lea ecx, [ebp - 8004h]
        push ecx
        ; Exact mapped bytes E8 E3 71 36 00: call 0x58856981
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x71
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 800ch], eax
        cmp dword ptr [ebp - 800ch], 0
        ; Exact mapped bytes 74 28: je 0x584ef7d8
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8008h]
        push edx
        mov eax, dword ptr [ebp - 800ch]
        push eax
        lea ecx, [ebp - 8004h]
        push ecx
        mov ecx, dword ptr [ebp - 8010h]
        ; Exact mapped bytes E8 90 F4 FF FF: call 0x584eec60
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8008h], eax
        ; Exact mapped bytes EB AF: jmp 0x584ef787
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [ebp - 8008h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 68 18 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
