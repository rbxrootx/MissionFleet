// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005082E6 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_005082e6_005082E6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e75ch
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 03 00 FF FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x508327
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 56: jmp 0x50837d
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 4B: je 0x50837b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B4 43 F9 FF: call 0x49c6f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 3ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA 43 F9 FF: call 0x49c730
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x50837d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
