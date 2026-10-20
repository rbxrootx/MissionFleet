// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588668A3 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_588668a3_588668A3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push esi
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x588668d8
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 98 BB FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 A5 BB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 D7 A6 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 7C: jmp 0x58866954
        __asm _emit 0xeb
        __asm _emit 0x7c
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, 0fffffff9h
        ; Exact mapped bytes 74 1B: je 0x588668ff
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 71 BB FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 7E BB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 B0 A6 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 54: jmp 0x58866953
        __asm _emit 0xeb
        __asm _emit 0x54
        lea ecx, [ebp - 28h]
        push ecx
        push 0
        push eax
        ; Exact mapped bytes FF 15 D4 41 89 58: call dword ptr [0x588941d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5886691f
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F7 BA FF FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 29: jmp 0x58866948
        __asm _emit 0xeb
        __asm _emit 0x29
        test byte ptr [ebp - 28h], 10h
        ; Exact mapped bytes 75 2C: jne 0x58866951
        __asm _emit 0x75
        __asm _emit 0x2c
        test byte ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 26: je 0x58866951
        __asm _emit 0x74
        __asm _emit 0x26
        shr ebx, 1
        test bl, 1
        ; Exact mapped bytes 74 1F: je 0x58866951
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 23 BB FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 5
        ; Exact mapped bytes E8 2D BB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes E8 22 BB FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x58866953
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 F1 A6 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
