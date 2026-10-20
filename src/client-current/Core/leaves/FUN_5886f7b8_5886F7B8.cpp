// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F7B8 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5886f7b8_5886F7B8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 ED FB FF FF: call 0x5886f3b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        mov esi, eax
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x5886f7e1
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes EB 11: jmp 0x5886f7f2
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 01 00 00: call 0x5886f913
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
