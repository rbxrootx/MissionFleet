// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551AB2 .. +0x9E bytes.
extern "C" __declspec(naked) void _GetNewItemNumber_COleClientItem__QAEKXZ_00551AB2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 0e4h
        push 67c1e0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 92 87 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 44 4D 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0e7h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 74 87 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 DE FF FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x551b2a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 28h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x551b28
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x551b2a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DC: jmp 0x551b06
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x551b32
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x551b3d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB B8: jmp 0x551af5
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
