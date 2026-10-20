// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006CA40 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_1006ca40_1006CA40() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 0ch
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x1006cb22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 20bb8h]
        mov ebx, dword ptr [ecx + 4]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x1006cb22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 0ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x1006cb17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 104e0h]
        mov edx, dword ptr [eax + 0b4h]
        mov ecx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [eax + 0ach]
        imul ecx, dword ptr [eax + 0a8h]
        push edx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 7D 82 FA FF: call 0x10014d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub eax, edx
        mov edx, dword ptr [esi + 8]
        sub ecx, edx
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 C9 FC 0F 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 BB FC 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp eax, 320h
        mov edx, 100h
        ; Exact mapped bytes 7D 18: jge 0x1006cb0f
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, eax
        shl ecx, 8
        sub ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 09 26 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 8]
        test ebx, ebx
        ; Exact mapped bytes 0F 85 4D FF FF FF: jne 0x1006ca6f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
