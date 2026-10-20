// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585610B0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_585610b0_585610B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B2 6F F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6f
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585610e0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A1 69 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 70 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D2 68 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x5856112a
        __asm _emit 0x74
        __asm _emit 0x25
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 33 69 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 2C 39 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x39
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x58561128
        __asm _emit 0x75
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1C 69 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 04: jmp 0x5856112c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A7: jmp 0x585610d1
        __asm _emit 0xeb
        __asm _emit 0xa7
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
