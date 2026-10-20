// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586714A0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_586714a0_586714A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889947h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
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
        mov dword ptr [ebp - 10h], ecx
        push 820h
        ; Exact mapped bytes E8 32 FB 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 21: je 0x58671506
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F D3 E5 FF: call 0x584ce8a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd3
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867150d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + eax*4 + 1d0h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 1d0h], 0
        ; Exact mapped bytes 74 1D: je 0x58671557
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8A D4 E5 FF: call 0x584ce9e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd4
        __asm _emit 0xe5
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 01: ret 0x114
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x01
    }
}
