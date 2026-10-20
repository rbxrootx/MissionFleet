// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FEA1 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_5886fea1_5886FEA1() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 210h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push edi
        push 20ah
        xor edi, edi
        lea eax, [ebp - 210h]
        push edi
        push eax
        ; Exact mapped bytes E8 45 CF FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 210h]
        push eax
        push 105h
        ; Exact mapped bytes FF 15 F4 41 89 58: call dword ptr [0x588941f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 104h
        ; Exact mapped bytes 77 0F: ja 0x5886fef6
        __asm _emit 0x77
        __asm _emit 0x0f
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes E8 80 FF FF FF: call 0x5886fe73
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 42: jmp 0x5886ff38
        __asm _emit 0xeb
        __asm _emit 0x42
        push ebx
        push esi
        lea ebx, [eax + 1]
        push 2
        push ebx
        ; Exact mapped bytes E8 0D F3 FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x5886ff17
        __asm _emit 0x74
        __asm _emit 0x0c
        push esi
        push ebx
        ; Exact mapped bytes FF 15 F4 41 89 58: call dword ptr [0x588941f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x5886ff24
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 53 25 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        ; Exact mapped bytes EB 09: jmp 0x5886ff2d
        __asm _emit 0xeb
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 49 FF FF FF: call 0x5886fe73
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        push esi
        ; Exact mapped bytes E8 DD CC FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop esi
        mov eax, edi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop edi
        ; Exact mapped bytes E8 0D 11 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
