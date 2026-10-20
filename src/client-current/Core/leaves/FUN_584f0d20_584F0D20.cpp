// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F0D20 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_584f0d20_584F0D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB EB FF FF: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B5 25 2C 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x25
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea edx, [ebp - 0ch]
        push edx
        push 588a2544h
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588a2548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
