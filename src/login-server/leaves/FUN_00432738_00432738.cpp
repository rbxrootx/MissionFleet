// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432738 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_00432738_00432738() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 204h
        mov eax, dword ptr [ecx]
        lea edx, [ebp - 4]
        push edx
        lea edx, [ebp - 204h]
        push 200h
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x43276e
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [ebp - 4]
        lea eax, [ebp - 204h]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AB 25 00 00: call 0x434d17
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x432789
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x43277b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0f020h
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C6 25 00 00: call 0x434d4f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
