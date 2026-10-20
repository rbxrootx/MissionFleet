// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BFA1 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0054bfa1_0054BFA1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x54bfc4
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 74 F5 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54bfd8
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a9h
        push 679318h
        ; Exact mapped bytes E8 6D CD FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54bfd8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x54bfad
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x54bfed
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        push 0
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 800h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 0
        push 1100h
        ; Exact mapped bytes FF 15 04 B8 68 00: call dword ptr [0x68b804]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x54c01c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], 0
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x54c03d
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 14 BA 68 00: call dword ptr [0x68ba14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
