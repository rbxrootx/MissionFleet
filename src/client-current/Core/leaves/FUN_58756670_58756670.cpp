// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756670 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58756670_58756670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2C: je 0x587566ab
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 E4 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe4
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x587566ab
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 5E 0B D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 12eh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 26 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6B: jmp 0x58756716
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x587566dd
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 65 E4 D2 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe4
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x587566dd
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 2C 0B D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 12eh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 96 26 D8 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x58756716
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3020h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4 + 808h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3020h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx*4 + 1008h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 301ch], 1
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
