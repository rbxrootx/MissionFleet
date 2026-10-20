// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853AFA0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_5853afa0_5853AFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882d0dh
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
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE 37 28 00: call 0x587be7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a72e4h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 30: je 0x5853b018
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 14h], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 3B 28 00: call 0x587beb40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3b
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 12: jne 0x5853b016
        __asm _emit 0x75
        __asm _emit 0x12
        push 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D A4 20 96 58: mov ecx, dword ptr [0x589620a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 67 FB FF: call 0x584f1750
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5853b032
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 94h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
