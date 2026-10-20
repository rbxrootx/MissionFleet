// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E79B0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_586e79b0_586E79B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d6a0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
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
        ; Exact mapped bytes EB 09: jmp 0x586e79dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 0ch
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 1B: je 0x586e7a00
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C2 F8 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 E5 07 00 00: call 0x586e81e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB D4: jmp 0x586e79d4
        __asm _emit 0xeb
        __asm _emit 0xd4
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
