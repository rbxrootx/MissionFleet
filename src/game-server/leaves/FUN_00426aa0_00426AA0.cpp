// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426AA0 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00426aa0_00426AA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a210h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 F3 E0 00 00: call 0x434bd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 5812a0h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 40008h], edx
        push 17h
        push 5b539ch
        push 10ch
        ; Exact mapped bytes E8 29 65 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40004h], ecx
        push 10ch
        push 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 40004h]
        push eax
        ; Exact mapped bytes E8 3E 28 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 1ah
        push 5b539ch
        push 34h
        ; Exact mapped bytes E8 F0 64 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x426b60
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 95 AC FE FF: call 0x4117f0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x426b67
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4000ch], eax
        push 5b5400h
        mov ecx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + 4000ch]
        ; Exact mapped bytes E8 39 AD FE FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F 04 00 00: call 0x426fb7
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE C3 00 00: call 0x432f8e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD C8 00 00: call 0x433455
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 1A 1C 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
