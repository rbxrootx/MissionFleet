// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546B67 .. +0x88 bytes.
extern "C" __declspec(naked) void _RegisterAll_COleObjectFactory__SGHXZ_00546B67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E8 EA 9A FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 F7 C1 FF FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        ; Exact mapped bytes E8 42 01 00 00: call 0x546cd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x546b9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3F: je 0x546be1
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x546bdf
        __asm _emit 0x75
        __asm _emit 0x2e
        push 640d20h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 24h
        push ecx
        ; Exact mapped bytes E8 EE 21 F1 FF: call 0x458db0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x546bdf
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x546bdf
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB B2: jmp 0x546b93
        __asm _emit 0xeb
        __asm _emit 0xb2
        push 0
        ; Exact mapped bytes E8 C4 C2 FF FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
