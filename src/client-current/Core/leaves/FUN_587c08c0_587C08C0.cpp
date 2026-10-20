// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C08C0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_587c08c0_587C08C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 50: je 0x587c0928
        __asm _emit 0x74
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 73 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x73
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CF 60 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x60
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 4E 07 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x587c091f
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0926
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB AA: jmp 0x587c08d2
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
