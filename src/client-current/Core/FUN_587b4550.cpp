// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4550 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587b4550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 13: jne 0x587b456f
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 57 00 00 00: call 0x587b45c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov edx, 2
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 BB CA 07 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 5F 90 58: mov ecx, dword ptr [0x58905f88]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
