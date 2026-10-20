// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B990 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_0051b990_0051B990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        push ebx
        push esi
        push edi
        push 100h
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 8F F2 FD FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x51b9ed
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 5cb1bch
        ; Exact mapped bytes E8 4D 42 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51b9e5
        __asm _emit 0x74
        __asm _emit 0x11
        push 22h
        push 5cb1b0h
        ; Exact mapped bytes E8 20 90 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b9e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51b9cb
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes EB 18: jmp 0x51ba05
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 00 00 00: call 0x51ba0e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
