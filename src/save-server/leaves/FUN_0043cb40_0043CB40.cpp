// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043CB40 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_0043cb40_0043CB40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bd8ch
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
        sub esp, 18h
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 6B: je 0x43cbec
        __asm _emit 0x74
        __asm _emit 0x6b
        cmp dword ptr [ebp - 20h], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43cb98
        __asm _emit 0x76
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 16 F9 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 54: jmp 0x43cbec
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 685054h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x43cbc1
        __asm _emit 0x74
        __asm _emit 0x0d
        push 685094h
        ; Exact mapped bytes E8 42 5A FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x43cbec
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], 685094h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 4], 0ffffffffh
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
