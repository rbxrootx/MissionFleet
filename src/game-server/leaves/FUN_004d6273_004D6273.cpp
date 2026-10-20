// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6273 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004d6273_004D6273() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 BE FD FF FF: call 0x4d6041
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3A: je 0x4d62cd
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 6F FB FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4d62c7
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4d62c7
        __asm _emit 0x74
        __asm _emit 0x14
        push 48eh
        push 5c64b4h
        ; Exact mapped bytes E8 3E E7 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d62c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4d62a2
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
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
