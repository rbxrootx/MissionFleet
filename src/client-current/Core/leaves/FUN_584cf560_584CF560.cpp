// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF560 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_584cf560_584CF560() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f32dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 AF F8 FF FF: call 0x584cee40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        push 58898868h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 38 F8 FF FF: call 0x584cede0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 4E F8 FF FF: call 0x584cee00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x584cf5ef
        __asm _emit 0x74
        __asm _emit 0x33
        push 5889887ch
        push 0
        push 1
        push 0
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 2ch], eax
        push 58898894h
        push 58898863h
        ; Exact mapped bytes E8 41 02 00 00: call 0x584cf820
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push -1
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 32 A7 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa7
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 3C 1A 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x1a
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
