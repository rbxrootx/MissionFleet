// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A889 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_0050a889_0050A889() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E A8 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffh
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 77 5A: ja 0x50a911
        __asm _emit 0x77
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 95 EE A9 50 00: jmp dword ptr [edx*4 + 0x50a9ee]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xee
        __asm _emit 0xa9
        __asm _emit 0x50
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 47: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 8], 7fffffffh
        ; Exact mapped bytes EB 3E: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 30: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 22: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 14: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 06: jmp 0x50a911
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8F A7 FE FF: call 0x4f50aa
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 77 5A: ja 0x50a99f
        __asm _emit 0x77
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 95 0E AA 50 00: jmp dword ptr [edx*4 + 0x50aa0e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0xaa
        __asm _emit 0x50
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 47: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 10h], 7fffffffh
        ; Exact mapped bytes EB 3E: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 30: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 22: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 14: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 06: jmp 0x50a99f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 14h]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 87 AC 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x50a9e5
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x50a9e5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2F 1A 03 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
