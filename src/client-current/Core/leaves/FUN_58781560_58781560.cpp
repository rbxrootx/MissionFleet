// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781560 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58781560_58781560() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ea87h
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
        push 0d74h
        ; Exact mapped bytes E8 72 FA 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 15: je 0x587815ba
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8B D9 FC FF: call 0x5874ef40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587815c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 1E: jne 0x587815fb
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 21: jmp 0x5878161c
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
