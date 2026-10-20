// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971D4D .. +0x5D bytes.
extern "C" __declspec(naked) void _Fiopen() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push 103h
        push eax
        push 104h
        lea eax, [ebp - 20ch]
        push eax
        push 0
        ; Exact mapped bytes E8 46 B8 00 00: call 0x5897d5c4
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x58971d89
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x58971d9e
        __asm _emit 0xeb
        __asm _emit 0x15
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 20ch]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 FA FE FF FF: call 0x58971c95
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 32 AE 00 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
