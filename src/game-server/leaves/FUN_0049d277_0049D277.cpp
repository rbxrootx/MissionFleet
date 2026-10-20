// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D277 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0049d277_0049D277() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x49d28a
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 15: jne 0x49d2a7
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 74 1B: je 0x49d2c2
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 84 24 5E 00: call dword ptr [0x5e2484]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9E F5 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
