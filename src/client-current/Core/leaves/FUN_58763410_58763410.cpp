// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58763410 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_58763410_58763410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 23ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 74 8A D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 65 40 E8 FF: call 0x585e74c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x40
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e84h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5e84h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 9E 72 E0 FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 9D 61 D8 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x61
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 21 05 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 2C C7 D3 FF: call 0x5849fbe0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc7
        __asm _emit 0xd3
        __asm _emit 0xff
        sub eax, 384h
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0E: jge 0x587634de
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        add edx, 0e10h
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x587634e4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 5ebch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 92 8B D2 FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x5876352d
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 B0 89 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7F 17: jg 0x5876352b
        __asm _emit 0x7f
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A6 AF 00 00: call 0x5876e4d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3C: jmp 0x58763569
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 55 8B D2 FF: call 0x5848c090
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 29: jne 0x58763569
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 72 89 D2 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x58763569
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e84h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 68 AF 00 00: call 0x5876e4d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
