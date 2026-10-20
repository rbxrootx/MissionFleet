// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A185 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_0041a185_0041A185() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 20h]
        ; Exact mapped bytes FF 15 1C C4 43 00: call dword ptr [0x43c41c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x41a1b0
        __asm _emit 0x74
        __asm _emit 0x14
        cmp eax, 1
        ; Exact mapped bytes 74 0A: je 0x41a1ab
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 3
        ; Exact mapped bytes 7E 17: jle 0x41a1bd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 5
        ; Exact mapped bytes 7F 12: jg 0x41a1bd
        __asm _emit 0x7f
        __asm _emit 0x12
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x41a1b3
        __asm _emit 0xeb
        __asm _emit 0x03
        push -3
        pop eax
        mov edx, dword ptr [esi]
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
