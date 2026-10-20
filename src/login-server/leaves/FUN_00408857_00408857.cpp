// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408857 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00408857_00408857() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 C8 52 02 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 BA 52 02 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 74 25: je 0x4088c7
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5E 50 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 110h], 0
        ; Exact mapped bytes 74 3B: je 0x40890e
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x4088fa
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 02 00 00: call 0x408b70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x408901
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
