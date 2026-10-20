// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1830 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_587c1830_587C1830() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x587c1843
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 7fffffffh
        ; Exact mapped bytes 76 09: jbe 0x587c184c
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 80070057h
        ; Exact mapped bytes EB 14: jmp 0x587c1860
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 13 4E CC FF: call 0x58486670
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4e
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 0F: jge 0x587c1875
        __asm _emit 0x7d
        __asm _emit 0x0f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x587c1875
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
