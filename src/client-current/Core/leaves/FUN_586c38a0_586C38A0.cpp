// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C38A0 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_586c38a0_586C38A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 98h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 47 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x47
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0E: jmp 0x586c38d7
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6C 4D FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        add eax, 98h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A2 48 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x48
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D9 40 DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x40
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 5B: je 0x586c3959
        __asm _emit 0x74
        __asm _emit 0x5b
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2A 41 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x41
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        movzx ecx, word ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 42: jne 0x586c3954
        __asm _emit 0x75
        __asm _emit 0x42
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 16 41 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x41
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 6]
        movzx eax, word ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 2E: jne 0x586c3954
        __asm _emit 0x75
        __asm _emit 0x2e
        movzx ecx, word ptr [ebp + 8]
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x586c3943
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F9 40 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x40
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        sub edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0F: jmp 0x586c3952
        __asm _emit 0xeb
        __asm _emit 0x0f
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E5 40 DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x40
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 05: jmp 0x586c3959
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x586c38c9
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
