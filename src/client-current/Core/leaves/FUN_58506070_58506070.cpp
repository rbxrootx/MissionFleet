// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506070 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_58506070_58506070() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588804b1h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 24: je 0x585060c9
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3cd0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 C7 FD FF FF: call 0x58505e80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx], 588a3ccch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        sub edx, 8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax - 4], edx
        movzx edx, byte ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 29: je 0x58506126
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5850610c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 0E: jmp 0x5850611a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 C8 A9 32 00: call 0x58830aeb
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa9
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
