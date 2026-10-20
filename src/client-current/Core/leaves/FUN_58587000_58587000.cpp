// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58587000 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58587000_58587000() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a0h], 1
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        push ecx
        ; Exact mapped bytes E8 C8 5D 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        push edx
        ; Exact mapped bytes E8 B5 5D 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 A2 5D 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5d
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 04 00 00: call 0x585874e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 03 00 00: call 0x585873b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 02 00 00: call 0x58587350
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
