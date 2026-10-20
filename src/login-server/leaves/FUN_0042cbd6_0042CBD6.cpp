// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CBD6 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042cbd6_0042CBD6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        lea eax, [ebp - 8]
        push esi
        push eax
        mov esi, ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 80 C2 43 00: call dword ptr [0x43c280]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x42cc02
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 C2 43 00: call dword ptr [0x43c284]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x42cc07
        __asm _emit 0x75
        __asm _emit 0x05
        and dword ptr [esi], 0
        ; Exact mapped bytes EB 14: jmp 0x42cc1b
        __asm _emit 0xeb
        __asm _emit 0x14
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 18h]
        lea ecx, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 74 FF FF FF: call 0x42cb8a
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
