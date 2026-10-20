// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDB5A .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004cdb5a_004CDB5A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c37ch
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6349ach
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 2C: je 0x4cdbbb
        __asm _emit 0x74
        __asm _emit 0x2c
        push 6715e8h
        push 671620h
        ; Exact mapped bytes E8 77 2A FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 671624h
        push 671668h
        ; Exact mapped bytes E8 65 2A FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 31 00 00: call 0x4d0d22
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 2A 00 00: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
