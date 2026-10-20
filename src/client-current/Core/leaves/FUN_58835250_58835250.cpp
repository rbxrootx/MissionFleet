// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835250 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_58835250_58835250() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 588f01e0h
        ; Exact mapped bytes E8 ED 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 3C 40 89 58: call dword ptr [0x5889403c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58835303
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push 588f021ch
        ; Exact mapped bytes E8 CD 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 48 40 89 58: mov esi, dword ptr [0x58894048]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f0228h
        ; Exact mapped bytes E8 B6 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f0234h
        ; Exact mapped bytes E8 A5 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f0240h
        ; Exact mapped bytes E8 94 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f024ch
        ; Exact mapped bytes E8 83 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f0258h
        ; Exact mapped bytes E8 72 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 588f0268h
        ; Exact mapped bytes E8 61 70 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
