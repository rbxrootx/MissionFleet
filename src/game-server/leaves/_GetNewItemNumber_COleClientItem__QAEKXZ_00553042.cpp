// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553042 .. +0x9E bytes.
extern "C" __declspec(naked) void _GetNewItemNumber_COleClientItem__QAEKXZ_00553042() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 0e4h
        push 5cfa08h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 02 81 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5A 4D 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0e7h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E4 80 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0xfa
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
        ; Exact mapped bytes E8 69 DE FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x5530ba
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 28h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x5530b8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5530ba
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DC: jmp 0x553096
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 02: jne 0x5530c2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x5530cd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB B8: jmp 0x553085
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
