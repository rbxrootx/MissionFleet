// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004053A4 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_004053a4_004053A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 7E: je 0x405453
        __asm _emit 0x74
        __asm _emit 0x7e
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 4
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 3E: je 0x405444
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes EB 09: jmp 0x405411
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 2D: jle 0x405444
        __asm _emit 0x7e
        __asm _emit 0x2d
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 0ch]
        push eax
        push 4
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB C4: jmp 0x405408
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 03: jmp 0x405456
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
