// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404A41 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_00404a41_00404A41() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 70h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        cdq
        idiv dword ptr [ecx + 138h]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 140h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x404b0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp - 70h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 60: je 0x404b05
        __asm _emit 0x74
        __asm _emit 0x60
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 50: jle 0x404afb
        __asm _emit 0x7e
        __asm _emit 0x50
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 5ch
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 6ch]
        push ecx
        push 1
        push 800h
        ; Exact mapped bytes FF 15 44 C2 43 00: call dword ptr [0x43c244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 02: jne 0x404af3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x404afb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB AA: jmp 0x404aa5
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x404b0d
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
