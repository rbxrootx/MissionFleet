// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C6170 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_584c6170_584C6170() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ec87h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895d08h
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 5F 6C 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], 0
        push 9ch
        ; Exact mapped bytes E8 3C AE 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xae
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x584c61ef
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 1000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 EF 26 00: call 0x587350f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0x26
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c61f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 30h], edx
        mov eax, dword ptr [ebp - 10h]
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
