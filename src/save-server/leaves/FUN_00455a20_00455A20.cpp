// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455A20 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00455a20_00455A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x455ac3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x455ac3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 200h
        lea eax, [ebp - 200h]
        push eax
        ; Exact mapped bytes E8 6B 30 01 00: call 0x468ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 208h], eax
        cmp dword ptr [ebp - 208h], 200h
        ; Exact mapped bytes 72 21: jb 0x455a9b
        __asm _emit 0x72
        __asm _emit 0x21
        push 6776b4h
        push 0
        push 142h
        push 6776a8h
        push 2
        ; Exact mapped bytes E8 CE 73 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455a9b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x455a6e
        __asm _emit 0x75
        __asm _emit 0xcd
        push 6776a0h
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 200h]
        push edx
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
