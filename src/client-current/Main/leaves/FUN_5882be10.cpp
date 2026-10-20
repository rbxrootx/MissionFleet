// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BE10 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_5882be10() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 170h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x5882bed6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes E8 64 A6 F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edi, dword ptr [esp + 114h]
        mov eax, dword ptr [eax + edi*4 + 200h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 6A CF F4 FF: call 0x58778dc0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 62: je 0x5882bebe
        __asm _emit 0x74
        __asm _emit 0x62
        push 100h
        lea ecx, [esp + 10h]
        push 0
        push ecx
        ; Exact mapped bytes E8 DB 0D 15 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        add esp, 0ch
        ; Exact mapped bytes E8 25 A6 F5 FF: call 0x587864a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx edx, word ptr [ebx + 98h]
        mov eax, dword ptr [eax + edi*4 + 280h]
        and edx, 0ffh
        imul edx, eax
        push eax
        push edx
        push 5899df44h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        push 0ff000000h
        push edi
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes EB 0B: jmp 0x5882bec9
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0ff000000h
        push edi
        push 5898d61ch
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 0C CB 0D 00: call 0x589089e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcb
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop ebx
        mov ecx, dword ptr [esp + 104h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 F5 0C 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
