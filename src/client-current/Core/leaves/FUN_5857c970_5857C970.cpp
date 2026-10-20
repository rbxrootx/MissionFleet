// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857C970 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5857c970_5857C970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 08: je 0x5857c987
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0D: jmp 0x5857c994
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80015000h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D7 FF 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
