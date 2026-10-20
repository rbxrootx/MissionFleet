// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F81EA .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004f81ea_004F81EA() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 14: jle 0x4f820c
        __asm _emit 0x7e
        __asm _emit 0x14
        push 220h
        push 672eech
        ; Exact mapped bytes E8 39 0B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f820c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4f81f0
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C 08: jl 0x4f8222
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 1B: jle 0x4f823d
        __asm _emit 0x7e
        __asm _emit 0x1b
        push 0f112h
        push 673114h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C7 FD FF FF: call 0x4f8004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
