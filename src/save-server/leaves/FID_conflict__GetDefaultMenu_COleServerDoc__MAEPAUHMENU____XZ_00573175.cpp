// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573175 .. +0x72 bytes.
extern "C" __declspec(naked) void FID_conflict__GetDefaultMenu_COleServerDoc__MAEPAUHMENU____XZ_00573175() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 230h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CF 70 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 E3 FB FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x5731a6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x5731e3
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 236h
        push 67cd14h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A7 70 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 08: je 0x5731cd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 16: jmp 0x5731e3
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 08: je 0x5731e1
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x5731e3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
