// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FFDA .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_5886ffda_5886FFDA() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        xor ebx, ebx
        mov dword ptr [ebp - 18h], ebx
        mov dword ptr [ebp - 14h], ebx
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 8], ebx
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 2C 86 FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 81 FE FF: call 0x58858178
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5887001b
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 15 D8 41 89 58: call dword ptr [0x588941d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x5887002a
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E7 CB FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, ebx
        pop ebx
        leave
        ret
    }
}
