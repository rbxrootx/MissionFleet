// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486460 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_00486460_00486460() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c444h
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
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 20ch], 0
        ; Exact mapped bytes 74 46: je 0x4864f2
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4864de
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 07 23 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x4864e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 20ch], 0
        push 144h
        ; Exact mapped bytes E8 C4 6E 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 18: je 0x486524
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 E2 7A 06 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C1 C9 F8 FF: call 0x412ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x48652b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 20ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 FC 72 06 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x72
        __asm _emit 0x06
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
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 7B 22 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
