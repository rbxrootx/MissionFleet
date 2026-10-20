// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004509D2 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_004509d2_004509D2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b43ch
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 5819e0h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 53h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x450a47
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*4 + 5d7a34h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C7 C9 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB D5: jmp 0x450a1c
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 440h
        ; Exact mapped bytes E8 8B CC 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 30 EA FF FF: call 0x44f494
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 68 7D 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
