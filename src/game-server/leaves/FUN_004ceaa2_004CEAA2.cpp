// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEAA2 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_004ceaa2_004CEAA2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c73eh
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
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 3F 24 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A5 C0 02 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ceaf3
        __asm _emit 0x75
        __asm _emit 0x14
        push 2deh
        push 5c4c5ch
        ; Exact mapped bytes E8 12 5F 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ceaf3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4ceacf
        __asm _emit 0x75
        __asm _emit 0xd6
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 14h]
        push eax
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 95 24 06 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 500h
        ; Exact mapped bytes FF 15 40 24 5E 00: call dword ptr [0x5e2440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4ceb2b
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 05: jne 0x4ceb30
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 7C 12 00 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C1 EF 01 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D8 23 5E 00: call dword ptr [0x5e23d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F0 EC 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xec
        __asm _emit 0x01
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
