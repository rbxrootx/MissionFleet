// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D0B1 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0041d0b1_0041D0B1() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 1ch]
        xor edx, edx
        push esi
        cmp eax, edx
        mov esi, ecx
        ; Exact mapped bytes 74 05: je 0x41d0c5
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41d0c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 18h]
        cmp ecx, edx
        ; Exact mapped bytes 74 05: je 0x41d0d3
        __asm _emit 0x74
        __asm _emit 0x05
        sub ecx, dword ptr [esi + 8]
        ; Exact mapped bytes EB 02: jmp 0x41d0d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push edx
        push eax
        mov eax, dword ptr [ebp + 14h]
        push ecx
        sub eax, dword ptr [esi + 8]
        push eax
        mov eax, dword ptr [esi + 14h]
        imul eax, eax, 34h
        push edx
        push edx
        push edx
        add eax, dword ptr [esi + 0ch]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5A E7 FF FF: call 0x41b854
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 2ch
        inc dword ptr [esi + 14h]
        pop esi
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
