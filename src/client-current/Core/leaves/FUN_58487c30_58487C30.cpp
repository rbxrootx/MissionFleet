// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487C30 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58487c30_58487C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 04 00 00: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58487c60
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 21 FE FF FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 0ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 05 00 00: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 52 FD FF FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x58487c97
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 8C 82 01 00: call 0x5849ff20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58487c51
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ret
    }
}
