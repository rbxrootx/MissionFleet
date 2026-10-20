// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852D4D0 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_5852d4d0_5852D4D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 98h], ecx
        push 588a4b28h
        ; Exact mapped bytes E8 FD 4A FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push -1
        lea ecx, [ebp - 84h]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], eax
        push 1feh
        ; Exact mapped bytes E8 17 3B 30 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x3b
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 26 3C 32 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3c
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea eax, [ebp - 84h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5
        push 0
        push 0
        lea ecx, [ebp - 84h]
        push ecx
        push 588a4b40h
        push 0
        ; Exact mapped bytes FF 15 24 44 89 58: call dword ptr [0x58894424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 25: je 0x5852d5bb
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        ; Exact mapped bytes E8 9D 3A 30 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3a
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], 0
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8B 3A 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
