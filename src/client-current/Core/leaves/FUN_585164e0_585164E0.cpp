// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585164E0 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_585164e0_585164E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C F4 F7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 3C: jne 0x58516535
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B F4 F6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5851651f
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 F9 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x58516533
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE F9 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x58516578
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 F3 F6 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58516564
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F F9 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x58516578
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 69 F9 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
