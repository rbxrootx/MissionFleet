// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DEC0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_5857dec0_5857DEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 77 2C: ja 0x5857df01
        __asm _emit 0x77
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 8D 70 DF 57 58: jmp dword ptr [ecx*4 + 0x5857df70]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0x57
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 7b6c3f01h
        ; Exact mapped bytes EB 19: jmp 0x5857df01
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 0b19b5277h
        ; Exact mapped bytes EB 10: jmp 0x5857df01
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 548f6d31h
        ; Exact mapped bytes EB 07: jmp 0x5857df01
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 698f0db3h
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 77 F1 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x77
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 37 FF FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 37 FF FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 37 FF FF: call 0x58571660
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        xor ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 4
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 80013112h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 EA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
