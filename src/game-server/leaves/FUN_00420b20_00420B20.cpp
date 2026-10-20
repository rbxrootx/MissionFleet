// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420B20 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00420b20_00420B20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a0e9h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EF 84 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9F EA FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 3B 0D 3C 2F 5D 00: cmp ecx, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x420b81
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 89 EA FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB D7: jmp 0x420b58
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8A 85 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 33 7C 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
