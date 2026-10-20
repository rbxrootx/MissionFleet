// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AC90 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_5878ac90() {
    __asm {
        sub esp, 84h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 80h], eax
        push ebx
        push esi
        push edi
        push 58996c40h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 3D 74 C1 98 58: mov edi, dword ptr [0x5898c174]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push 0
        push -1
        lea ecx, [esp + 18h]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1feh
        mov ebx, eax
        ; Exact mapped bytes E8 4A 68 1E 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x68
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esi, eax
        lea eax, [esp + 10h]
        add esp, 4
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x5878acf0
        __asm _emit 0x75
        __asm _emit 0xf9
        push ebx
        sub eax, edx
        push esi
        inc eax
        push eax
        lea edx, [esp + 18h]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 5
        push 0
        push 0
        lea eax, [esp + 18h]
        push eax
        push 58996c38h
        push 0
        ; Exact mapped bytes FF 15 B4 C3 98 58: call dword ptr [0x5898c3b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x5878ad2d
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 FC 20 1F 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x20
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esp + 8ch]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 9C 1E 1F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 84h
        ret
    }
}
