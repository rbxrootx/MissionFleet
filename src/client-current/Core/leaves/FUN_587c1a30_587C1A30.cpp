// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1A30 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_587c1a30_587C1A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be300h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 39: je 0x587c1a87
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x587c1a73
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c1a7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 27: je 0x587c1aba
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 8A F5 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 46 FF FF: call 0x587b6140
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
