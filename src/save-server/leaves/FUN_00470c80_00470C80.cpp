// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470C80 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00470c80_00470C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1E: je 0x470cb2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 64 E1 67 00: mov ecx, dword ptr [0x67e164]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 73 02: jae 0x470cb2
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB D8: jmp 0x470c8a
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes A1 64 E1 67 00: mov eax, dword ptr [0x67e164]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, eax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 73 0A: jae 0x470cce
        __asm _emit 0x73
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 04: je 0x470cd2
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x470cd5
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
