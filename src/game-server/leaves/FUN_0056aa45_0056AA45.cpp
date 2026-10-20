// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AA45 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_0056aa45_0056AA45() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe3ah
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
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 27ch
        push 5d053ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E7 06 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x56aa93
        __asm _emit 0x75
        __asm _emit 0x14
        push 27dh
        push 5d053ch
        ; Exact mapped bytes E8 72 9F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56aa93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56aa79
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 75 02: jne 0x56aaa7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5A: jmp 0x56ab01
        __asm _emit 0xeb
        __asm _emit 0x5a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 64 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 E6 64 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AD 11 FB FF: call 0x51bc7f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 64 FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56aaf2
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C4 64 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B 2D F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
