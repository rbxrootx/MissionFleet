// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005373ED .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_005373ed_005373ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2E: je 0x53742d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 25: je 0x53742d
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53742d
        __asm _emit 0x75
        __asm _emit 0x14
        push 3f3h
        push 636640h
        ; Exact mapped bytes E8 18 19 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53742d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x5373f9
        __asm _emit 0x75
        __asm _emit 0xc6
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x537442
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x53744b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
