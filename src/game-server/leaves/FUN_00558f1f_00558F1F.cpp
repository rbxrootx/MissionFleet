// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558F1F .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00558f1f_00558F1F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x558f56
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 42h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 18 6F F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6f
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x558f56
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d8h
        push 5cfe58h
        ; Exact mapped bytes E8 AF BA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558f56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x558f2b
        __asm _emit 0x75
        __asm _emit 0xcf
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0C: je 0x558f75
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B8 5F FF FF: call 0x54ef2a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 FD FF FF: call 0x558d09
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
