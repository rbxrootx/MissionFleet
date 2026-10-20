// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A650 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_0052a650_0052A650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 A7 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 131h
        push 5c8fcch
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 D7 0A FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 59: je 0x52a6eb
        __asm _emit 0x74
        __asm _emit 0x59
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 53: jne 0x52a6eb
        __asm _emit 0x75
        __asm _emit 0x53
        cmp dword ptr [ebp - 4], 0e146h
        ; Exact mapped bytes 74 4A: je 0x52a6eb
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 4], 0e147h
        ; Exact mapped bytes 74 41: je 0x52a6eb
        __asm _emit 0x74
        __asm _emit 0x41
        cmp dword ptr [ebp - 4], 0e145h
        ; Exact mapped bytes 74 38: je 0x52a6eb
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10000h
        push ecx
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 15 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52a6e4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 14 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x52a6fb
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 A1 FC FF: call 0x4f48f3
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
