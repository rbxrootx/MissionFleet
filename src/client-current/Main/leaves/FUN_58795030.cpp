// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58795030 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_58795030() {
    __asm {
        push -1
        push 58980546h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 8]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes E8 F6 7B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58795074
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 7E FE FD FF: call 0x58774ef0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58795076
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 198h
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes A3 F0 47 A2 58: mov dword ptr [0x58a247f0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 7B 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7b
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 10h], 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x587950b2
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        push 0
        push 58997e84h
        mov ecx, eax
        ; Exact mapped bytes E8 C0 EC 15 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xec
        __asm _emit 0x15
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587950b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes A3 10 46 A2 58: mov dword ptr [0x58a24610], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 1
        mov ecx, dword ptr [esp + 8]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        add esp, 10h
        ret
    }
}
