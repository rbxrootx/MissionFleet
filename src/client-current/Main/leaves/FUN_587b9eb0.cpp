// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9EB0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587b9eb0() {
    __asm {
        push esi
        push edi
        push 8
        mov edi, ecx
        ; Exact mapped bytes E8 73 76 1B 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x76
        __asm _emit 0x1b
        __asm _emit 0x00
        mov esi, eax
        xor eax, eax
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esp + 18h]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x587b9ed3
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x587b9ee0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 4], ecx
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0ch]
        push 0
        push 8
        push esi
        push edx
        push eax
        push 8001311fh
        mov ecx, edi
        ; Exact mapped bytes E8 75 6D 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 25 2F 1C 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2f
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
