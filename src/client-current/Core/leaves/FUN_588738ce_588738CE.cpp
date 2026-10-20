// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588738CE .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_588738ce_588738CE() {
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
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E9 43 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        xor edi, edi
        push edi
        push edi
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 8]
        push dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 B2 BE FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 7E: je 0x5887398a
        __asm _emit 0x74
        __asm _emit 0x7e
        lea eax, [ebx + ebx]
        lea ecx, [eax + 8]
        cmp eax, ecx
        sbb eax, eax
        and eax, ecx
        ; Exact mapped bytes 74 67: je 0x58873981
        __asm _emit 0x74
        __asm _emit 0x67
        cmp eax, 400h
        ; Exact mapped bytes 77 13: ja 0x58873934
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes E8 BA EC FB FF: call 0x588325e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        test esi, esi
        ; Exact mapped bytes 74 57: je 0x58873983
        __asm _emit 0x74
        __asm _emit 0x57
        mov dword ptr [esi], 0cccch
        ; Exact mapped bytes EB 13: jmp 0x58873947
        __asm _emit 0xeb
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 96 95 FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 42: je 0x58873983
        __asm _emit 0x74
        __asm _emit 0x42
        mov dword ptr [esi], 0ddddh
        add esi, 8
        test esi, esi
        ; Exact mapped bytes 74 35: je 0x58873983
        __asm _emit 0x74
        __asm _emit 0x35
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5D BE FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x58873983
        __asm _emit 0x74
        __asm _emit 0x24
        push edi
        push edi
        push dword ptr [ebp + 18h]
        xor eax, eax
        cmp dword ptr [ebp + 18h], eax
        cmovne eax, dword ptr [ebp + 14h]
        push eax
        push -1
        push esi
        push edi
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F C2 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58873983
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, edi
        push esi
        ; Exact mapped bytes E8 5D D6 FB FF: call 0x58830fe6
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        pop ecx
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x5887399a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        and dword ptr [eax + 350h], 0fffffffdh
        mov eax, edi
        lea esp, [ebp - 24h]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A4 D6 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
