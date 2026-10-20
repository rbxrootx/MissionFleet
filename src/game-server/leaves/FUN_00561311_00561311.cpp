// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561311 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00561311_00561311() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f117h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 5bh
        push 5cc7a4h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 1E 9E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        push 60h
        push 5cc7a4h
        push 38h
        ; Exact mapped bytes E8 0F BD F8 FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 24: je 0x561384
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 41 FD FF FF: call 0x5610c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x56138b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5613b5
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 5cc7a4h
        ; Exact mapped bytes E8 50 36 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5613b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x56139e
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 11: je 0x5613d5
        __asm _emit 0x74
        __asm _emit 0x11
        push 62h
        push 5cc7a4h
        ; Exact mapped bytes E8 30 36 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5613d5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5613bb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 28h], edx
        push 66h
        push 5cc7a4h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 69 9D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
