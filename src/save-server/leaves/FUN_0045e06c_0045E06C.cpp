// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E06C .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0045e06c_0045E06C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eb19h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push 678828h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 A7 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 678844h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 A7 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 83 A9 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7D D0 0E 00: call 0x54b139
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 8
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C8 B7 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 678854h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B A7 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa7
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE AB 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 21 CF 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcf
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
