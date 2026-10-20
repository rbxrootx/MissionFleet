// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855B480 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5855b480_5855B480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E D5 FF FF: call 0x58558a20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 1ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 CB F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        add edx, 1ch
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 CC F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 FA C4 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x5855b4f3
        __asm _emit 0x74
        __asm _emit 0x16
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 5B C5 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc5
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
