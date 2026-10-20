// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588775D6 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_588775d6_588775D6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 18h]
        push 9
        push eax
        push 59h
        push esi
        ; Exact mapped bytes E8 BE 81 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58877614
        __asm _emit 0x74
        __asm _emit 0x16
        push 9
        lea eax, [ebp - 18h]
        push esi
        push eax
        ; Exact mapped bytes E8 16 FA FE FF: call 0x58867020
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        neg eax
        sbb eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x58877616
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 2F 9A FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
