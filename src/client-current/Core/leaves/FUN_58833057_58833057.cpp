// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58833057 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_58833057_58833057() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 24h], 0ch
        push 1
        xor edi, edi
        mov dword ptr [ebp - 20h], eax
        push eax
        mov dword ptr [ebp - 1ch], edi
        mov esi, edi
        ; Exact mapped bytes FF 15 60 40 89 58: call dword ptr [0x58894060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588330a2
        __asm _emit 0x74
        __asm _emit 0x18
        push edi
        push edi
        push 1
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 5C 40 89 58: call dword ptr [0x5889405c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        lea ecx, [ebp - 24h]
        cmove ecx, esi
        mov esi, ecx
        push 588f0014h
        ; Exact mapped bytes E8 A7 92 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push edi
        push esi
        ; Exact mapped bytes FF 15 EC 43 89 58: call dword ptr [0x588943ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x588330c6
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x588330d6
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        sub eax, 0b7h
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 70 DF FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
