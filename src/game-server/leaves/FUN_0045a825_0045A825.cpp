// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A825 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_0045a825_0045A825() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b9c8h
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
        mov dword ptr [eax], 581a88h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 53h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x45a89a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*4 + 5d78e8h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 74 2B 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB D5: jmp 0x45a86f
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 440h
        ; Exact mapped bytes E8 38 2E 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DD 4B FF FF: call 0x44f494
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4b
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
        ; Exact mapped bytes E8 15 DF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
